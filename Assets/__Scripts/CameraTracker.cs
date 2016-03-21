using UnityEngine;
using System.Collections;

public struct CameraP{
	public Vector3 velocity;
	public float smoothTime;
	public Vector3 playerPos;
	public Vector3 playerPosNext;
	public float distanceY;
	public Vector3 playerStartPos;
	public float distanceToMove;
}

public class CameraTracker : MonoBehaviour {

	CameraP cameraP;

	public GameObject player;
//
//	private Vector3 velocity = Vector3.down;
//	private float smoothTime = 0.9f;
//
//	private Vector3 playerPos;									// Store the first position of the player
//	private Vector3 playerPosNext;								// Store the second position of the player when it lands on the cube.
//	private float distanceY;									// Store the distance of playerPos and PlayerPosNext (The distance the camera moves)
//										
//	private Vector3 playerStartPos;  
//	private float distanceToMove;

	void OnEnable()
	{
		EventManager.OnCamMove += PlayerLand;
//		EventManager.OnPlayerLeft += PlayerLeft;
	}

	void OnDisable()
	{
		EventManager.OnCamMove -= PlayerLand;					// Listen to an event action to trigger PlayerLand function
//		EventManager.OnPlayerLeft -= PlayerLeft;                // Listten to an event action to trigger PlayerLeft function 

	}

	// Use this for initialization
	void Start () 
	{
		cameraP.velocity = Vector3.down;
		cameraP.smoothTime = 0.7f;

		cameraP.playerStartPos = player.transform.position;				// Get the postion of the player when the game just starts
	}
		
	void PlayerLand() 
	{
		
		cameraP.playerPosNext = player.transform.position;																	// 
		cameraP.distanceY = Vector3.Distance(new Vector3(0f, cameraP.playerStartPos.y, 0f), new Vector3(0f, cameraP.playerPosNext.y, 0f )); //
		cameraP.playerStartPos = cameraP.playerPosNext;
		MoveCamera();
	
	}

	public void MoveCamera()
	{
		
		StopAllCoroutines();
		StartCoroutine(CameraToMove());
	}

	IEnumerator CameraToMove()
	{
		yield return new WaitForSeconds(2f);
		cameraP.distanceToMove = transform.position.y - cameraP.distanceY;
		while(true)
		{	
			transform.position = Vector3.SmoothDamp( transform.position, new Vector3(transform.position.x, cameraP.distanceToMove, transform.position.z), ref cameraP.velocity , cameraP.smoothTime);

			yield return 0;
		}
	}

//	IEnumerator FrameCounter()
//	{
//		
//		while (true) {
//			frameCounter++;
//			yield return 0;
//		}
//	}
//	void PlayerLeft()
//	{
//		//cam = false;
//		Debug.Log(cam + "left");
////		Debug.Log(transform.position);
//	}
	
}
