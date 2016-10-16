using UnityEngine;
using System.Collections;

public class BarrierMaker : MonoBehaviour {

    [SerializeField]
    private BarrierBehavior block;
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
        Instantiate<BarrierBehavior>(block);

        yield return waito;
        checkGameOver();

    }

    private void buildDat()
    {
        Instantiate<BarrierBehavior>(block);
    }

    private void checkGameOver()
    {
        print("checking");
        StartCoroutine(BuildTheWall(new WaitForSeconds(Random.Range(0.5f, 2f))));
        //Invoke("buildDat", Random.Range(0.5f, 3.5f));
    }
    void Update()
    {
        //Instantiate<Target>(targo);
        //Invoke("BuildTheWall", Random.Range(1.5f, 3.5f));
    }
}
