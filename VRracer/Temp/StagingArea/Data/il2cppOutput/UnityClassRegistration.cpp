struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 59 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//10. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//11. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//14. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//15. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//18. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//19. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//20. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//21. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//22. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//23. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//24. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//25. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//26. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//27. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//28. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//29. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//30. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//31. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//32. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//33. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//34. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//35. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//36. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//37. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//38. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//39. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//40. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//41. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//42. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//45. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//46. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//47. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//48. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//49. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//50. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//51. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//52. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//53. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//54. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//55. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//56. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//57. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//58. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
