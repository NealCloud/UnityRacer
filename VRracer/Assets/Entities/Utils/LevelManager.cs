using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {
    public float levelTime = 20;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        levelTime -= Time.deltaTime;
	    if(levelTime <= 0)
        {
            print("Game Over");
        }
        else
        {

        }
	}
}
