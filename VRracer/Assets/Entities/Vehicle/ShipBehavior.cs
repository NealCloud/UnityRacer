using UnityEngine;
using System.Collections;

public class ShipBehavior : MonoBehaviour {

    private Quaternion stabalize;
    // Use this for initialization
    void Start()
    {
        stabalize = transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        transform.rotation = stabalize;
    }

    void OnTriggerEnter(Collider other)
    {
       
        if (other.gameObject.tag == "Wall")
        {
            Destroy(other.gameObject);
        }

    }
}
