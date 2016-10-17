using UnityEngine;
using System.Collections;

public class BarrierBehavior : MonoBehaviour {
    private ScoreHolder scoreKeep;
    [SerializeField]
    private GameObject dustFX;
	// Use this for initialization
	void Start () {
        scoreKeep = FindObjectOfType<ScoreHolder>();
    }
	
	// Update is called once per frame
	void Update () {
        this.transform.position += Vector3.back * 0.5f;
    }

    void OnTriggerEnter(Collider other)
    {
        
        if (other.gameObject.tag == "Garbage")
        {
            Destroy(gameObject);
            ScoreHolder.IncreaseScore(10);
            print(ScoreHolder.playerScore);
            
        }

    }

    public void BreakWall()
    {
        Instantiate(dustFX, transform.position, Quaternion.identity);
        //smokePuff.GetComponent<ParticleSystem>().startColor = gameObject.GetComponent<SpriteRenderer>().color;
    }
}
