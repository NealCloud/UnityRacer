using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreHolder : MonoBehaviour {
    public static int playerScore;
    private Text scoreText;
    // Use this for initialization
    void Start() {
        scoreText = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update() {
        showScore();
    }

    public static void IncreaseScore(int add)
    {
        playerScore += add;        
    }

    private void showScore()
    {
        scoreText.text = playerScore.ToString();  
    }
}
