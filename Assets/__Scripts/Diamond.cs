using UnityEngine;
using System.Collections;


public struct DiamondProperty{
	public bool isSpinning;
	public bool isFloating;
	public float movingSpeed;

	public float floatSpeed;
	public float movementDistance;
	public float startingY;
	public bool isMovingUp;
	public float newY;
	public SoundBreaking soundBreakingDiamond;
	public UpdateScore updateScore;

}

public class Diamond : MonoBehaviour {

	private DiamondProperty diamondP;

	public delegate void ActionBreaking(GameObject gameObject);
	public static event ActionBreaking BreakingDiamond;

	public delegate void EmissiveAction(GameObject gameObject);
	public static event EmissiveAction EmissiveDiamond;

	void Awake()
	{
		diamondP.soundBreakingDiamond = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		diamondP.updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();

	}
		

	// Use this for initialization
	void Start () {
		
		diamondP.isSpinning = true;
		diamondP.isFloating =  true;
		diamondP.movingSpeed = 20f;
		diamondP.floatSpeed = 1f;
		diamondP.movementDistance = 2f;
		diamondP.isMovingUp = true;
	}


	void OnTriggerEnter(Collider collider)
	{
		if (collider.gameObject.CompareTag("Player"))
		{
			
			Pickup();
			if(BreakingDiamond != null)
			{
				BreakingDiamond(gameObject);
			}

		}
		else if(collider.gameObject.CompareTag("ComboCube")){
			
			if(BreakingDiamond != null)
			{
//				diaDeactivate.resetTime = 0f;
				gameObject.SetActive(false);
				BreakingDiamond(gameObject);
			}
		}
	}
	
	private void Pickup()
	{
		diamondP.soundBreakingDiamond.PlayBreakingDimond();
//		diaDeactivate.resetTime = 0f;
		GameStateManager.HighScore++;
		diamondP.updateScore.ChangeLiveScore();
		gameObject.SetActive(false);
	}
	
	private IEnumerator Spin()
	{
		while(diamondP.isSpinning)
		{
			transform.Rotate (transform.forward, 360 * .5f * Time.deltaTime, Space.World);
			yield return new WaitForFixedUpdate();
		}
	}

	private IEnumerator Float()
	{
		diamondP.startingY = transform.position.y;
		while (diamondP.isFloating) {
			diamondP.newY = transform.position.y + (diamondP.isMovingUp ? 1 : -1)  * diamondP.movementDistance * diamondP.floatSpeed * Time.deltaTime;
			
			if (diamondP.newY > diamondP.startingY +diamondP. movementDistance) {
				diamondP.newY = diamondP.startingY + diamondP.movementDistance;
				diamondP.isMovingUp = false;
			} else if (diamondP.newY <diamondP.startingY) {
				diamondP.newY = diamondP.startingY;
				diamondP.isMovingUp = true;
			}
			
			transform.position = new Vector3 (transform.position.x, diamondP.newY, transform.position.z);

			yield return new WaitForFixedUpdate();
		}
	}

	public void MoveDiamond(Vector3 targetPos)
	{
		StartCoroutine(moving(targetPos));
	}

	private IEnumerator moving(Vector3 targetPos)
	{

		while(transform.position != targetPos)
		{
			transform.position = Vector3.MoveTowards(transform.position, targetPos, diamondP.movingSpeed * Time.deltaTime);
			yield return new WaitForFixedUpdate();
		}

		StartCoroutine(Spin());
		StartCoroutine(Float());
	}

	public void SetDiaInactive(GameObject o)
	{
		StartCoroutine(DiaInactive(o));
	}

	private IEnumerator DiaInactive(GameObject o)
	{
		yield return new WaitForSeconds(15f);
		if(o.activeInHierarchy)
		{
			gameObject.SetActive(false);
			if(EmissiveDiamond != null)
			{
				EmissiveDiamond(gameObject);
			}

		}

	}

	
}
