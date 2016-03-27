using UnityEngine;
using System.Collections;

//Use struct to store variables to reduce Garbage Collection
public struct CubeP{
	public float rotateSpeed;					//The speed of the rotation
	public bool isRotating;						//The Cube is rotating
	public float startTime;						//Keep track of the degree of the rotation
	public float startingY;						//Position of the Current Cube
	public float newY;							//Position of the cube after it moves
	public bool isMovingDown;					//Is the cube moving down
	public bool isMovingUp;						//Is the cube moving up
	public float movementDistance;				//Distance to move back and forth
	public float floatSpeed;					//The speed of floating cube
	public bool isOneRound;						//Make sure the cube rorates only one round
}			

public class Cube : MonoBehaviour {
	CubeP cubeP;

	void Start()
	{
		///initialize the variables
		cubeP.rotateSpeed = 30f;
		cubeP.isRotating = true;
		cubeP.floatSpeed = 5f;
		cubeP.movementDistance = 0.2f;
	}

	//A method to rotate the cube
	public void RotateCube(float dirToRotate)
	{
		StopAllCoroutines();										//Rotate the cube
		cubeP.startTime = 0;			 							//set the rotate degree to zero
		StartCoroutine(StartToRotate(dirToRotate));					//use coroutine to call a function
	}

	//Rotate the cube
	public IEnumerator StartToRotate(float dirToRotate)
	{
		while (cubeP.isRotating) {
			transform.Rotate (transform.forward * dirToRotate, Time.deltaTime * cubeP.rotateSpeed, Space.World);        	//rotate the cube
			cubeP.startTime += Time.deltaTime * cubeP.rotateSpeed;															//keep track of the degree of rotation

			if (cubeP.startTime >= 30) {																					//condition to stop the rotation of the cube
				cubeP.isRotating = false;																				  
				cubeP.startTime = 0;
			}

			yield return new WaitForFixedUpdate();								
		}

		cubeP.isRotating = !cubeP.isRotating;																				//set isRotating = true
	}

	//Is used to call the coroutine function
	public void PulseCube()
	{
		cubeP.isMovingUp = true;
		cubeP.isMovingDown = true;
		StartCoroutine(StartPulse());
	}


	//Make the Cube float up and down for one round
	private IEnumerator StartPulse()
	{
		cubeP.startingY = transform.position.y;																				//Staring y position of the cube.
		while (cubeP.isMovingDown) {																						//keep moving the cube down...
			cubeP.newY = transform.position.y - cubeP.movementDistance * cubeP.floatSpeed * Time.deltaTime;

			if (cubeP.newY < cubeP.startingY  - cubeP. movementDistance) {													//condition to stop moving the cube down
				cubeP.isMovingDown = false;						
			} 
//
			transform.position = new Vector3 (transform.position.x, cubeP.newY, transform.position.z);						//new position the the cube

			yield return new WaitForFixedUpdate();
		}

		while (cubeP.isMovingUp) {																							//...moving the cube back up again
			cubeP.newY = transform.position.y + cubeP.movementDistance * cubeP.floatSpeed * Time.deltaTime;

			if (cubeP.newY > cubeP.startingY  + cubeP. movementDistance) {													//condition to stop moving the cube up
				cubeP.isMovingUp = false;
			} 
			//
			transform.position = new Vector3 (transform.position.x, cubeP.newY, transform.position.z);						//new position for the cube

			yield return new WaitForFixedUpdate();
		}
			
	}
}


