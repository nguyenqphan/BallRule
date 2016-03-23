using UnityEngine;
using System.Collections;

public class CubeMaterials : MonoBehaviour {

	public Material[] cubeMats;

	private Renderer renderMaterial;


	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();

	}

	// Use this for initialization
	void Start () {
		renderMaterial.material = cubeMats[GameStateManager.Instance.SceneMaterialNum];
	}
}
