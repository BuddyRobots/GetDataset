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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureToMatSample
struct  WebCamTextureToMatSample_t3216952144  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.WebCamTextureToMatSample::colors
	Color32U5BU5D_t1677970742* ___colors_2;
	// UnityEngine.Texture2D OpenCVForUnitySample.WebCamTextureToMatSample::texture
	Texture2D_t2509538522 * ___texture_3;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.WebCamTextureToMatSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t2905695572 * ___webCamTextureToMatHelper_4;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(WebCamTextureToMatSample_t3216952144, ___colors_2)); }
	inline Color32U5BU5D_t1677970742* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t1677970742* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(WebCamTextureToMatSample_t3216952144, ___texture_3)); }
	inline Texture2D_t2509538522 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t2509538522 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t2509538522 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_4() { return static_cast<int32_t>(offsetof(WebCamTextureToMatSample_t3216952144, ___webCamTextureToMatHelper_4)); }
	inline WebCamTextureToMatHelper_t2905695572 * get_webCamTextureToMatHelper_4() const { return ___webCamTextureToMatHelper_4; }
	inline WebCamTextureToMatHelper_t2905695572 ** get_address_of_webCamTextureToMatHelper_4() { return &___webCamTextureToMatHelper_4; }
	inline void set_webCamTextureToMatHelper_4(WebCamTextureToMatHelper_t2905695572 * value)
	{
		___webCamTextureToMatHelper_4 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
