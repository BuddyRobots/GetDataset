using UnityEngine;
using OpenCVForUnity;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using MagicCircuit;
using System.Threading;
using System.Runtime.InteropServices;

public class GetImage : MonoBehaviour
{
	/// <summary>
	/// 用作识别界面显示的照片
	/// </summary>
    [HideInInspector]
    public Texture2D texture;

    private WebCamTexture webCamTexture;
    private WebCamDevice webCamDevice;
    private Mat frameImg;
	Mat img=new Mat();
	private const int cam_width  = 640;
	private const int cam_height = 480;
	private const int tex_width  = 640;//1120;//640;
	private const int tex_height = 480;

	public RecognizeAlgo recognizeAlgo;
	private RotateCamera rotateCamera;

	private bool initDone = false;

	private List<Mat> tempImgs = new List<Mat>();
	private List<Mat> matList=new List<Mat>();	

	[DllImport("__Internal")]
	private static extern void _SavePhoto (string readAddr);

    void Start() 
	{
		rotateCamera = new RotateCamera ();  
		recognizeAlgo = new RecognizeAlgo();
    }

	void OnEnable()
	{
		initDone = false;
		tempImgs.Clear ();

		StartCoroutine(init());
	}

    private IEnumerator init()
    {
        if (webCamTexture != null)
        {
            webCamTexture.Stop();
            initDone = false;
            frameImg.Dispose();
        }
		WebCamDevice[] devices = WebCamTexture.devices;

		#if UNITY_EDITOR  
		webCamDevice = WebCamTexture.devices [0];
		#elif UNITY_IPHONE 
		webCamDevice = WebCamTexture.devices [1];
		#endif 

		webCamTexture = new WebCamTexture (webCamDevice.name, cam_width, cam_height);
		webCamTexture.Play ();

        while (true)
        {
            if (webCamTexture.didUpdateThisFrame)
            {
                frameImg = new Mat(webCamTexture.height, webCamTexture.width, CvType.CV_8UC3);

                texture = new Texture2D(tex_width, tex_height, TextureFormat.RGBA32, false);
                gameObject.GetComponent<Renderer>().material.mainTexture = texture;

                initDone = true;
                break;
            }
            else
            {
                yield return 0;
            }
        }
    }

	void Update()
	{
		TakePhoto();
	}


	public void TakePhoto() 
	{
		
        if (!initDone)
            return;
        if (webCamTexture.didUpdateThisFrame)
        {
			Utils.webCamTextureToMat(webCamTexture, frameImg);
			Mat tmpImg = frameImg.clone ();
			rotateCamera.rotate (ref tmpImg);


			matList=recognizeAlgo.createDataSet(tmpImg);//切割图片
			Debug.Log ("matList.Count"+matList.Count);

//			texture.Resize(tmpImg.cols(), tmpImg.rows());
//			Utils.matToTexture2D(tmpImg, texture);	
			texture.Resize(28, 28);
			//Utils.matToTexture2D(matList[0], texture);
        }

		for (int i = 0; i < matList.Count; i++) //把小图片存到相册中 
		{
			#if UNITY_EDITOR 
			string path=Application.dataPath+"/Photos/"+System.DateTime.Now.Ticks+".jpg";
			#elif UNITY_IPHONE 
			string path =Application.persistentDataPath+"/"+System.DateTime.Now.Ticks+".jpg";
			Debug.Log ("ios--path===" + path);
			#endif 
			//Texture2D tex = new Texture2D (28, 28);
			//Utils.matToTexture2D(matList[i],tex);
			Utils.matToTexture2D(matList[i],texture);
			//File.WriteAllBytes(path, tex.EncodeToJPG ());//tex写入路径
			File.WriteAllBytes(path, texture.EncodeToJPG ());

//			byte [] texData=File.ReadAllBytes(path);
//			Texture2D texRead = new Texture2D (28, 28);
//			texRead.LoadImage (texData);
//			texture = texRead;

			#if UNITY_EDITOR 
			#elif UNITY_IPHONE  
			_SavePhoto (path);
			#endif 
		}
    }
}