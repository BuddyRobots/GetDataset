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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t2905695572;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.ComicFilterSample
struct  ComicFilterSample_t3262478910  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.ComicFilterSample::colors
	Color32U5BU5D_t1677970742* ___colors_2;
	// OpenCVForUnity.Mat OpenCVForUnitySample.ComicFilterSample::grayMat
	Mat_t1174969555 * ___grayMat_3;
	// OpenCVForUnity.Mat OpenCVForUnitySample.ComicFilterSample::lineMat
	Mat_t1174969555 * ___lineMat_4;
	// OpenCVForUnity.Mat OpenCVForUnitySample.ComicFilterSample::maskMat
	Mat_t1174969555 * ___maskMat_5;
	// OpenCVForUnity.Mat OpenCVForUnitySample.ComicFilterSample::bgMat
	Mat_t1174969555 * ___bgMat_6;
	// OpenCVForUnity.Mat OpenCVForUnitySample.ComicFilterSample::dstMat
	Mat_t1174969555 * ___dstMat_7;
	// System.Byte[] OpenCVForUnitySample.ComicFilterSample::grayPixels
	ByteU5BU5D_t58506160* ___grayPixels_8;
	// System.Byte[] OpenCVForUnitySample.ComicFilterSample::maskPixels
	ByteU5BU5D_t58506160* ___maskPixels_9;
	// UnityEngine.Texture2D OpenCVForUnitySample.ComicFilterSample::texture
	Texture2D_t2509538522 * ___texture_10;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.ComicFilterSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t2905695572 * ___webCamTextureToMatHelper_11;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___colors_2)); }
	inline Color32U5BU5D_t1677970742* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t1677970742* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_grayMat_3() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___grayMat_3)); }
	inline Mat_t1174969555 * get_grayMat_3() const { return ___grayMat_3; }
	inline Mat_t1174969555 ** get_address_of_grayMat_3() { return &___grayMat_3; }
	inline void set_grayMat_3(Mat_t1174969555 * value)
	{
		___grayMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___grayMat_3, value);
	}

	inline static int32_t get_offset_of_lineMat_4() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___lineMat_4)); }
	inline Mat_t1174969555 * get_lineMat_4() const { return ___lineMat_4; }
	inline Mat_t1174969555 ** get_address_of_lineMat_4() { return &___lineMat_4; }
	inline void set_lineMat_4(Mat_t1174969555 * value)
	{
		___lineMat_4 = value;
		Il2CppCodeGenWriteBarrier(&___lineMat_4, value);
	}

	inline static int32_t get_offset_of_maskMat_5() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___maskMat_5)); }
	inline Mat_t1174969555 * get_maskMat_5() const { return ___maskMat_5; }
	inline Mat_t1174969555 ** get_address_of_maskMat_5() { return &___maskMat_5; }
	inline void set_maskMat_5(Mat_t1174969555 * value)
	{
		___maskMat_5 = value;
		Il2CppCodeGenWriteBarrier(&___maskMat_5, value);
	}

	inline static int32_t get_offset_of_bgMat_6() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___bgMat_6)); }
	inline Mat_t1174969555 * get_bgMat_6() const { return ___bgMat_6; }
	inline Mat_t1174969555 ** get_address_of_bgMat_6() { return &___bgMat_6; }
	inline void set_bgMat_6(Mat_t1174969555 * value)
	{
		___bgMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___bgMat_6, value);
	}

	inline static int32_t get_offset_of_dstMat_7() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___dstMat_7)); }
	inline Mat_t1174969555 * get_dstMat_7() const { return ___dstMat_7; }
	inline Mat_t1174969555 ** get_address_of_dstMat_7() { return &___dstMat_7; }
	inline void set_dstMat_7(Mat_t1174969555 * value)
	{
		___dstMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___dstMat_7, value);
	}

	inline static int32_t get_offset_of_grayPixels_8() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___grayPixels_8)); }
	inline ByteU5BU5D_t58506160* get_grayPixels_8() const { return ___grayPixels_8; }
	inline ByteU5BU5D_t58506160** get_address_of_grayPixels_8() { return &___grayPixels_8; }
	inline void set_grayPixels_8(ByteU5BU5D_t58506160* value)
	{
		___grayPixels_8 = value;
		Il2CppCodeGenWriteBarrier(&___grayPixels_8, value);
	}

	inline static int32_t get_offset_of_maskPixels_9() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___maskPixels_9)); }
	inline ByteU5BU5D_t58506160* get_maskPixels_9() const { return ___maskPixels_9; }
	inline ByteU5BU5D_t58506160** get_address_of_maskPixels_9() { return &___maskPixels_9; }
	inline void set_maskPixels_9(ByteU5BU5D_t58506160* value)
	{
		___maskPixels_9 = value;
		Il2CppCodeGenWriteBarrier(&___maskPixels_9, value);
	}

	inline static int32_t get_offset_of_texture_10() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___texture_10)); }
	inline Texture2D_t2509538522 * get_texture_10() const { return ___texture_10; }
	inline Texture2D_t2509538522 ** get_address_of_texture_10() { return &___texture_10; }
	inline void set_texture_10(Texture2D_t2509538522 * value)
	{
		___texture_10 = value;
		Il2CppCodeGenWriteBarrier(&___texture_10, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_11() { return static_cast<int32_t>(offsetof(ComicFilterSample_t3262478910, ___webCamTextureToMatHelper_11)); }
	inline WebCamTextureToMatHelper_t2905695572 * get_webCamTextureToMatHelper_11() const { return ___webCamTextureToMatHelper_11; }
	inline WebCamTextureToMatHelper_t2905695572 ** get_address_of_webCamTextureToMatHelper_11() { return &___webCamTextureToMatHelper_11; }
	inline void set_webCamTextureToMatHelper_11(WebCamTextureToMatHelper_t2905695572 * value)
	{
		___webCamTextureToMatHelper_11 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
