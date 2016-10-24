using UnityEngine;
using OpenCVForUnity;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using MagicCircuit;
using System.Threading;
using System.Runtime.InteropServices;
using System;

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
	private static extern int testLuaWithArr(double[] arr,int len);

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
		tempImgs.Clear();

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
		webCamDevice = WebCamTexture.devices[0];
		#elif UNITY_IPHONE 
		webCamDevice = WebCamTexture.devices[1];
		#endif 

		webCamTexture = new WebCamTexture(webCamDevice.name, cam_width, cam_height);
		webCamTexture.Play();

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
                yield return 0;
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
			rotateCamera.rotate(ref tmpImg);

			matList = recognizeAlgo.createDataSet(tmpImg);//切割图片

			//texture.Resize(tmpImg.cols(),tmpImg.rows());
			//Utils.matToTexture2D(tmpImg,texture);

			Debug.Log ("matList.Count=="+matList.Count);

			#region call lua func with double/float paras

			double[] sample = new double[28*28*3];

			if (matList.Count > 0) 
			{
				for (int i = 0; i < 1/*matList.Count*/; i++) 
				{
					texture.Resize(28, 28);
					Utils.matToTexture2D(matList[i], texture);

					int pointer = 0;
					for (var y = 0; y < matList[i].rows(); y++)
						for (var x = 0; x < matList[i].cols(); x++)
						{
							double[] value = new double[3];
							value = matList[i].get(x, y);

							sample[pointer]        = value[0] / 255;
							sample[pointer + 784]  = value[1] / 255;
							sample[pointer + 1568] = value[2] / 255;
							pointer++;
						}
				}

				//testLuaWithPara (sample);
				int ret = testLuaWithArr(sample, sample.Length);
			}
			else 
			{
				texture.Resize(tmpImg.cols(),tmpImg.rows());
				Utils.matToTexture2D(tmpImg,texture);
			}

			#endregion


			#region save item pics into pad album
//			//save item pics into pad album
//			if (matList.Count > 0) 
//			{
//				
//				for (int i = 0; i <1/* matList.Count*/; i++) { //把小图片存到相册中 
//					#if UNITY_EDITOR 
//					string path = Application.dataPath + "/Photos/" + System.DateTime.Now.Ticks + ".jpg";
//					#elif UNITY_IPHONE 
//					string path =Application.persistentDataPath+"/"+System.DateTime.Now.Ticks+".jpg";
//					#endif 
//
//					texture.Resize(28, 28);
//					Utils.matToTexture2D (matList [i], texture);
//
//					File.WriteAllBytes (path, texture.EncodeToJPG ());
//	
//					#if UNITY_EDITOR 
//					#elif UNITY_IPHONE  
//					_SavePhoto (path);
//					#endif 
//				}
//			} 
//			else 
//			{
//				texture.Resize(tmpImg.cols(),tmpImg.rows());
//				Utils.matToTexture2D(tmpImg,texture);
//			
//			}
			#endregion

        }

		#region  call lua func with string paras
//		if (matList.Count>0)
//		{
//			for (int i = 0; i < 1/*matList.Count*/; i++) //把小图片存到相册中 
//			{
//				#if UNITY_EDITOR 
//				string path=Application.dataPath+"/Photos/"+System.DateTime.Now.Ticks+".jpg";
//				#elif UNITY_IPHONE 
//				string path =Application.persistentDataPath+"/"+System.DateTime.Now.Ticks+".jpg";
//				#endif 
//
//				Utils.matToTexture2D(matList[i],texture);
//				File.WriteAllBytes(path, texture.EncodeToJPG ());
//
//				string pathIphone = Application.dataPath.Substring (0, Application.dataPath.Length - 4) + "Models/5.mdl";
//				Debug.Log ("ios--path===" + path);
//				Debug.Log ("pathIphone==" + pathIphone);
//				#if UNITY_EDITOR 
//				#elif UNITY_IPHONE  
//				_SavePhoto (path);
//				testLuaWithPara (path, pathIphone);
//				#endif 
//			}
//		}
		#endregion
    }
}