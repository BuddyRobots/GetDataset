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
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t2905695572;
// OpenCVForUnity.BackgroundSubtractorMOG2
struct BackgroundSubtractorMOG2_t292364005;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.BackgroundSubtractorMOG2Sample
struct  BackgroundSubtractorMOG2Sample_t4292574397  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.BackgroundSubtractorMOG2Sample::colors
	Color32U5BU5D_t1677970742* ___colors_2;
	// UnityEngine.Texture2D OpenCVForUnitySample.BackgroundSubtractorMOG2Sample::texture
	Texture2D_t2509538522 * ___texture_3;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.BackgroundSubtractorMOG2Sample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t2905695572 * ___webCamTextureToMatHelper_4;
	// OpenCVForUnity.BackgroundSubtractorMOG2 OpenCVForUnitySample.BackgroundSubtractorMOG2Sample::backgroundSubstractorMOG2
	BackgroundSubtractorMOG2_t292364005 * ___backgroundSubstractorMOG2_5;
	// OpenCVForUnity.Mat OpenCVForUnitySample.BackgroundSubtractorMOG2Sample::rgbMat
	Mat_t1174969555 * ___rgbMat_6;
	// OpenCVForUnity.Mat OpenCVForUnitySample.BackgroundSubtractorMOG2Sample::fgmaskMat
	Mat_t1174969555 * ___fgmaskMat_7;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(BackgroundSubtractorMOG2Sample_t4292574397, ___colors_2)); }
	inline Color32U5BU5D_t1677970742* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t1677970742* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(BackgroundSubtractorMOG2Sample_t4292574397, ___texture_3)); }
	inline Texture2D_t2509538522 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t2509538522 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t2509538522 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_4() { return static_cast<int32_t>(offsetof(BackgroundSubtractorMOG2Sample_t4292574397, ___webCamTextureToMatHelper_4)); }
	inline WebCamTextureToMatHelper_t2905695572 * get_webCamTextureToMatHelper_4() const { return ___webCamTextureToMatHelper_4; }
	inline WebCamTextureToMatHelper_t2905695572 ** get_address_of_webCamTextureToMatHelper_4() { return &___webCamTextureToMatHelper_4; }
	inline void set_webCamTextureToMatHelper_4(WebCamTextureToMatHelper_t2905695572 * value)
	{
		___webCamTextureToMatHelper_4 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_4, value);
	}

	inline static int32_t get_offset_of_backgroundSubstractorMOG2_5() { return static_cast<int32_t>(offsetof(BackgroundSubtractorMOG2Sample_t4292574397, ___backgroundSubstractorMOG2_5)); }
	inline BackgroundSubtractorMOG2_t292364005 * get_backgroundSubstractorMOG2_5() const { return ___backgroundSubstractorMOG2_5; }
	inline BackgroundSubtractorMOG2_t292364005 ** get_address_of_backgroundSubstractorMOG2_5() { return &___backgroundSubstractorMOG2_5; }
	inline void set_backgroundSubstractorMOG2_5(BackgroundSubtractorMOG2_t292364005 * value)
	{
		___backgroundSubstractorMOG2_5 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSubstractorMOG2_5, value);
	}

	inline static int32_t get_offset_of_rgbMat_6() { return static_cast<int32_t>(offsetof(BackgroundSubtractorMOG2Sample_t4292574397, ___rgbMat_6)); }
	inline Mat_t1174969555 * get_rgbMat_6() const { return ___rgbMat_6; }
	inline Mat_t1174969555 ** get_address_of_rgbMat_6() { return &___rgbMat_6; }
	inline void set_rgbMat_6(Mat_t1174969555 * value)
	{
		___rgbMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___rgbMat_6, value);
	}

	inline static int32_t get_offset_of_fgmaskMat_7() { return static_cast<int32_t>(offsetof(BackgroundSubtractorMOG2Sample_t4292574397, ___fgmaskMat_7)); }
	inline Mat_t1174969555 * get_fgmaskMat_7() const { return ___fgmaskMat_7; }
	inline Mat_t1174969555 ** get_address_of_fgmaskMat_7() { return &___fgmaskMat_7; }
	inline void set_fgmaskMat_7(Mat_t1174969555 * value)
	{
		___fgmaskMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___fgmaskMat_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
