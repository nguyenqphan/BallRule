using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using Facebook.Unity;


public class FBManager : MonoBehaviour {

	//public GameObject fbManager;

	void Awake()
	{
		// Initialize FB SDK
		if (!FB.IsInitialized)
		{
			FB.Init(InitCallback, OnHideUnity);
		}
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

	public void GetReadPermission()
	{
		LoginFB.AskToLogin();
	}
		
}
