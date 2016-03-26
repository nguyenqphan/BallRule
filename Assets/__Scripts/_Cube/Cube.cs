using UnityEngine;
using System.Collections;


public struct CubeP{
	public float rotateSpeed;
	public bool isRotating;
	public float startTime;
	public float movingSpeed;
	public float startingY;
	public float newY;
	public bool isMovingDown;
	public bool isMovingUp;
	public float movementDistance;
	public float floatSpeed;
	public bool isOneRound;
}

public class Cube : MonoBehaviour {
	CubeP cubeP;

	void Start()
	{
		cubeP.rotateSpeed = 30f;
		cubeP.isRotating = true;
		cubeP.movingSpeed = 20f;
		cubeP.floatSpeed = 5f;
		cubeP.movementDistance = 0.2f;
	}

	//A method to rotate the cube
	public void RotateCube(float dirToRotate)
	{
		StopAllCoroutines();
		cubeP.startTime = 0;																								//set the rotate degree to zero
		StartCoroutine(StartToRotate(dirToRotate));																	//use coroutine to call a function
	}

	public IEnumerator StartToRotate(float dirToRotate)
	{
		while (cubeP.isRotating) {
			transform.Rotate (transform.forward * dirToRotate, Time.deltaTime * cubeP.rotateSpeed, Space.World);        	//rotate the cube
			cubeP.startTime += Time.deltaTime * cubeP.rotateSpeed;																//keep track of the degree of rotation

			if (cubeP.startTime >= 30) {																					//condition to stop the rotation of the cube
				cubeP.isRotating = false;																				  
				cubeP.startTime = 0;
			}

			yield return new WaitForFixedUpdate();								
		}

		cubeP.isRotating = !cubeP.isRotating;																					//set isRotating = true
	}

	public void PulseCube()
	{
		cubeP.isMovingUp = true;
		cubeP.isMovingDown = true;
		StartCoroutine(StartPulse());
	}

	private IEnumerator StartPulse()
	{
		cubeP.startingY = transform.position.y;
		while (cubeP.isMovingDown) {
			cubeP.newY = transform.position.y - cubeP.movementDistance * cubeP.floatSpeed * Time.deltaTime;

			if (cubeP.newY < cubeP.startingY  - cubeP. movementDistance) {
				cubeP.isMovingDown = false;
			} 
//
			transform.position = new Vector3 (transform.position.x, cubeP.newY, transform.position.z);

			yield return new WaitForFixedUpdate();
		}

		while (cubeP.isMovingUp) {
			cubeP.newY = transform.position.y + cubeP.movementDistance * cubeP.floatSpeed * Time.deltaTime;

			if (cubeP.newY > cubeP.startingY  + cubeP. movementDistance) {
				cubeP.isMovingUp = false;
			} 
			//
			transform.position = new Vector3 (transform.position.x, cubeP.newY, transform.position.z);

			yield return new WaitForFixedUpdate();
		}
			
	}
}


