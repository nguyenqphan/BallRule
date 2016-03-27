using UnityEngine;
using System.Collections;

public class SphereController : MonoBehaviour {
	Rigidbody rb;
	public bool check = true;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter(Collision col)
	{
//		rb.mass = 100f;
	}
}
