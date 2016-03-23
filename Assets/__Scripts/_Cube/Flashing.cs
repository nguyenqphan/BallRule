using UnityEngine;
using System.Collections;

public struct FlashingP{
	public bool isFlashing;
	public float timeFlashing;
	public float speedFlashing;
	public int countFlashing;
	public Renderer mesh;
}

public class Flashing : MonoBehaviour {

	FlashingP flashingP;

	void Awake()
	{
		flashingP.mesh = gameObject.GetComponentInChildren<Renderer> ();
//		 mesh.material.shader = Shader.Find("Legacy Shaders/VertexLit");
	}

	void Start()
	{
		flashingP.timeFlashing = 0f;
		flashingP.speedFlashing = 1f;
	}

	public void StartFlashing()
	{
		flashingP.countFlashing = 0;
		flashingP.isFlashing = true;
		flashingP.timeFlashing = 0;
		StopAllCoroutines();
		StartCoroutine(FlashingCube());
	}

	private IEnumerator FlashingCube()
	{
		while (flashingP.isFlashing) 
		{
			flashingP.timeFlashing += Time.deltaTime * flashingP.speedFlashing;
				if (GameStateManager.Instance.SceneMaterialNum < 2) {
				if (flashingP.timeFlashing < 0.4 && flashingP.countFlashing < 3) {
					flashingP.mesh.material.SetColor ("_Emission", new Color (1f, 1f, 1f, 1f));
				} else if (flashingP.timeFlashing >= 0.4f) {
					flashingP.mesh.material.SetColor ("_Emission", new Color (0f, 0f, 0f, 0f));
					if (flashingP.timeFlashing >= 1) {
						flashingP.timeFlashing = 0f;	
						flashingP.countFlashing++;
						}
					}
				}
				else
				{
				if (flashingP.timeFlashing < 0.4 &&flashingP.countFlashing < 3) {
					flashingP.mesh.material.SetColor ("_Emission", new Color (0.2f, 0.2f, 0.2f, 0.2f));
				} else if (flashingP.timeFlashing >= 0.4f) {
					flashingP.mesh.material.SetColor ("_Emission", new Color (0f, 0f, 0f, 0f));
					if (flashingP.timeFlashing >= 1) {
						flashingP.timeFlashing = 0f;	
						flashingP.countFlashing++;
						}
					}
				}

			yield return 0;
		}
	
	}
		
}
