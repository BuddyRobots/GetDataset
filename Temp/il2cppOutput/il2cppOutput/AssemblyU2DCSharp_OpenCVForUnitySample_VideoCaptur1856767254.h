#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OpenCVForUnity.VideoCapture
struct VideoCapture_t1744641534;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.VideoCaptureSample
struct  VideoCaptureSample_t1856767254  : public MonoBehaviour_t3012272455
{
public:
	// System.Double OpenCVForUnitySample.VideoCaptureSample::frameWidth
	double ___frameWidth_2;
	// System.Double OpenCVForUnitySample.VideoCaptureSample::frameHeight
	double ___frameHeight_3;
	// OpenCVForUnity.VideoCapture OpenCVForUnitySample.VideoCaptureSample::capture
	VideoCapture_t1744641534 * ___capture_4;
	// OpenCVForUnity.Mat OpenCVForUnitySample.VideoCaptureSample::rgbMat
	Mat_t1174969555 * ___rgbMat_5;
	// UnityEngine.Texture2D OpenCVForUnitySample.VideoCaptureSample::texture
	Texture2D_t2509538522 * ___texture_6;

public:
	inline static int32_t get_offset_of_frameWidth_2() { return static_cast<int32_t>(offsetof(VideoCaptureSample_t1856767254, ___frameWidth_2)); }
	inline double get_frameWidth_2() const { return ___frameWidth_2; }
	inline double* get_address_of_frameWidth_2() { return &___frameWidth_2; }
	inline void set_frameWidth_2(double value)
	{
		___frameWidth_2 = value;
	}

	inline static int32_t get_offset_of_frameHeight_3() { return static_cast<int32_t>(offsetof(VideoCaptureSample_t1856767254, ___frameHeight_3)); }
	inline double get_frameHeight_3() const { return ___frameHeight_3; }
	inline double* get_address_of_frameHeight_3() { return &___frameHeight_3; }
	inline void set_frameHeight_3(double value)
	{
		___frameHeight_3 = value;
	}

	inline static int32_t get_offset_of_capture_4() { return static_cast<int32_t>(offsetof(VideoCaptureSample_t1856767254, ___capture_4)); }
	inline VideoCapture_t1744641534 * get_capture_4() const { return ___capture_4; }
	inline VideoCapture_t1744641534 ** get_address_of_capture_4() { return &___capture_4; }
	inline void set_capture_4(VideoCapture_t1744641534 * value)
	{
		___capture_4 = value;
		Il2CppCodeGenWriteBarrier(&___capture_4, value);
	}

	inline static int32_t get_offset_of_rgbMat_5() { return static_cast<int32_t>(offsetof(VideoCaptureSample_t1856767254, ___rgbMat_5)); }
	inline Mat_t1174969555 * get_rgbMat_5() const { return ___rgbMat_5; }
	inline Mat_t1174969555 ** get_address_of_rgbMat_5() { return &___rgbMat_5; }
	inline void set_rgbMat_5(Mat_t1174969555 * value)
	{
		___rgbMat_5 = value;
		Il2CppCodeGenWriteBarrier(&___rgbMat_5, value);
	}

	inline static int32_t get_offset_of_texture_6() { return static_cast<int32_t>(offsetof(VideoCaptureSample_t1856767254, ___texture_6)); }
	inline Texture2D_t2509538522 * get_texture_6() const { return ___texture_6; }
	inline Texture2D_t2509538522 ** get_address_of_texture_6() { return &___texture_6; }
	inline void set_texture_6(Texture2D_t2509538522 * value)
	{
		___texture_6 = value;
		Il2CppCodeGenWriteBarrier(&___texture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
