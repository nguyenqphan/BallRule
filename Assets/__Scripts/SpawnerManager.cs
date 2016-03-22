﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public struct SpawnerP{
	public int pooledAmount;
	public int ballAmount;
	public int diamondAmount;

	public int indexSwitch;
	public Vector3 position;
	public float fixedY;
	public float fixedX;
	public float speedTime;
	public bool firstSpawn;
	public int spawnNumber;
	public MainCube mainCube;
	public Cube cube;

}

public class SpawnerManager : MonoBehaviour {

	SpawnerP spawnP;

	public GameObject cubeToInstantiate;
	public GameObject cubeParticle;
	public GameObject diamond;
	public GameObject diaEmissive;
	public GameObject diaBreaking;
	public GameObject ball;
	public GameObject ballExplode;

	private List<GameObject> cubeList;
	private List<GameObject> particleList;
	private List<GameObject> diamondList;
	private List<GameObject> diaEmissiveList;
	private List<GameObject> diaBreakingList;
	private List<GameObject> ballList;
	private List<GameObject> ballExplodeList;

	void OnEnable()
	{

		EventManager.OnPlayerEnter += StartSpawnCube;
		Deactivator.Emissive += PlayCubeEffect;
		Diamond.EmissiveDiamond += PlayerDiamondEmissive;
		Diamond.BreakingDiamond += PlayDiamondBreaking;
		Ball.ExplodeBall += PlayExplodeBall;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
		Deactivator.Emissive -= PlayCubeEffect;
		Diamond.EmissiveDiamond -= PlayerDiamondEmissive;
		Diamond.BreakingDiamond -= PlayDiamondBreaking;
		Ball.ExplodeBall -= PlayExplodeBall;
	}
		
	void Start()
	{
//		ballNumber = RandomSpawnNum();

		spawnP.pooledAmount = 4;
		spawnP.ballAmount = 2;
		spawnP.diamondAmount = 8;
		spawnP.indexSwitch = 1;
		spawnP.fixedY = 4f;
		spawnP.speedTime = 1f;
		spawnP.firstSpawn = true;
		spawnP.spawnNumber = 0;


		cubeList = new List<GameObject>();
		particleList = new List<GameObject>();
		diamondList = new List<GameObject>();
		diaEmissiveList = new List<GameObject>();
		diaBreakingList = new List<GameObject>();
		ballList = new List<GameObject>();
		ballExplodeList = new List<GameObject>();

		for(int i = 0; i < spawnP.pooledAmount; i++)
		{
			GameObject newCube = Instantiate(cubeToInstantiate, transform.position, Quaternion.identity) as GameObject;
			GameObject newParticle = Instantiate(cubeParticle, transform.position, Quaternion.identity) as GameObject;

			newCube.SetActive(false);
			newParticle.SetActive(false);

			cubeList.Add(newCube);
			particleList.Add(newParticle);
		}

		for(int i = 0; i < spawnP.diamondAmount; i++)
		{
			GameObject newDiamond = Instantiate(diamond, transform.position, Quaternion.identity) as GameObject;
			GameObject newDiaEmissive = Instantiate(diaEmissive, transform.position, Quaternion.identity) as GameObject;
			GameObject newDiaBreaking = Instantiate(diaBreaking, transform.position, Quaternion.identity) as GameObject;

			newDiamond.SetActive(false);
			newDiaEmissive.SetActive(false);
			newDiaBreaking.SetActive(false);

			diamondList.Add(newDiamond);
			diaEmissiveList.Add(newDiaEmissive);
			diaBreakingList.Add(newDiaBreaking);
		}

		for(int j = 0; j < spawnP.ballAmount; j++)
		{
			GameObject newBall = Instantiate(ball, transform.position, Quaternion.identity) as GameObject;
			GameObject newBallExplode = Instantiate(ballExplode, transform.position, Quaternion.identity) as GameObject;

			newBall.SetActive(false);
			newBallExplode.SetActive(false);

			ballList.Add(newBall);
			ballExplodeList.Add(newBallExplode);
		}
	} 
		
	public void PlayCubeEffect(GameObject o)
	{
		//StopAllCoroutines();
		StartCoroutine(InstantiateEffect(o));
		
	}


	private IEnumerator InstantiateEffect(GameObject o)
	{
		for(int i = 0; i < particleList.Count; i++)
		{
			if(!particleList[i].activeInHierarchy)
			{
				particleList[i].transform.position = o.transform.position;
				particleList[i].transform.rotation = o.transform.rotation;
				particleList[i].SetActive(true);
				break;
			}
		}

		yield return 0;
			
	}

	public void PlayerDiamondEmissive(GameObject o)
	{
		StartCoroutine(InstantiateDiamondEmissive(o));
	}

	private IEnumerator InstantiateDiamondEmissive(GameObject o)
	{
		for(int i =0; i < diaEmissiveList.Count; i++)
		{
			if(!diaEmissiveList[i].activeInHierarchy)
			{
				diaEmissiveList[i].transform.position = o.transform.position;
				diaEmissiveList[i].transform.rotation = o.transform.rotation;
				diaEmissiveList[i].SetActive(true);
				break;
			}
		}

		yield return 0;
	}

	public void PlayExplodeBall(GameObject o)
	{
		StartCoroutine(InstantiateBallExplode(o));
	}

