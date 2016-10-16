using UnityEngine;
using System.Collections;

public class CameraRotation : MonoBehaviour {

    public Camera MainCam;
    // Use this for initialization
    void Start()
    {
        MainCam = GetComponentInChildren<Camera>();
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
    }
}
