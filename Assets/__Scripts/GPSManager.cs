using UnityEngine;
using System.Collections;
using GooglePlayGames;

public class GPSManager : MonoBehaviour {

	// Use this for initialization

	void Awake()
	{
		PlayGamesPlatform.Activate();
	}

	void Start () {
		Social.localUser.Authenticate((bool success) => {
			if(success){
				Debug.Log("You've Logged In");
			}
			else{
				Debug.Log("Loggin Failed");
			}
		});
	}

	public void DisplayLeaderBoard()
	{
		Social.ShowLeaderboardUI();
	}

	public void DisplayAchievementBoard()
	{
		Social.ShowAchievementsUI();
	}


	// Update is called once per frame
	void Update () {
		if(GameStateManager.HighScore > 4)
		{
			Social.ReportProgress(GPSTest.achievement_newbie, 100.0f, (bool success) =>{
				
			});
		}
		if(GameStateManager.HighScore > 9)
		{
			Social.ReportProgress(GPSTest.achievement_skilled, 100.0f, (bool success) =>{

			});
		}
		if(GameStateManager.HighScore > 14)
		{
			Social.ReportProgress(GPSTest.achievement_intermediate, 100.0f, (bool success) =>{

			});
		}
		if(GameStateManager.HighScore > 19)
		{
			Social.ReportProgress(GPSTest.achievement_proficient, 100.0f, (bool success) =>{

			});
		}
		if(GameStateManager.HighScore > 24)
		{
			Social.ReportProgress(GPSTest.achievement_advanced, 100.0f, (bool success) =>{

			});
		}
	}
}
