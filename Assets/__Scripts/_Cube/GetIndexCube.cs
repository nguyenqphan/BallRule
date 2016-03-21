using UnityEngine;
using System.Collections;

public class GetIndexCube: MonoBehaviour{

	public int index;

	void Awake()
	{
		index = GameStateManager.Instance.IndexMaterial;
	}
		
}
