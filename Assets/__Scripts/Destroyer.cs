using UnityEngine;
using System.Collections;


//F6938FB14437B26D61E4DE240EF670B5C216AAFC

public class Destroyer : MonoBehaviour {

	private ShowPanels showUI;
	private SoundBreaking soundBallDrop;
	private UpdateScore updateScore;

	void Awake()
	{
		soundBallDrop = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		showUI = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
	}

	void OnTriggerEnter(Collider collider)
	{
		if(collider.gameObject.tag == "Player")
		{
			soundBallDrop.PlayWaterSound();
			GameStateManager.Instance.IsStarted = true;
			collider.gameObject.SetActive(false);


			if(showUI != null){
//				Debug.Log("ShowUI is null");
		
				showUI.ShowMenu();
				showUI.scaleText.SetActive(false);
				GameStateManager.Instance.BestScore = PlayerPrefs.GetInt("CurBestScore");
				if(GameStateManager.Instance.BestScore < GameStateManager.HighScore)
				{
					GameStateManager.Instance.BestScore = GameStateManager.HighScore;
					PlayerPrefs.SetInt("CurBestScore", GameStateManager.Instance.BestScore);
				}

				updateScore.EndGameScore();
			}
			else if(showUI == null){
				Debug.Log("ShowUI is not null");
				showUI.ShowMenu();
			}
//			Debug.Log(collider.gameObject.tag);
//			Time.timeScale = 0;
//			GameStateManager.Instance.StartGame();
//			GameStateManager.Instance.Restart();
		}
	}
}
