using UnityEngine;
using System.Collections;

public struct ParticleP{
	public float startTime;
	public float speedTime;
}

public class ParticeDeactivate : MonoBehaviour {

	ParticleP particleP;

//	float startTime = 0f;
//	float speedTime = 1f;
//
	// Use this for initialization
	void Start () {
		particleP.startTime = 0f;
		particleP.speedTime = 1f;
	}
	
	// Update is called once per frame
	void Update () {
		if(gameObject.activeInHierarchy)
		{
			particleP.startTime += Time.deltaTime * particleP.speedTime;
			if(particleP.startTime >= 3f)
			{
				particleP.startTime = 0;
				gameObject.SetActive(false);
//				Debug.Log(startTime);
			}
		}
			
	}
}
