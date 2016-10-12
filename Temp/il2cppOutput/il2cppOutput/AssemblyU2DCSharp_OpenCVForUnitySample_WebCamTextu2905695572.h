#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2938797301;
// UnityEngine.WebCamTexture
struct WebCamTexture_t3635181805;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_WebCamDevice1687076478.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureToMatHelper
struct  WebCamTextureToMatHelper_t2905695572  : public MonoBehaviour_t3012272455
{
public:
	// System.String OpenCVForUnitySample.WebCamTextureToMatHelper::requestDeviceName
	String_t* ___requestDeviceName_2;
	// System.Int32 OpenCVForUnitySample.WebCamTextureToMatHelper::requestWidth
	int32_t ___requestWidth_3;
	// System.Int32 OpenCVForUnitySample.WebCamTextureToMatHelper::requestHeight
	int32_t ___requestHeight_4;
	// System.Boolean OpenCVForUnitySample.WebCamTextureToMatHelper::requestIsFrontFacing
	bool ___requestIsFrontFacing_5;
	// System.Boolean OpenCVForUnitySample.WebCamTextureToMatHelper::flipVertical
	bool ___flipVertical_6;
	// System.Boolean OpenCVForUnitySample.WebCamTextureToMatHelper::flipHorizontal
	bool ___flipHorizontal_7;
	// UnityEngine.Events.UnityEvent OpenCVForUnitySample.WebCamTextureToMatHelper::OnInitedEvent
	UnityEvent_t2938797301 * ___OnInitedEvent_8;
	// UnityEngine.Events.UnityEvent OpenCVForUnitySample.WebCamTextureToMatHelper::OnDisposedEvent
	UnityEvent_t2938797301 * ___OnDisposedEvent_9;
	// UnityEngine.WebCamTexture OpenCVForUnitySample.WebCamTextureToMatHelper::webCamTexture
	WebCamTexture_t3635181805 * ___webCamTexture_10;
	// UnityEngine.WebCamDevice OpenCVForUnitySample.WebCamTextureToMatHelper::webCamDevice
	WebCamDevice_t1687076478  ___webCamDevice_11;
	// OpenCVForUnity.Mat OpenCVForUnitySample.WebCamTextureToMatHelper::rgbaMat
	Mat_t1174969555 * ___rgbaMat_12;
	// OpenCVForUnity.Mat OpenCVForUnitySample.WebCamTextureToMatHelper::rotatedRgbaMat
	Mat_t1174969555 * ___rotatedRgbaMat_13;
	// UnityEngine.Color32[] OpenCVForUnitySample.WebCamTextureToMatHelper::colors
	Color32U5BU5D_t1677970742* ___colors_14;
	// System.Boolean OpenCVForUnitySample.WebCamTextureToMatHelper::initDone
	bool ___initDone_15;
	// UnityEngine.ScreenOrientation OpenCVForUnitySample.WebCamTextureToMatHelper::screenOrientation
	int32_t ___screenOrientation_16;

public:
	inline static int32_t get_offset_of_requestDeviceName_2() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___requestDeviceName_2)); }
	inline String_t* get_requestDeviceName_2() const { return ___requestDeviceName_2; }
	inline String_t** get_address_of_requestDeviceName_2() { return &___requestDeviceName_2; }
	inline void set_requestDeviceName_2(String_t* value)
	{
		___requestDeviceName_2 = value;
		Il2CppCodeGenWriteBarrier(&___requestDeviceName_2, value);
	}

	inline static int32_t get_offset_of_requestWidth_3() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___requestWidth_3)); }
	inline int32_t get_requestWidth_3() const { return ___requestWidth_3; }
	inline int32_t* get_address_of_requestWidth_3() { return &___requestWidth_3; }
	inline void set_requestWidth_3(int32_t value)
	{
		___requestWidth_3 = value;
	}

	inline static int32_t get_offset_of_requestHeight_4() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___requestHeight_4)); }
	inline int32_t get_requestHeight_4() const { return ___requestHeight_4; }
	inline int32_t* get_address_of_requestHeight_4() { return &___requestHeight_4; }
	inline void set_requestHeight_4(int32_t value)
	{
		___requestHeight_4 = value;
	}

	inline static int32_t get_offset_of_requestIsFrontFacing_5() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___requestIsFrontFacing_5)); }
	inline bool get_requestIsFrontFacing_5() const { return ___requestIsFrontFacing_5; }
	inline bool* get_address_of_requestIsFrontFacing_5() { return &___requestIsFrontFacing_5; }
	inline void set_requestIsFrontFacing_5(bool value)
	{
		___requestIsFrontFacing_5 = value;
	}

	inline static int32_t get_offset_of_flipVertical_6() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___flipVertical_6)); }
	inline bool get_flipVertical_6() const { return ___flipVertical_6; }
	inline bool* get_address_of_flipVertical_6() { return &___flipVertical_6; }
	inline void set_flipVertical_6(bool value)
	{
		___flipVertical_6 = value;
	}

	inline static int32_t get_offset_of_flipHorizontal_7() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___flipHorizontal_7)); }
	inline bool get_flipHorizontal_7() const { return ___flipHorizontal_7; }
	inline bool* get_address_of_flipHorizontal_7() { return &___flipHorizontal_7; }
	inline void set_flipHorizontal_7(bool value)
	{
		___flipHorizontal_7 = value;
	}

	inline static int32_t get_offset_of_OnInitedEvent_8() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___OnInitedEvent_8)); }
	inline UnityEvent_t2938797301 * get_OnInitedEvent_8() const { return ___OnInitedEvent_8; }
	inline UnityEvent_t2938797301 ** get_address_of_OnInitedEvent_8() { return &___OnInitedEvent_8; }
	inline void set_OnInitedEvent_8(UnityEvent_t2938797301 * value)
	{
		___OnInitedEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitedEvent_8, value);
	}

	inline static int32_t get_offset_of_OnDisposedEvent_9() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___OnDisposedEvent_9)); }
	inline UnityEvent_t2938797301 * get_OnDisposedEvent_9() const { return ___OnDisposedEvent_9; }
	inline UnityEvent_t2938797301 ** get_address_of_OnDisposedEvent_9() { return &___OnDisposedEvent_9; }
	inline void set_OnDisposedEvent_9(UnityEvent_t2938797301 * value)
	{
		___OnDisposedEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisposedEvent_9, value);
	}

	inline static int32_t get_offset_of_webCamTexture_10() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___webCamTexture_10)); }
	inline WebCamTexture_t3635181805 * get_webCamTexture_10() const { return ___webCamTexture_10; }
	inline WebCamTexture_t3635181805 ** get_address_of_webCamTexture_10() { return &___webCamTexture_10; }
	inline void set_webCamTexture_10(WebCamTexture_t3635181805 * value)
	{
		___webCamTexture_10 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTexture_10, value);
	}

	inline static int32_t get_offset_of_webCamDevice_11() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___webCamDevice_11)); }
	inline WebCamDevice_t1687076478  get_webCamDevice_11() const { return ___webCamDevice_11; }
	inline WebCamDevice_t1687076478 * get_address_of_webCamDevice_11() { return &___webCamDevice_11; }
	inline void set_webCamDevice_11(WebCamDevice_t1687076478  value)
	{
		___webCamDevice_11 = value;
	}

	inline static int32_t get_offset_of_rgbaMat_12() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___rgbaMat_12)); }
	inline Mat_t1174969555 * get_rgbaMat_12() const { return ___rgbaMat_12; }
	inline Mat_t1174969555 ** get_address_of_rgbaMat_12() { return &___rgbaMat_12; }
	inline void set_rgbaMat_12(Mat_t1174969555 * value)
	{
		___rgbaMat_12 = value;
		Il2CppCodeGenWriteBarrier(&___rgbaMat_12, value);
	}

	inline static int32_t get_offset_of_rotatedRgbaMat_13() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___rotatedRgbaMat_13)); }
	inline Mat_t1174969555 * get_rotatedRgbaMat_13() const { return ___rotatedRgbaMat_13; }
	inline Mat_t1174969555 ** get_address_of_rotatedRgbaMat_13() { return &___rotatedRgbaMat_13; }
	inline void set_rotatedRgbaMat_13(Mat_t1174969555 * value)
	{
		___rotatedRgbaMat_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotatedRgbaMat_13, value);
	}

	inline static int32_t get_offset_of_colors_14() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___colors_14)); }
	inline Color32U5BU5D_t1677970742* get_colors_14() const { return ___colors_14; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_14() { return &___colors_14; }
	inline void set_colors_14(Color32U5BU5D_t1677970742* value)
	{
		___colors_14 = value;
		Il2CppCodeGenWriteBarrier(&___colors_14, value);
	}

	inline static int32_t get_offset_of_initDone_15() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___initDone_15)); }
	inline bool get_initDone_15() const { return ___initDone_15; }
	inline bool* get_address_of_initDone_15() { return &___initDone_15; }
	inline void set_initDone_15(bool value)
	{
		___initDone_15 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_16() { return static_cast<int32_t>(offsetof(WebCamTextureToMatHelper_t2905695572, ___screenOrientation_16)); }
	inline int32_t get_screenOrientation_16() const { return ___screenOrientation_16; }
	inline int32_t* get_address_of_screenOrientation_16() { return &___screenOrientation_16; }
	inline void set_screenOrientation_16(int32_t value)
	{
		___screenOrientation_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
