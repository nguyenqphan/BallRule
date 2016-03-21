using UnityEngine;
using System.Collections;

public class EventManager : MonoBehaviour {

	public delegate void EventAction();
	public static event EventAction OnCamMove;
//	public static event EventAction OnPlayerLeft;
	public static event EventAction OnPlayerEnter;

//	private WeatherMan weatherMan;
	private SoundBreaking soundDropBall;
	private UpdateScore updateScore;

	[HideInInspector]
	public bool isCollided = false; 


	void Awake()
	{
		soundDropBall = GameObject.Find("GameManager").GetComponent<SoundBreaking>();
		updateScore = GameObject.Find("UI").GetComponent<UpdateScore>();
//		weatherMan = GameObject.Find("WeatherCreater").GetComponent<WeatherMan>();
	}

//	void OnTriggerEnter(Collider collider)
//	{
//			if (collider.gameObject.tag == "Player") {
//			soundDropBall.PlayDropBall();
//			GameStateManager.HighScore++;
//			updateScore.ChangeLiveScore();
//
//				if (OnCamMove != null) {
//					OnCamMove ();
//				}
//				if (OnPlayerEnter != null) {
//					OnPlayerEnter ();	
//				}		
//		}
//	}

	void OnCollisionEnter(Collision collider)
	{
		if (!isCollided) {
			if (collider.gameObject.tag == "Player") {
				soundDropBall.PlayDropBall ();
				GameStateManager.HighScore++;
				updateScore.ChangeLiveScore ();
			
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

	void OnTriggerExit(Collider collider)
	{
		//Debug.Log("Player has left");
//		OnPlayerLeft();	

	}
}
