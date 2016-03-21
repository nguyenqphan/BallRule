﻿using UnityEngine;
using System.Collections;

public class CubeMaterials : MonoBehaviour {



	public Material[] materialLeft;
	public Material[] materialRight;

	private Renderer renderMaterial;
	private GetIndexCube indexCube;

	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();
//		if(getIndext == null)
//		{
//			getIndext = this;
//		}
//		else if(getIndext != null)
//		{
//			
//		}

	}

	// Use this for initialization
	void Start () {

		if(gameObject.CompareTag("LeftCube") || gameObject.CompareTag("NotLeft"))
		{
			renderMaterial.material = materialLeft[GameStateManager.Instance.TestIndex];

		}
		else if(gameObject.CompareTag("RightCube") || gameObject.CompareTag("NotRight"))
		{
			renderMaterial.material = materialRight[GameStateManager.Instance.TestIndex];
		}
	}
}
