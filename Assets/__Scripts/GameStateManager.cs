using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Facebook.Unity;
using System.Collections.Generic;

public class GameStateManager : MonoBehaviour {

	private static GameStateManager instance;
	public static GameStateManager Instance { get { return current(); } }
	delegate GameStateManager InstanceStep();
	static InstanceStep init = delegate()
	{
		GameObject container = new GameObject("GameStateManagerManager");
		instance = container.AddComponent<GameStateManager>();
		//instance.lives = StartingLives;
		//instance.score = StartingScore;
		instance.highScore = null;
		current = final;
		return instance;
	};
	static InstanceStep final = delegate() { return instance; };
	static InstanceStep current = init;

//	public static readonly string ServerURL = "https://friendsmash-unity.herokuapp.com/";
	public static readonly string ServerURL = "https://friendsmash-unity-test/";
	void Awake()
	{
		DontDestroyOnLoad(this);						// Persist through Scene loading
	}


	public static readonly int StartingLives = 3;


	private int lives;
	public static int LivesRemaining { get { return Instance.lives; } }
	public static int CoinBalance, NumBombs;
	public static string FriendName = "Blue Guy";
	public static string FriendID = null;
	public static Texture FriendTexture = null;
	public static int CelebFriend = -1;

	//   Facebook Data   //
	public static string Username;
	public static Texture UserTexture;
	public static List<object> Friends;
	public static Dictionary<string, Texture> FriendImages = new Dictionary<string, Texture>();
	public static List<object> InvitableFriends = new List<object>();
	// Scores
	public static bool ScoresReady;
	private static List<object> scores;
	public static List<object> Scores {
		get { return scores; }
		set { scores = value; ScoresReady = true; }
	}
	private int numberOfGame = 0;
	public int NumBerOfGame{
		get{return numberOfGame;}
		set{numberOfGame = value;}
	}

	private int sceneMaterialNum = 0;
	public int SceneMaterialNum{
		get{return sceneMaterialNum;}
		set{sceneMaterialNum = value;}
	}
		
	//the score of the game
	private int score;									//Score of the player		
	private int StartingScore = 0;						//score start at 0
	private int? highScore;
	public static bool ScoringLockout, highScorePending;
	public static int Score { get { return Instance.score; } }
	public static int HighScore {
		get { return Instance.highScore.HasValue ? Instance.highScore.Value : 0; }
		set { Instance.highScore = value; }
	}

	private int bestScore = 0;
	public int BestScore
	{
		get{return bestScore;}
		set{bestScore = value;}
	}



	//The time life after the ball gets scaled
	private int ballTimer = 10;
//	private float clock = 3f;
	public int BallTimer
	{
		get{return ballTimer;}
		set{ballTimer = value;}
	}

//	private float _timeRemaining;
//		
//	public float TimeRemaining
//	{
//		get{return _timeRemaining;}
//		set{_timeRemaining = value;}
//	}

	private int numCoins;
	private int startCoints = 0;

	public int NumCoins{
		get{return numCoins;}
		set{numCoins = value;}
	}

//	private float maxTime = 5f * 60f;

	private int indexMaterial = 0;					//Array index of Materials to set up the theme of each scene

	public int IndexMaterial{						
		get{return indexMaterial;}
		set{indexMaterial = value;}
	}

	private GameObject cube;

	private bool isStarted = false;
	public bool IsStarted
	{
		get{return isStarted;}
		set{isStarted = value;}
	}
		
	// Use this for initialization
	public void StartGame () {
		HighScore = StartingScore;									//Reset the score every time the game starts
		BallTimer = ballTimer;
		NumCoins = startCoints;
		IndexMaterial = PlayerPrefs.GetInt("IndexGame");	//Get the indexMaterial that has been save in Restart()
	
		lives = StartingLives;
		score = StartingScore;
		ScoringLockout = false;
		Time.timeScale = 1f;
	}

	public void Restart()								
	{
		NumCoins = numCoins;
		if(IndexMaterial <= 5)
		{
			IndexMaterial++;
		}
		else{ if(IndexMaterial > 5){
				IndexMaterial = 0;
			}
		}
	}

	public static void EndGame()
	{
		Debug.Log("EndGame Instance.highScore = " + Instance.highScore + "\nInstance.score = " + Instance.score);

		// Log custom App Event for game completion
		FBAppEvents.GameComplete(Instance.score);

		// Ensure we have read score from FB before we allow overriding the High Score
		if (FB.IsLoggedIn &&
			Instance.highScore.HasValue &&
			Instance.highScore < Instance.score)
		{
			Debug.Log("Player has new high score :" + Instance.score);
			Instance.highScore = Instance.score;

			//Set a flag so MainMenu can handle posting the score once its scene has loaded
			highScorePending = true;
		}

		//Return to main menu
		Application.LoadLevel("MainMenu");
	}

	// Convenience callback into GameMenu to redraw UI
	public static void CallUIRedraw()
	{
		GameObject gMenuObj = GameObject.Find("GameMenu");
		if (gMenuObj)
		{
			gMenuObj.GetComponent<GameMenu>().RedrawUI();
		}
	}
}
