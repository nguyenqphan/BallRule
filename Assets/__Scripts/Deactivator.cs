using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Deactivator : MonoBehaviour {
	
	public delegate void EffectAction(GameObject gameObject);
	public static event EffectAction Emissive;

	private float time = 1f;
	private float resetTime = 0f;
	private Flashing flashing;
	private EventManager eventManager;

	private bool isFlashing = false;

	void Awake()
	{
		flashing = GetComponent<Flashing>();
		eventManager = GetComponentInChildren<EventManager>();
	}
		
	// Update is called once per frame
	void Update () {
		//Each comboCube can stay active in the scene for only 12 seconds
		if(gameObject.activeInHierarchy)
		{
			resetTime += Time.deltaTime * time;

			if(resetTime > 9f && !isFlashing)
			{
				flashing.StartFlashing();
				isFlashing = true;

			}

			if(resetTime >= 12f)
			{
				resetTime = 0f;
				isFlashing = false;	
				eventManager.isCollided = false;
				gameObject.SetActive(false);
				if(Emissive != null)
				{
					Emissive(gameObject);
				}

			}

		}
	}
}
