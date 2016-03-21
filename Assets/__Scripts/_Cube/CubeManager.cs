using UnityEngine;
using System.Collections;

public class CubeManager : MonoBehaviour {

	public LayerMask cubeLayerMask;	
	private SoundBreaking soundCubeClick;
//	private bool smash =false;
	private Vector3 firstPos;


	void Awake()
	{
		soundCubeClick = GetComponent<SoundBreaking>();
	}



	// Update is called once per frame
	void Update () {
	

//		#if UNITY_STANDALONE || UNITY_WEBPLAYER

		if(Input.GetButtonDown("Fire1"))
		{
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);				//a ray from camera to the mouse position in 3d scene
			RaycastHit hit;																//store the infomation of hit object

			if(Physics.Raycast(ray, out hit, 20f, cubeLayerMask))
			{
				soundCubeClick.PlayCubeClick();
				Cube cube = hit.collider.GetComponentInChildren<Cube>();					//Get the cube component of the parent
	//				Debug.Log(cube.transform.position);

				if(hit.point.x < -2.5f)
				{
					cube.RotateCube(1f);
				}
				else if(hit.point.x > 2.5f){
					cube.RotateCube(-1f);
				} else if(hit.point.x < 0)
				{
					cube.RotateCube(-1f);
				}else
					cube.RotateCube(1f);

//				if(hit.collider.tag == "RightCube")												
//					cube.RotateCube(1f);												//rotate clockwise
//				else if(hit.collider.tag == "LeftCube")
//					cube.RotateCube(-1f);												//rotate counter-clockwise
			}
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
}
