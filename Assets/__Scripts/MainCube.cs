using UnityEngine;
using System.Collections;


public struct MainCubeP{
	public float rotateSpeed;
	public bool isRotating;
	public float startTime;
	public float movingSpeed;
}

public class MainCube : MonoBehaviour {

//		public GameObject leftWall;
//		public GameObject rightWall;
//
//		public void LeftWallOn()
//		{
//			leftWall.SetActive(true);
//			rightWall.SetActive(false);
//		}
//		public void RightWallOn()
//		{
//			leftWall.SetActive(false);
//			rightWall.SetActive(true);
//		}

	MainCubeP cubeP;

	void Start()
	{
		cubeP.rotateSpeed = 30f;
		cubeP.isRotating = true;
		cubeP.movingSpeed = 20f;
	}

	//A method to rotate the cube
	public void RotateCube(float dirToRotate)
	{
		StopAllCoroutines();
		cubeP.startTime = 0;																								//set the rotate degree to zero
		StartCoroutine(StartToRotate(dirToRotate));																			//use coroutine to call a function

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

			yield return 0;								
		}

		cubeP.isRotating = !cubeP.isRotating;																					//set isRotating = true
	}

	//Call this method to move a cube to desired target
	public void MoveCube(Vector3 targetPos)
	{
		StartCoroutine(StartToMove(targetPos));
	}

	public IEnumerator StartToMove(Vector3 targetPos)
	{
		while (transform.position != targetPos) {
			transform.position = Vector3.MoveTowards (transform.position, targetPos, cubeP.movingSpeed * Time.deltaTime);	//Moving to the target

			yield return 0;	
		}

//		if(gameObject.transform.position.x > 0)
//		{
//			RightWallOn();
//		}
//		if(gameObject.transform.position.x < 0)
//		{
//			LeftWallOn();
//		}
			
	}
}
