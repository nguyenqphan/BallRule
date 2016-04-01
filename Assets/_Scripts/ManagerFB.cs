using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Facebook.Unity;

public class ManagerFB : MonoBehaviour {

	public GameObject LeaderBoardPanel;
//	public GameObject mainCanvas;

	private int scoreHigh = 10001; 

	void Awake()
	{
		LeaderBoardPanel.SetActive(false);
		// Initialize FB SDK
//		if (!FB.IsInitialized)
//		{
//			FB.Init(InitCallback, OnHideUnity);
//		}
	}

	private void InitCallback()
	{
		Debug.Log("InitCallback");

		// App Launch events should be logged on app launch & app resume
		// See more: https://developers.facebook.com/docs/app-events/unity#quickstart
		//FBAppEvents.LaunchEvent();

		if (FB.IsLoggedIn) 
		{
			Debug.Log("Already logged in");
			//OnLoginComplete();
		}
		else
		{
			Debug.Log("Facebook is not logged in");
		}
	}

	void OnHideUnity(bool isGameShown)
	{
		if(!isGameShown)
		{
			Time.timeScale = 0;
		}
		else
		{
			Time.timeScale = 1;
		}	
	}

	public void SetLeaderBoardInactive()
	{
		LeaderBoardPanel.SetActive(false);
	}

	public void GetReadPermission()
	{
		
		FBLogin.PromptForLogin(OnLoginComplete);
		LeaderBoardPanel.SetActive(true);
//		mainCanvas.SetActive(false);
	}

	private void OnLoginComplete()
	{
		Debug.Log("OnLoginComplete");

		if (!FB.IsLoggedIn)
		{
			Debug.Log("Facebook is not log in from OnLoginComplete");
			// Reenable the Login Button
			//LoginButton.interactable = true;
			return;
		}

		// Show loading animations
		//LoadingText.SetActive(true);

		// Begin querying the Graph API for Facebook data

		FBGraph.GetPlayerInfo();
		FBGraph.GetFriends();
		//FBGraph.GetInvitableFriends();
//		FBShare.PostScore(GameStateManager.HighScore);
//		FBShare.PostScore1();
		FBGraph.GetScores();
	}


	public void SetShareLink()
	{
		FBShare.ShareBrag();
	}

	public void GetPublicPermission()
	{
		FBLogin.PromptForPublish(OnGetPublicComplete);	
	}

	private void OnGetPublicComplete()
	{
		Debug.Log("OnGetPublicComplete");
		if(!FB.IsLoggedIn)
		{
			Debug.Log("Facebook is not loggin from OnGetPublicComplete");
			return;
		}
	}

	public void SetShareScore()
	{
		GetPublicPermission();
		GameStateManager.HighScore = scoreHigh;
		FBShare.PostScore(GameStateManager.HighScore);
	}

	public void ShareScreenshotTest()
	{
		GetPublicPermission();
		StartCoroutine(TakeScreenshot());
	}

	private IEnumerator TakeScreenshot() 
	{
		yield return new WaitForEndOfFrame();

		var width = Screen.width;
		var height = Screen.height;
		var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		// Read screen contents into the texture
		tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		tex.Apply();
		byte[] screenshot = tex.EncodeToPNG();

		var wwwForm = new WWWForm();
		wwwForm.AddBinaryData("image", screenshot, "Screenshot.png");
		wwwForm.AddField("name", "This game is much fun " + GameStateManager.Score);
		//wwwForm.AddField("photoID" , "1000");

		FB.API("me/photos", HttpMethod.POST, APICallback, wwwForm);

	}

	void APICallback(IResult result)
	{
		if(result.Error != null)
		{
			Debug.Log(result.Error + "Failed to post the picture");
		}
		else{
			if(result.RawResult.Contains("1000"))
			{
				Debug.Log("got the photo id");
			}
			//	LoginText.SetActive(true);
			Debug.Log("Your picture has been posted");


		}
	}

	public void OnChallengeClicked()
	{
		Debug.Log("OnChallengeClicked");
		FBRequest.RequestChallenge();
	}


}
