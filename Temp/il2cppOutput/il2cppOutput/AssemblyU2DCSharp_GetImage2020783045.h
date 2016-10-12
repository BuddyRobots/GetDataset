#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.WebCamTexture
struct WebCamTexture_t3635181805;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// RecognizeAlgo
struct RecognizeAlgo_t3253563361;
// MagicCircuit.RotateCamera
struct RotateCamera_t3561981172;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_WebCamDevice1687076478.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetImage
struct  GetImage_t2020783045  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Texture2D GetImage::texture
	Texture2D_t2509538522 * ___texture_6;
	// UnityEngine.WebCamTexture GetImage::webCamTexture
	WebCamTexture_t3635181805 * ___webCamTexture_7;
	// UnityEngine.WebCamDevice GetImage::webCamDevice
	WebCamDevice_t1687076478  ___webCamDevice_8;
	// OpenCVForUnity.Mat GetImage::frameImg
	Mat_t1174969555 * ___frameImg_9;
	// OpenCVForUnity.Mat GetImage::img
	Mat_t1174969555 * ___img_10;
	// RecognizeAlgo GetImage::recognizeAlgo
	RecognizeAlgo_t3253563361 * ___recognizeAlgo_11;
	// MagicCircuit.RotateCamera GetImage::rotateCamera
	RotateCamera_t3561981172 * ___rotateCamera_12;
	// System.Boolean GetImage::initDone
	bool ___initDone_13;
	// System.Collections.Generic.List`1<OpenCVForUnity.Mat> GetImage::tempImgs
	List_1_t1971928524 * ___tempImgs_14;
	// System.Collections.Generic.List`1<OpenCVForUnity.Mat> GetImage::matList
	List_1_t1971928524 * ___matList_15;

public:
	inline static int32_t get_offset_of_texture_6() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___texture_6)); }
	inline Texture2D_t2509538522 * get_texture_6() const { return ___texture_6; }
	inline Texture2D_t2509538522 ** get_address_of_texture_6() { return &___texture_6; }
	inline void set_texture_6(Texture2D_t2509538522 * value)
	{
		___texture_6 = value;
		Il2CppCodeGenWriteBarrier(&___texture_6, value);
	}

	inline static int32_t get_offset_of_webCamTexture_7() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___webCamTexture_7)); }
	inline WebCamTexture_t3635181805 * get_webCamTexture_7() const { return ___webCamTexture_7; }
	inline WebCamTexture_t3635181805 ** get_address_of_webCamTexture_7() { return &___webCamTexture_7; }
	inline void set_webCamTexture_7(WebCamTexture_t3635181805 * value)
	{
		___webCamTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTexture_7, value);
	}

	inline static int32_t get_offset_of_webCamDevice_8() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___webCamDevice_8)); }
	inline WebCamDevice_t1687076478  get_webCamDevice_8() const { return ___webCamDevice_8; }
	inline WebCamDevice_t1687076478 * get_address_of_webCamDevice_8() { return &___webCamDevice_8; }
	inline void set_webCamDevice_8(WebCamDevice_t1687076478  value)
	{
		___webCamDevice_8 = value;
	}

	inline static int32_t get_offset_of_frameImg_9() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___frameImg_9)); }
	inline Mat_t1174969555 * get_frameImg_9() const { return ___frameImg_9; }
	inline Mat_t1174969555 ** get_address_of_frameImg_9() { return &___frameImg_9; }
	inline void set_frameImg_9(Mat_t1174969555 * value)
	{
		___frameImg_9 = value;
		Il2CppCodeGenWriteBarrier(&___frameImg_9, value);
	}

	inline static int32_t get_offset_of_img_10() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___img_10)); }
	inline Mat_t1174969555 * get_img_10() const { return ___img_10; }
	inline Mat_t1174969555 ** get_address_of_img_10() { return &___img_10; }
	inline void set_img_10(Mat_t1174969555 * value)
	{
		___img_10 = value;
		Il2CppCodeGenWriteBarrier(&___img_10, value);
	}

	inline static int32_t get_offset_of_recognizeAlgo_11() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___recognizeAlgo_11)); }
	inline RecognizeAlgo_t3253563361 * get_recognizeAlgo_11() const { return ___recognizeAlgo_11; }
	inline RecognizeAlgo_t3253563361 ** get_address_of_recognizeAlgo_11() { return &___recognizeAlgo_11; }
	inline void set_recognizeAlgo_11(RecognizeAlgo_t3253563361 * value)
	{
		___recognizeAlgo_11 = value;
		Il2CppCodeGenWriteBarrier(&___recognizeAlgo_11, value);
	}

	inline static int32_t get_offset_of_rotateCamera_12() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___rotateCamera_12)); }
	inline RotateCamera_t3561981172 * get_rotateCamera_12() const { return ___rotateCamera_12; }
	inline RotateCamera_t3561981172 ** get_address_of_rotateCamera_12() { return &___rotateCamera_12; }
	inline void set_rotateCamera_12(RotateCamera_t3561981172 * value)
	{
		___rotateCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___rotateCamera_12, value);
	}

	inline static int32_t get_offset_of_initDone_13() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___initDone_13)); }
	inline bool get_initDone_13() const { return ___initDone_13; }
	inline bool* get_address_of_initDone_13() { return &___initDone_13; }
	inline void set_initDone_13(bool value)
	{
		___initDone_13 = value;
	}

	inline static int32_t get_offset_of_tempImgs_14() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___tempImgs_14)); }
	inline List_1_t1971928524 * get_tempImgs_14() const { return ___tempImgs_14; }
	inline List_1_t1971928524 ** get_address_of_tempImgs_14() { return &___tempImgs_14; }
	inline void set_tempImgs_14(List_1_t1971928524 * value)
	{
		___tempImgs_14 = value;
		Il2CppCodeGenWriteBarrier(&___tempImgs_14, value);
	}

	inline static int32_t get_offset_of_matList_15() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___matList_15)); }
	inline List_1_t1971928524 * get_matList_15() const { return ___matList_15; }
	inline List_1_t1971928524 ** get_address_of_matList_15() { return &___matList_15; }
	inline void set_matList_15(List_1_t1971928524 * value)
	{
		___matList_15 = value;
		Il2CppCodeGenWriteBarrier(&___matList_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
