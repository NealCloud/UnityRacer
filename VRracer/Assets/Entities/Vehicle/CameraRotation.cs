using UnityEngine;
using System.Collections;

public class CameraRotation : MonoBehaviour {

    public Camera MainCam;
    public float xmin = -7f;
    public float xmax = 7f;
    // Use this for initialization
    void Start()
    {
        MainCam = GetComponentInChildren<Camera>();
        print(transform.position.x);
    }

    // Update is called once per frame
    void Update()
    {
      
        float rotationSpeed = 5.0f;
        float mouseX = Input.GetAxis("Mouse X") * rotationSpeed;
        float mouseY = Input.GetAxis("Mouse Y") * rotationSpeed;
        MainCam.transform.localRotation *= Quaternion.Euler(-mouseY, 0, 0);
        transform.localRotation *= Quaternion.Euler(0, mouseX, 0);
        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            transform.position += new Vector3(-.25f, 0);
           
        }
        if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
        {
            transform.position += new Vector3(.25f, 0);           
        }

        clampMovement();
        
      

        float xbox = Input.GetAxis("Horizontal");
        if (xbox != 0)
        {
            transform.position += new Vector3(xbox, 0);
        }
    }

    void clampMovement()
    {
        float newx = Mathf.Clamp(transform.position.x, xmin, xmax);
        transform.position = new Vector3(newx, transform.position.y, transform.position.z);
    }
}
