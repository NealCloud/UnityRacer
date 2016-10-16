using UnityEngine;
using System.Collections;

public class BarrierBehavior : MonoBehaviour {

	// Use this for initialization
	void Start () {
        
    }
	
	// Update is called once per frame
	void Update () {
        this.transform.position += Vector3.back * 0.5f;
    }
}
