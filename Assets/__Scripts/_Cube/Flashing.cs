using UnityEngine;
using System.Collections;

public class Flashing : MonoBehaviour {

	private bool isFlashing;
	private float timeFlashing = 0f;
	private float speedFlashing = 1f;
	private int countFlashing;

	private Renderer mesh;

	void Awake()
	{
		 mesh = gameObject.GetComponentInChildren<Renderer> ();
//		 mesh.material.shader = Shader.Find("Legacy Shaders/VertexLit");
	}

	public void StartFlashing()
	{
		countFlashing = 0;
		isFlashing = true;
		timeFlashing = 0;
		StopAllCoroutines();
		StartCoroutine(FlashingCube());
	}

	private IEnumerator FlashingCube()
	{
		while (isFlashing) 
		{
			timeFlashing += Time.deltaTime * speedFlashing;
				if (GameStateManager.Instance.TestIndex < 2) {
					if (timeFlashing < 0.4 && countFlashing < 3) {
						mesh.material.SetColor ("_Emission", new Color (1f, 1f, 1f, 1f));
					} else if (timeFlashing >= 0.4f) {
						mesh.material.SetColor ("_Emission", new Color (0f, 0f, 0f, 0f));
						if (timeFlashing >= 1) {
							timeFlashing = 0f;	
							countFlashing++;
						}
					}
				}
				else
				{
					if (timeFlashing < 0.4 && countFlashing < 3) {
						mesh.material.SetColor ("_Emission", new Color (0.2f, 0.2f, 0.2f, 0.2f));
					} else if (timeFlashing >= 0.4f) {
						mesh.material.SetColor ("_Emission", new Color (0f, 0f, 0f, 0f));
						if (timeFlashing >= 1) {
							timeFlashing = 0f;	
							countFlashing++;
						}
					}
				}

			yield return 0;
		}
	
	}
		
}
