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
// System.Collections.Generic.List`1<OpenCVForUnity.Point>
struct List_1_t2049144316;
// OpenCVForUnity.Rect
struct Rect_t1177435543;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3969392542;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t2905695572;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.CamShiftSample
struct  CamShiftSample_t862118590  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.CamShiftSample::colors
	Color32U5BU5D_t1677970742* ___colors_2;
	// UnityEngine.Texture2D OpenCVForUnitySample.CamShiftSample::texture
	Texture2D_t2509538522 * ___texture_3;
	// System.Collections.Generic.List`1<OpenCVForUnity.Point> OpenCVForUnitySample.CamShiftSample::roiPointList
	List_1_t2049144316 * ___roiPointList_4;
	// OpenCVForUnity.Rect OpenCVForUnitySample.CamShiftSample::roiRect
	Rect_t1177435543 * ___roiRect_5;
	// OpenCVForUnity.Mat OpenCVForUnitySample.CamShiftSample::hsvMat
	Mat_t1174969555 * ___hsvMat_6;
	// OpenCVForUnity.Mat OpenCVForUnitySample.CamShiftSample::roiHistMat
	Mat_t1174969555 * ___roiHistMat_7;
	// OpenCVForUnity.TermCriteria OpenCVForUnitySample.CamShiftSample::termination
	TermCriteria_t3969392542 * ___termination_8;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.CamShiftSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t2905695572 * ___webCamTextureToMatHelper_9;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___colors_2)); }
	inline Color32U5BU5D_t1677970742* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t1677970742* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___texture_3)); }
	inline Texture2D_t2509538522 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t2509538522 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t2509538522 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_roiPointList_4() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___roiPointList_4)); }
	inline List_1_t2049144316 * get_roiPointList_4() const { return ___roiPointList_4; }
	inline List_1_t2049144316 ** get_address_of_roiPointList_4() { return &___roiPointList_4; }
	inline void set_roiPointList_4(List_1_t2049144316 * value)
	{
		___roiPointList_4 = value;
		Il2CppCodeGenWriteBarrier(&___roiPointList_4, value);
	}

	inline static int32_t get_offset_of_roiRect_5() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___roiRect_5)); }
	inline Rect_t1177435543 * get_roiRect_5() const { return ___roiRect_5; }
	inline Rect_t1177435543 ** get_address_of_roiRect_5() { return &___roiRect_5; }
	inline void set_roiRect_5(Rect_t1177435543 * value)
	{
		___roiRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___roiRect_5, value);
	}

	inline static int32_t get_offset_of_hsvMat_6() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___hsvMat_6)); }
	inline Mat_t1174969555 * get_hsvMat_6() const { return ___hsvMat_6; }
	inline Mat_t1174969555 ** get_address_of_hsvMat_6() { return &___hsvMat_6; }
	inline void set_hsvMat_6(Mat_t1174969555 * value)
	{
		___hsvMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___hsvMat_6, value);
	}

	inline static int32_t get_offset_of_roiHistMat_7() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___roiHistMat_7)); }
	inline Mat_t1174969555 * get_roiHistMat_7() const { return ___roiHistMat_7; }
	inline Mat_t1174969555 ** get_address_of_roiHistMat_7() { return &___roiHistMat_7; }
	inline void set_roiHistMat_7(Mat_t1174969555 * value)
	{
		___roiHistMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___roiHistMat_7, value);
	}

	inline static int32_t get_offset_of_termination_8() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___termination_8)); }
	inline TermCriteria_t3969392542 * get_termination_8() const { return ___termination_8; }
	inline TermCriteria_t3969392542 ** get_address_of_termination_8() { return &___termination_8; }
	inline void set_termination_8(TermCriteria_t3969392542 * value)
	{
		___termination_8 = value;
		Il2CppCodeGenWriteBarrier(&___termination_8, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_9() { return static_cast<int32_t>(offsetof(CamShiftSample_t862118590, ___webCamTextureToMatHelper_9)); }
	inline WebCamTextureToMatHelper_t2905695572 * get_webCamTextureToMatHelper_9() const { return ___webCamTextureToMatHelper_9; }
	inline WebCamTextureToMatHelper_t2905695572 ** get_address_of_webCamTextureToMatHelper_9() { return &___webCamTextureToMatHelper_9; }
	inline void set_webCamTextureToMatHelper_9(WebCamTextureToMatHelper_t2905695572 * value)
	{
		___webCamTextureToMatHelper_9 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
