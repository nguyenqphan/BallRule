using UnityEngine;
using System.Collections;

public class WeatherDetecter : MonoBehaviour {

	private WeatherMan weatherMan;

	void Start()
	{
		weatherMan = GameObject.FindWithTag("WeatherCreator").GetComponent<WeatherMan>();
		StartCoroutine("deactivateWeatherDetector");
	}


	private IEnumerator deactivateWeatherDetector(){
		yield return new WaitForSeconds(2f);
		if(gameObject.activeInHierarchy){
			gameObject.SetActive(false);
		}
			

	}

	void OnTriggerEnter(Collider collider)
	{
		if(collider.gameObject.CompareTag("Player")){
			ChooseWeather();
		}

	}


	private void ChooseWeather()
	{
		switch(GameStateManager.Instance.SceneMaterialNum)
		{
		case 0:
			weatherMan.NoSnowRain();	
			break;
		case 1:
			weatherMan.TurnOnRain();	
			break;
		case 2:
			weatherMan.NoSnowRain();
			break;
		case 3:
			weatherMan.TurnOnSnow();
			break;
		case 4: 
			weatherMan.NoSnowRain();
			break;
		case 5: 
			weatherMan.TurnOnRain();
			break;
		default: 
			weatherMan.NoSnowRain(); 
			break;
		}
	}
}
