using UnityEngine;
using System.Collections;

public struct BallP
{
	public float movingSpeed;
	public float scale;
	public float startScale;
	public bool isBigger;
	public float scaleSpeed;
	public float newScale;
	public SoundBreaking ballExplodeClip;
}

public class Ball : MonoBehaviour {

	public delegate void ActionScaling(GameObject gameObject);
	public static event ActionScaling Scalling;
	public delegate void ActionExplode(GameObject gameObject);
	public static event ActionExplode ExplodeBall;

	BallP ballP;

	void Awake()
	{
		ballP.ballExplodeClip = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
	}

	void Start()
	{
		
		ballP.movingSpeed = 20f;
		ballP.scale = 0.5f;
		ballP.isBigger = true;
		ballP.scaleSpeed = 1f;
	}


	void OnTriggerEnter(Collider other){

		if(other.gameObject.CompareTag("Player"))
		{
			ballP.ballExplodeClip.PlayExplodeBall();
			gameObject.SetActive(false);
			if(ExplodeBall!= null)
			{
				ExplodeBall(gameObject);
			}
				
			if(Scalling != null)
			{
				if(gameObject.CompareTag("OneHalf"))
				{
					gameObject.tag = "DoubleSize";
				}else if(gameObject.CompareTag("DoubleSize"))
				{
					gameObject.tag = "OneHalf";
				}
			
				Scalling(gameObject);

			}
		}else if(other.gameObject.CompareTag("ComboCube")){
			if(ExplodeBall != null)
			{
				gameObject.SetActive(false);
				ExplodeBall(gameObject);
			}
		}
	}

	public void MoveBall(Vector3 targetPos)
	{
		StartCoroutine(moving(targetPos));
	}

	private IEnumerator moving(Vector3 targetPos)
	{
		while(transform.position != targetPos)
		{
			transform.position = Vector3.MoveTowards(transform.position, targetPos, ballP.movingSpeed * Time.deltaTime);
			yield return 0;
		}

		StartCoroutine(pulse());

	}

	private IEnumerator pulse()
	{
//		Debug.Log("Start pulsing");
		ballP.startScale = transform.localScale.x;
		while(true)
		{
			ballP.newScale = transform.localScale.x + (ballP.isBigger ? 1 : -1) * ballP.scaleSpeed * Time.deltaTime;

			if(ballP.newScale > ballP.startScale + ballP.scale)
			{
				ballP.newScale = ballP.startScale +ballP. scale;
				ballP.isBigger = false;
			}else if(ballP.newScale < ballP.startScale)
			{
				ballP.newScale = ballP.startScale;
				ballP.isBigger = true;
			}
				
			transform.localScale = new Vector3(ballP.newScale, ballP.newScale, ballP.newScale);
			yield return new WaitForFixedUpdate();
		}
	}

	public void SetBallInactive(GameObject o)
	{
		StartCoroutine(BallInactive(o));
	}

	private IEnumerator BallInactive(GameObject o)
	{
		yield return new WaitForSeconds(45f);
		if(o.activeInHierarchy)
		{
			gameObject.SetActive(false);
//			if(EmissiveDiamond != null)
//			{
//				EmissiveDiamond(gameObject);
//			}

		}

	}
}
