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
// OpenCVForUnity.MatOfPoint
struct MatOfPoint_t97179692;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t580066400;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3217930354;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t87860472;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;
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

// OpenCVForUnitySample.OpticalFlowSample
struct  OpticalFlowSample_t2712197009  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.OpticalFlowSample::colors
	Color32U5BU5D_t1677970742* ___colors_2;
	// OpenCVForUnity.Mat OpenCVForUnitySample.OpticalFlowSample::matOpFlowThis
	Mat_t1174969555 * ___matOpFlowThis_3;
	// OpenCVForUnity.Mat OpenCVForUnitySample.OpticalFlowSample::matOpFlowPrev
	Mat_t1174969555 * ___matOpFlowPrev_4;
	// System.Int32 OpenCVForUnitySample.OpticalFlowSample::iGFFTMax
	int32_t ___iGFFTMax_5;
	// OpenCVForUnity.MatOfPoint OpenCVForUnitySample.OpticalFlowSample::MOPcorners
	MatOfPoint_t97179692 * ___MOPcorners_6;
	// OpenCVForUnity.MatOfPoint2f OpenCVForUnitySample.OpticalFlowSample::mMOP2fptsThis
	MatOfPoint2f_t580066400 * ___mMOP2fptsThis_7;
	// OpenCVForUnity.MatOfPoint2f OpenCVForUnitySample.OpticalFlowSample::mMOP2fptsPrev
	MatOfPoint2f_t580066400 * ___mMOP2fptsPrev_8;
	// OpenCVForUnity.MatOfPoint2f OpenCVForUnitySample.OpticalFlowSample::mMOP2fptsSafe
	MatOfPoint2f_t580066400 * ___mMOP2fptsSafe_9;
	// OpenCVForUnity.MatOfByte OpenCVForUnitySample.OpticalFlowSample::mMOBStatus
	MatOfByte_t3217930354 * ___mMOBStatus_10;
	// OpenCVForUnity.MatOfFloat OpenCVForUnitySample.OpticalFlowSample::mMOFerr
	MatOfFloat_t87860472 * ___mMOFerr_11;
	// OpenCVForUnity.Scalar OpenCVForUnitySample.OpticalFlowSample::colorRed
	Scalar_t3645537183 * ___colorRed_12;
	// System.Int32 OpenCVForUnitySample.OpticalFlowSample::iLineThickness
	int32_t ___iLineThickness_13;
	// UnityEngine.Texture2D OpenCVForUnitySample.OpticalFlowSample::texture
	Texture2D_t2509538522 * ___texture_14;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.OpticalFlowSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t2905695572 * ___webCamTextureToMatHelper_15;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___colors_2)); }
	inline Color32U5BU5D_t1677970742* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t1677970742* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_matOpFlowThis_3() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___matOpFlowThis_3)); }
	inline Mat_t1174969555 * get_matOpFlowThis_3() const { return ___matOpFlowThis_3; }
	inline Mat_t1174969555 ** get_address_of_matOpFlowThis_3() { return &___matOpFlowThis_3; }
	inline void set_matOpFlowThis_3(Mat_t1174969555 * value)
	{
		___matOpFlowThis_3 = value;
		Il2CppCodeGenWriteBarrier(&___matOpFlowThis_3, value);
	}

	inline static int32_t get_offset_of_matOpFlowPrev_4() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___matOpFlowPrev_4)); }
	inline Mat_t1174969555 * get_matOpFlowPrev_4() const { return ___matOpFlowPrev_4; }
	inline Mat_t1174969555 ** get_address_of_matOpFlowPrev_4() { return &___matOpFlowPrev_4; }
	inline void set_matOpFlowPrev_4(Mat_t1174969555 * value)
	{
		___matOpFlowPrev_4 = value;
		Il2CppCodeGenWriteBarrier(&___matOpFlowPrev_4, value);
	}

	inline static int32_t get_offset_of_iGFFTMax_5() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___iGFFTMax_5)); }
	inline int32_t get_iGFFTMax_5() const { return ___iGFFTMax_5; }
	inline int32_t* get_address_of_iGFFTMax_5() { return &___iGFFTMax_5; }
	inline void set_iGFFTMax_5(int32_t value)
	{
		___iGFFTMax_5 = value;
	}

	inline static int32_t get_offset_of_MOPcorners_6() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___MOPcorners_6)); }
	inline MatOfPoint_t97179692 * get_MOPcorners_6() const { return ___MOPcorners_6; }
	inline MatOfPoint_t97179692 ** get_address_of_MOPcorners_6() { return &___MOPcorners_6; }
	inline void set_MOPcorners_6(MatOfPoint_t97179692 * value)
	{
		___MOPcorners_6 = value;
		Il2CppCodeGenWriteBarrier(&___MOPcorners_6, value);
	}

	inline static int32_t get_offset_of_mMOP2fptsThis_7() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___mMOP2fptsThis_7)); }
	inline MatOfPoint2f_t580066400 * get_mMOP2fptsThis_7() const { return ___mMOP2fptsThis_7; }
	inline MatOfPoint2f_t580066400 ** get_address_of_mMOP2fptsThis_7() { return &___mMOP2fptsThis_7; }
	inline void set_mMOP2fptsThis_7(MatOfPoint2f_t580066400 * value)
	{
		___mMOP2fptsThis_7 = value;
		Il2CppCodeGenWriteBarrier(&___mMOP2fptsThis_7, value);
	}

	inline static int32_t get_offset_of_mMOP2fptsPrev_8() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___mMOP2fptsPrev_8)); }
	inline MatOfPoint2f_t580066400 * get_mMOP2fptsPrev_8() const { return ___mMOP2fptsPrev_8; }
	inline MatOfPoint2f_t580066400 ** get_address_of_mMOP2fptsPrev_8() { return &___mMOP2fptsPrev_8; }
	inline void set_mMOP2fptsPrev_8(MatOfPoint2f_t580066400 * value)
	{
		___mMOP2fptsPrev_8 = value;
		Il2CppCodeGenWriteBarrier(&___mMOP2fptsPrev_8, value);
	}

	inline static int32_t get_offset_of_mMOP2fptsSafe_9() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___mMOP2fptsSafe_9)); }
	inline MatOfPoint2f_t580066400 * get_mMOP2fptsSafe_9() const { return ___mMOP2fptsSafe_9; }
	inline MatOfPoint2f_t580066400 ** get_address_of_mMOP2fptsSafe_9() { return &___mMOP2fptsSafe_9; }
	inline void set_mMOP2fptsSafe_9(MatOfPoint2f_t580066400 * value)
	{
		___mMOP2fptsSafe_9 = value;
		Il2CppCodeGenWriteBarrier(&___mMOP2fptsSafe_9, value);
	}

	inline static int32_t get_offset_of_mMOBStatus_10() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___mMOBStatus_10)); }
	inline MatOfByte_t3217930354 * get_mMOBStatus_10() const { return ___mMOBStatus_10; }
	inline MatOfByte_t3217930354 ** get_address_of_mMOBStatus_10() { return &___mMOBStatus_10; }
	inline void set_mMOBStatus_10(MatOfByte_t3217930354 * value)
	{
		___mMOBStatus_10 = value;
		Il2CppCodeGenWriteBarrier(&___mMOBStatus_10, value);
	}

	inline static int32_t get_offset_of_mMOFerr_11() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___mMOFerr_11)); }
	inline MatOfFloat_t87860472 * get_mMOFerr_11() const { return ___mMOFerr_11; }
	inline MatOfFloat_t87860472 ** get_address_of_mMOFerr_11() { return &___mMOFerr_11; }
	inline void set_mMOFerr_11(MatOfFloat_t87860472 * value)
	{
		___mMOFerr_11 = value;
		Il2CppCodeGenWriteBarrier(&___mMOFerr_11, value);
	}

	inline static int32_t get_offset_of_colorRed_12() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___colorRed_12)); }
	inline Scalar_t3645537183 * get_colorRed_12() const { return ___colorRed_12; }
	inline Scalar_t3645537183 ** get_address_of_colorRed_12() { return &___colorRed_12; }
	inline void set_colorRed_12(Scalar_t3645537183 * value)
	{
		___colorRed_12 = value;
		Il2CppCodeGenWriteBarrier(&___colorRed_12, value);
	}

	inline static int32_t get_offset_of_iLineThickness_13() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___iLineThickness_13)); }
	inline int32_t get_iLineThickness_13() const { return ___iLineThickness_13; }
	inline int32_t* get_address_of_iLineThickness_13() { return &___iLineThickness_13; }
	inline void set_iLineThickness_13(int32_t value)
	{
		___iLineThickness_13 = value;
	}

	inline static int32_t get_offset_of_texture_14() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___texture_14)); }
	inline Texture2D_t2509538522 * get_texture_14() const { return ___texture_14; }
	inline Texture2D_t2509538522 ** get_address_of_texture_14() { return &___texture_14; }
	inline void set_texture_14(Texture2D_t2509538522 * value)
	{
		___texture_14 = value;
		Il2CppCodeGenWriteBarrier(&___texture_14, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_15() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t2712197009, ___webCamTextureToMatHelper_15)); }
	inline WebCamTextureToMatHelper_t2905695572 * get_webCamTextureToMatHelper_15() const { return ___webCamTextureToMatHelper_15; }
	inline WebCamTextureToMatHelper_t2905695572 ** get_address_of_webCamTextureToMatHelper_15() { return &___webCamTextureToMatHelper_15; }
	inline void set_webCamTextureToMatHelper_15(WebCamTextureToMatHelper_t2905695572 * value)
	{
		___webCamTextureToMatHelper_15 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
