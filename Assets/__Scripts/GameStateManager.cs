using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
//using Facebook.Unity;
using System.Collections.Generic;
using System.IO;
using System;
using System.Runtime.Serialization.Formatters.Binary;

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

	void Awake()
	{
		DontDestroyOnLoad(this);						// Persist through Scene loading
	}


	public static readonly int StartingLives = 3;


	private int lives;
	public static int LivesRemaining { get { return Instance.lives; } }

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
//		IndexMaterial = PlayerPrefs.GetInt("IndexGame");	//Get the indexMaterial that has been save in Restart()
	
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


	public void Save()
	{
		BinaryFormatter bf = new BinaryFormatter();
		FileStream file = File.Create(Application.persistentDataPath + "/playerInfo.dat");

		PlayerData data = new PlayerData();
		data.playerScore = GameStateManager.Instance.BestScore;

		bf.Serialize(file, data);
		file.Close();
	}

	public void Load()
	{
		if(File.Exists(Application.persistentDataPath + "/playerInfo.dat"))
		{
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/playerInfo.dat", FileMode.Open);
			PlayerData data = (PlayerData)bf.Deserialize(file);
			file.Close();
			GameStateManager.instance.BestScore = data.playerScore;
		}
	}

	[Serializable]
	class PlayerData
	{
		public int playerScore;
	}
}
