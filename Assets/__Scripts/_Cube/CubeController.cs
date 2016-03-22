using UnityEngine;
using System.Collections;

public struct CubeControllerP{
	public float rotateSpeed;
	public float startTime;
	public bool rotating;
	public RaycastHit hit;
	public float dirToRotate;
}

public class CubeController : MonoBehaviour {
	CubeControllerP cubeControllerP;

//	public float rotateSpeed = 30f;                    // The speed of cube rotation
//	private float startTime = 0;					  // Stop the rotation after a specific time
	public LayerMask cube = -1;					  // Layer of the cube	
//	private bool rotating = false;                    // stop or continue the rotation

//	private RaycastHit hit;                           // Store the hit object's properties
//	private float dirToRotate;                        // Rotate around the direction of Y

	public AudioClip cubeClick;
	private AudioSource cubeClickSource;

	void Awake()
	{
		cubeClickSource = GetComponent<AudioSource>();
	}

	// Use this for initialization
	void Start () {
		cubeControllerP.rotateSpeed = 30f;
		cubeControllerP.startTime = 0f;
		cubeControllerP.rotating = false;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);					//shoot a ray form the camera to a mouse position in the world

		// Debug.DrawRay(ray1.origin, ray1.direction * 100, Color.green);               //Draw a ray to debug

		if(cubeControllerP.rotating == false){

			if(Input.GetButtonDown("Fire1")){												//Check if left mouse is clicked
				cubeClickSource.PlayOneShot(cubeClick , 1f);
				if(Physics.Raycast(ray, out cubeControllerP.hit, 100, cube.value))								//Check if the Raycast hit any cube in 100 unit from the camera
				{
					cubeClickSource.PlayOneShot(cubeClick , 1f);
					Debug.Log(cube + "is the layermask value");
					cubeControllerP.rotating = true;														//set rotating equal true, so that we can rotate the cube
					Debug.DrawRay(ray.origin, ray.direction * 100, Color.red, 2f);          //Debug

					if(cubeControllerP.hit.collider.gameObject.CompareTag("LeftCube"))                           //Check if the hit object is a LeftCube
					{
						cubeControllerP.dirToRotate = -1f;								
					}
					else if(cubeControllerP.hit.collider.gameObject.CompareTag("RightCube"))                     //Check if the hit object is a RightCube
					{
						cubeControllerP.dirToRotate = 1f;
					}
				}
			}
		}
		if(cubeControllerP.rotating == true)
		{
			cubeControllerP.hit.transform.Rotate(transform.forward * cubeControllerP.dirToRotate, Time.deltaTime * cubeControllerP.rotateSpeed, Space.World);         //rotate the cube
			cubeControllerP.startTime += Time.deltaTime  * cubeControllerP.rotateSpeed;	

			//the degree to rotate
			if(cubeControllerP.startTime >= 30)																					  //condition to stop the rotation of the cube
			{
				cubeControllerP.rotating = false;																				  
				cubeControllerP.startTime = 0;
			}
		}
	}
}
