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

	void Awake()
	{
		soundDropBall = GameObject.Find("GameManager").GetComponent<SoundBreaking>();
		updateScore = GameObject.Find("UI").GetComponent<UpdateScore>();
//		weatherMan = GameObject.Find("WeatherCreater").GetComponent<WeatherMan>();
	}

	void OnTriggerEnter(Collider collider)
	{
			if (collider.gameObject.tag == "Player") {
			soundDropBall.PlayDropBall();
			GameStateManager.HighScore++;
			updateScore.ChangeLiveScore();

//			if(GameStateManager.HighScore == 2)
//			{
//				weatherMan.TurnOnSnow();
//			}
//
//			if(GameStateManager.HighScore == 4)
//			{
//				weatherMan.TurnOnRain();
//			}
//
//			if(GameStateManager.HighScore == 7){
//				weatherMan.NoSnowRain();
//			}

//			Debug.Log(GameStateManager.HighScore);
//			Debug.Log(gameObject.tag);
//			Debug.Log(collider.gameObject.tag);
//			Debug.Log(gameObject.transform.position);
				if (OnCamMove != null) {
					OnCamMove ();
				}
				if (OnPlayerEnter != null) {
					OnPlayerEnter ();	
				}		
		}
	}

	void OnTriggerExit(Collider collider)
	{
		//Debug.Log("Player has left");
//		OnPlayerLeft();	

	}
}
