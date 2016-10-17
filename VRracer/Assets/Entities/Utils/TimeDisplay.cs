using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class TimeDisplay : MonoBehaviour {
    private Text timeText;
    public LevelManager levelLord;
	// Use this for initialization
	void Start () {
        timeText = GetComponent<Text>();
        levelLord = FindObjectOfType<LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
        timeText.text = "" + (float)Mathf.Round(levelLord.levelTime );
	}
}
