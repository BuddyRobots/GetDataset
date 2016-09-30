#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// OpenCVForUnity.CascadeClassifier
struct CascadeClassifier_t375839592;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3218387278;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t2905695572;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureDetectFaceSample
struct  WebCamTextureDetectFaceSample_t2250333003  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.WebCamTextureDetectFaceSample::colors
	Color32U5BU5D_t1677970742* ___colors_2;
	// OpenCVForUnity.Mat OpenCVForUnitySample.WebCamTextureDetectFaceSample::grayMat
	Mat_t1174969555 * ___grayMat_3;
	// UnityEngine.Texture2D OpenCVForUnitySample.WebCamTextureDetectFaceSample::texture
	Texture2D_t2509538522 * ___texture_4;
	// OpenCVForUnity.CascadeClassifier OpenCVForUnitySample.WebCamTextureDetectFaceSample::cascade
	CascadeClassifier_t375839592 * ___cascade_5;
	// OpenCVForUnity.MatOfRect OpenCVForUnitySample.WebCamTextureDetectFaceSample::faces
	MatOfRect_t3218387278 * ___faces_6;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.WebCamTextureDetectFaceSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t2905695572 * ___webCamTextureToMatHelper_7;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t2250333003, ___colors_2)); }
	inline Color32U5BU5D_t1677970742* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t1677970742* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_grayMat_3() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t2250333003, ___grayMat_3)); }
	inline Mat_t1174969555 * get_grayMat_3() const { return ___grayMat_3; }
	inline Mat_t1174969555 ** get_address_of_grayMat_3() { return &___grayMat_3; }
	inline void set_grayMat_3(Mat_t1174969555 * value)
	{
		___grayMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___grayMat_3, value);
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t2250333003, ___texture_4)); }
	inline Texture2D_t2509538522 * get_texture_4() const { return ___texture_4; }
	inline Texture2D_t2509538522 ** get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(Texture2D_t2509538522 * value)
	{
		___texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___texture_4, value);
	}

	inline static int32_t get_offset_of_cascade_5() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t2250333003, ___cascade_5)); }
	inline CascadeClassifier_t375839592 * get_cascade_5() const { return ___cascade_5; }
	inline CascadeClassifier_t375839592 ** get_address_of_cascade_5() { return &___cascade_5; }
	inline void set_cascade_5(CascadeClassifier_t375839592 * value)
	{
		___cascade_5 = value;
		Il2CppCodeGenWriteBarrier(&___cascade_5, value);
	}

	inline static int32_t get_offset_of_faces_6() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t2250333003, ___faces_6)); }
	inline MatOfRect_t3218387278 * get_faces_6() const { return ___faces_6; }
	inline MatOfRect_t3218387278 ** get_address_of_faces_6() { return &___faces_6; }
	inline void set_faces_6(MatOfRect_t3218387278 * value)
	{
		___faces_6 = value;
		Il2CppCodeGenWriteBarrier(&___faces_6, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_7() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t2250333003, ___webCamTextureToMatHelper_7)); }
	inline WebCamTextureToMatHelper_t2905695572 * get_webCamTextureToMatHelper_7() const { return ___webCamTextureToMatHelper_7; }
	inline WebCamTextureToMatHelper_t2905695572 ** get_address_of_webCamTextureToMatHelper_7() { return &___webCamTextureToMatHelper_7; }
	inline void set_webCamTextureToMatHelper_7(WebCamTextureToMatHelper_t2905695572 * value)
	{
		___webCamTextureToMatHelper_7 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
