using UnityEngine;
using System.Collections;

public class AddTorgueTest : MonoBehaviour {
//
	public float torque = 0f;
	private Rigidbody rb;
	private RaycastHit hit;
	public LayerMask cube = -1;	
	private bool mousePress = false;

	void Start() {
		rb = GetComponent<Rigidbody>();
	}


	void Update()
	{
		if(Input.GetButtonDown("Fire1"))
		{
			mousePress = true;
		}
	}

	void FixedUpdate() {


		if(mousePress)
		{
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if(Physics.Raycast(ray, out hit, 100, cube.value))
			{
				if(hit.point.x < -2.5f)
				{
					rb.AddTorque(transform.forward * torque, ForceMode.VelocityChange);
				}
				else if(hit.point.x > 2.5f){
					rb.AddTorque(-transform.forward * torque,  ForceMode.VelocityChange);
				} else if(hit.point.x < 0)
				{
					rb.AddTorque(-transform.forward * torque,  ForceMode.VelocityChange);
				}else
					rb.AddTorque(transform.forward * torque,  ForceMode.VelocityChange);

			}
			mousePress = false;
		}

	}

}