	private IEnumerator InstantiateBallExplode(GameObject o)
	{
		for(int i = 0; i < ballExplodeList.Count; i++)
		{
			if(!ballExplodeList[i].activeInHierarchy)
			{
				ballExplodeList[i].transform.position = o.transform.position;
				ballExplodeList[i].transform.rotation = o.transform.rotation;
				ballExplodeList[i].SetActive(true);
				break;
			}

		}
			
		yield return 0;
	}

	public void PlayDiamondBreaking(GameObject o)
	{
		StartCoroutine(InstantiateDiamondBreaking(o));
	}

	private IEnumerator InstantiateDiamondBreaking(GameObject o)
	{
		for(int i = 0; i < diaBreakingList.Count; i++)
		{
			if(!diaBreakingList[i].activeInHierarchy)
			{
				diaBreakingList[i].transform.position = o.transform.position;
				diaBreakingList[i].transform.rotation = o.transform.rotation;
				diaBreakingList[i].SetActive(true);
				break;
			}
		}

		yield return 0;
	}

	public void StartSpawnCube()
	{
			if (spawnP.indexSwitch == 1) {
				spawnP.indexSwitch = 0;
				spawnP.fixedX = 2.5f;
			} else {
				if (spawnP.indexSwitch == 0)
					spawnP.indexSwitch = 1;
				spawnP.fixedX = -2.5f;
			}

			spawnP.spawnNumber++;
			StartCoroutine (InstantiateCube ());	
	}

	Vector3 targetPosition(){

		if(GameStateManager.Instance.IsStarted){
			spawnP.fixedY += -randomFixedY();
		}else{
			spawnP.fixedY += - 5.5f;
		}
			
		//fixedY += -4.5f;
		return new Vector3(spawnP.fixedX,spawnP.fixedY, 0f);
	}

	Vector3 diamondPos()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(1.5f, 2.5f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-1.5f, 2.5f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 diamondPos2()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(2.5f, 3.0f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-2.5f, 3.0f, 0f);
		return Vector3.zero;										//nver reach this statement
	}

	Vector3 ballPos()
	{
		return spawnP.position + new Vector3(0f, 1.5f, 0f );
	}

	Vector3 camPos()
	{
		return 	Vector3.zero	;
	}

	int randomFixedY()
	{
		return Random.Range(5, 10);
	}

	float randonDegree()
	{
		return Random.Range(-40f, 40f);;
	}

	private IEnumerator InstantiateCube()
	{
		spawnP.position = targetPosition();
		StartCoroutine(InstantiateDiamond());

		//Condition to instantiate a scalling ball
		if(spawnP.spawnNumber%4 == 0)
		{
			StartCoroutine(InstantiateBall());
		}
	
		yield return new WaitForSeconds(3f);
			
		for(int i =0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				cubeList[i].transform.position = transform.position;
				cubeList[i].transform.rotation = transform.rotation;
				cubeList[i].SetActive(true);
				spawnP.mainCube = cubeList[i].GetComponent<MainCube>();    	//cube.tag
				spawnP.cube = cubeList[i].GetComponentInChildren<Cube>();

				spawnP.cube.gameObject.transform.position = transform.position;
//				comboCube.gameObject.transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
				spawnP.cube.gameObject.transform.rotation = Quaternion.Euler(0f, 0f, 40f);
				spawnP.mainCube.MoveCube(spawnP.position);

				break;
			}
		}
			yield return 0;
	}

	private IEnumerator InstantiateDiamond()
	{
		for(int i = 0; i < diamondList.Count; i++)
		{
			if(!diamondList[i].activeInHierarchy)
			{
				diamondList[i].transform.position = transform.position;
				diamondList[i].transform.rotation = Quaternion.Euler(270f, 0f, 0f);
				diamondList[i].SetActive(true);
				Diamond diamondScript = diamondList[i].GetComponent<Diamond>();
				diamondScript.MoveDiamond(diamondPos());
				diamondScript.SetDiaInactive(diamondList[i]);
				break;
			}
		}

		yield return new WaitForSeconds(0.5f);

		for(int i = 0; i < diamondList.Count; i++)
		{
			if(!diamondList[i].activeInHierarchy)
			{
				diamondList[i].transform.position = transform.position;
				diamondList[i].transform.rotation = Quaternion.Euler(270f, 0f, 0f);
				diamondList[i].SetActive(true);
				Diamond diamondScript = diamondList[i].GetComponent<Diamond>();
				diamondScript.MoveDiamond(diamondPos2());
				diamondScript.SetDiaInactive(diamondList[i]);
				break;
			}
		}
	}

	private IEnumerator InstantiateBall()
	{
		yield return new WaitForSeconds(1f);

		for(int i = 0; i < ballList.Count; i++)
		{
			if(!ballList[i].activeInHierarchy)
			{
				ballList[i].transform.position = transform.position;
				ballList[i].transform.rotation = transform.rotation;
				ballList[i].transform.localScale = new Vector3(.5f,.5f,.5f);
				ballList[i].SetActive(true);
				Ball ballScript = ballList[i].GetComponent<Ball>();
				ballScript.MoveBall(ballPos());
				ballScript.SetBallInactive(ballList[i]);

				break;
			}
		}

		yield return 0;
	}

	private int RandomSpawnNum()
	{
		return Random.Range(8, 12);
	}

}