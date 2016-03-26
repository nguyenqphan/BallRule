using UnityEngine;
using System.Collections;

public class EventManager : MonoBehaviour {

	public delegate void EventAction();
	public static event EventAction OnCamMove;
	public static event EventAction OnPlayerEnter;

	private SoundBreaking soundDropBall;
	private UpdateScore updateScore;
	private Cube cube;

	[HideInInspector]
	public bool isCollided = false; 

	void Awake()
	{
		soundDropBall = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		cube = GetComponent<Cube>();
	}

	void OnCollisionEnter(Collision collider)
	{
		if (!isCollided) {
			if (collider.gameObject.tag == "Player") {
				soundDropBall.PlayDropBall ();
				GameStateManager.HighScore++;
				updateScore.ChangeLiveScore ();
				cube.PulseCube();

				if (OnCamMove != null) {
					OnCamMove ();
				}
				if (OnPlayerEnter != null) {
					OnPlayerEnter ();	
				}	
			}

			isCollided = true;
		}
	}
		
}
