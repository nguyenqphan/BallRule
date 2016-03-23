using UnityEngine;
using System.Collections;

public class SkyboxMaterials : MonoBehaviour {

	public Material[] materials;
	private Skybox skybox;
	// Use this for initialization

	void Awake()
	{
		skybox = GetComponent<Skybox>();
	}
	void Start () 
	{
	//	skybox.material = materials[GameManager.Instance.IndexMaterial];	
		skybox.material = materials[GameStateManager.Instance.SceneMaterialNum];	
	}
	
	// Update is called once per frame
	void Update () {
	}


}
	