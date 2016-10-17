using UnityEngine;
using System.Collections;

public class BarrierMaker : MonoBehaviour {

    [SerializeField]
    private GameObject barrier;
    [SerializeField]
    private Transform spawn1;
    [SerializeField]
    private Transform spawn2;
   
    private IEnumerator buildwallco;
    private WaitForSeconds wallbuild = new WaitForSeconds(0.5f);
    // Use this for initialization
    void Start()
    {

        StartCoroutine(BuildTheWall(wallbuild));
        // buildwallco = star
    }

    // Update is called once per frame

    private IEnumerator BuildTheWall(WaitForSeconds waito)
    {
        Transform spawnAt;
        if (Random.Range(0, 1.0f) > 0.5f)
        {
            spawnAt = spawn1;
        }
        else
        {
            spawnAt = spawn2;
        }

        Instantiate(barrier, spawnAt.position, Quaternion.Euler(0, 90, 0)); 

        yield return waito;
        checkGameOver();

    }

    private void buildDat()
    {
        Instantiate(barrier, spawn2.position, Quaternion.Euler(0, 90, 0));
    }

    private void checkGameOver()
    {
       
            StartCoroutine(BuildTheWall(new WaitForSeconds(Random.Range(0.5f, 2f))));
        //Invoke("buildDat", Random.Range(0.5f, 3.5f));
    }
    

    void Update()
    {
        //Instantiate<Target>(targo);
        //Invoke("BuildTheWall", Random.Range(1.5f, 3.5f));
    }
}
