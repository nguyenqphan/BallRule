using UnityEngine;
using System.Collections;

public struct CubeManagerP
{
	public SoundBreaking soundCubeClick;
	public bool getInput;
	public RaycastHit hit;
	public Ray ray;
	public Cube cube;
}

public class CubeManager : MonoBehaviour {

	CubeManagerP cubeManagerP;
	public LayerMask cubeLayerMask;	

	void Awake()
	{
		cubeManagerP.soundCubeClick = GetComponent<SoundBreaking>();
	}

	void Start()
	{
		cubeManagerP.getInput = false;

	}

	// Update is called once per frame
	void Update () {
	

//		#if UNITY_STANDALONE || UNITY_WEBPLAYER

		if(Input.GetButtonDown("Fire1"))
		{
			cubeManagerP.getInput = true;
		}

//		#elif UNITY_IOS || UNITY_ANDROID || UNITY_WP8 || UNITY_IPHONE

//		if(Input.touchCount == 1)
//		{
//			if(!smash && Input.GetTouch(0).phase == TouchPhase.Began || Input.GetTouch(0).phase == TouchPhase.Moved)
//			{
//				Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
//				RaycastHit hit;
//					
//				if(Physics.Raycast(ray, out hit, 13f, cubeLayerMask))
//				{
//					Debug.Log("Rotate the Cube");
//					smash = true;
//					soundCubeClick.PlayCubeClick();
//					Cube cube = hit.collider.GetComponentInParent<Cube>();					//Get the cube component of the parent
//					if(hit.collider.tag == "RightCube")												
//						cube.RotateCube(1f);												//rotate clockwise
//					else if(hit.collider.tag == "LeftCube")
//						cube.RotateCube(-1f);												//rotate counter-clockwise
//				}
//			}
//
//			if(Input.GetTouch(0).phase == TouchPhase.Ended)
//			{
//				smash = false;
//			}

//		}

//		#endif //End of mobile platform dependendent compilation section started above with #elif
	}

	void FixedUpdate()
	{
		if(cubeManagerP.getInput)
		{
			cubeManagerP.ray = Camera.main.ScreenPointToRay(Input.mousePosition);				//a ray from camera to the mouse position in 3d scene
			//store the infomation of hit object

			if(Physics.Raycast(cubeManagerP.ray, out cubeManagerP.hit, 20f, cubeLayerMask))
			{
				cubeManagerP.soundCubeClick.PlayCubeClick();
				cubeManagerP.cube = cubeManagerP.hit.collider.GetComponentInChildren<Cube>();					//Get the cube component of the parent
				//				Debug.Log(cube.transform.position);

				if(cubeManagerP.hit.point.x < -2.5f)
				{
					cubeManagerP.cube.RotateCube(1f);
				}
				else if(cubeManagerP.hit.point.x > 2.5f){
					cubeManagerP.cube.RotateCube(-1f);
				} else if(cubeManagerP.hit.point.x < 0)
				{
					cubeManagerP.cube.RotateCube(-1f);
				}else
					cubeManagerP.cube.RotateCube(1f);
			}

			cubeManagerP.getInput = false;
		}
	}

}
