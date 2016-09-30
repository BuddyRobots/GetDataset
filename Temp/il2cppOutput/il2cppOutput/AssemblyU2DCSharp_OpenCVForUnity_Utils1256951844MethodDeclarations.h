#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OpenCVForUnity.Mat
struct Mat_t1174969555;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// UnityEngine.WebCamTexture
struct WebCamTexture_t3635181805;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_WebCamTexture3635181805.h"
#include "mscorlib_System_String968488902.h"

// System.Void OpenCVForUnity.Utils::copyFromMat(OpenCVForUnity.Mat,System.IntPtr)
extern "C"  void Utils_copyFromMat_m1925838113 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mat, IntPtr_t ___intPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::copyToMat(System.IntPtr,OpenCVForUnity.Mat)
extern "C"  void Utils_copyToMat_m1293442068 (Il2CppObject * __this /* static, unused */, IntPtr_t ___intPtr, Mat_t1174969555 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::copyFromTexture(UnityEngine.Texture,System.IntPtr,System.Int32)
extern "C"  void Utils_copyFromTexture_m1012343492 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___texture, IntPtr_t ___intPtr, int32_t ___bytesPerPixel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::copyToTexture(System.IntPtr,UnityEngine.Texture,System.Int32)
extern "C"  void Utils_copyToTexture_m3705969555 (Il2CppObject * __this /* static, unused */, IntPtr_t ___intPtr, Texture_t1769722184 * ___texture, int32_t ___bytesPerPixel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::matToTexture2D(OpenCVForUnity.Mat,UnityEngine.Texture2D)
extern "C"  void Utils_matToTexture2D_m2230510946 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mat, Texture2D_t2509538522 * ___texture2D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::matToTexture2D(OpenCVForUnity.Mat,UnityEngine.Texture2D,UnityEngine.Color32[])
extern "C"  void Utils_matToTexture2D_m3021704417 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mat, Texture2D_t2509538522 * ___texture2D, Color32U5BU5D_t1677970742* ___bufferColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::fastMatToTexture2D(OpenCVForUnity.Mat,UnityEngine.Texture2D)
extern "C"  void Utils_fastMatToTexture2D_m1513546718 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mat, Texture2D_t2509538522 * ___texture2D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::texture2DToMat(UnityEngine.Texture2D,OpenCVForUnity.Mat)
extern "C"  void Utils_texture2DToMat_m3983530748 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___texture2D, Mat_t1174969555 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::fastTexture2DToMat(UnityEngine.Texture2D,OpenCVForUnity.Mat)
extern "C"  void Utils_fastTexture2DToMat_m3266566520 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___texture2D, Mat_t1174969555 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::webCamTextureToMat(UnityEngine.WebCamTexture,OpenCVForUnity.Mat)
extern "C"  void Utils_webCamTextureToMat_m3170062364 (Il2CppObject * __this /* static, unused */, WebCamTexture_t3635181805 * ___webCamTexture, Mat_t1174969555 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::webCamTextureToMat(UnityEngine.WebCamTexture,OpenCVForUnity.Mat,UnityEngine.Color32[])
extern "C"  void Utils_webCamTextureToMat_m1570361371 (Il2CppObject * __this /* static, unused */, WebCamTexture_t3635181805 * ___webCamTexture, Mat_t1174969555 * ___mat, Color32U5BU5D_t1677970742* ___bufferColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::matToTexture(OpenCVForUnity.Mat,UnityEngine.Texture)
extern "C"  void Utils_matToTexture_m2165657826 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mat, Texture_t1769722184 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::textureToMat(UnityEngine.Texture,OpenCVForUnity.Mat)
extern "C"  void Utils_textureToMat_m2249680636 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___texture, Mat_t1174969555 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Utils::getLowLevelGraphicsDeviceType()
extern "C"  int32_t Utils_getLowLevelGraphicsDeviceType_m1294182912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Utils::getLowLevelTextureFormat(UnityEngine.Texture)
extern "C"  int32_t Utils_getLowLevelTextureFormat_m2999071807 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Utils::isNewLowLevelNativePluginInterface()
extern "C"  bool Utils_isNewLowLevelNativePluginInterface_m70766770 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Utils::getFilePath(System.String)
extern "C"  String_t* Utils_getFilePath_m1460232161 (Il2CppObject * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::setDebugMode(System.Boolean)
extern "C"  void Utils_setDebugMode_m2000980544 (Il2CppObject * __this /* static, unused */, bool ___debugMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Utils::URShift(System.Int32,System.Int32)
extern "C"  int32_t Utils_URShift_m378835074 (Il2CppObject * __this /* static, unused */, int32_t ___number, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Utils::URShift(System.Int64,System.Int32)
extern "C"  int64_t Utils_URShift_m3137114914 (Il2CppObject * __this /* static, unused */, int64_t ___number, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Utils::OpenCVForUnity_GetFilePath(System.String)
extern "C"  IntPtr_t Utils_OpenCVForUnity_GetFilePath_m2596740407 (Il2CppObject * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_MatToTexture(System.IntPtr,System.IntPtr)
extern "C"  void Utils_OpenCVForUnity_MatToTexture_m4063186591 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mat, IntPtr_t ___textureColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_TextureToMat(System.IntPtr,System.IntPtr)
extern "C"  void Utils_OpenCVForUnity_TextureToMat_m3693594357 (Il2CppObject * __this /* static, unused */, IntPtr_t ___textureColors, IntPtr_t ___Mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_MatDataToByteArray(System.IntPtr,System.IntPtr)
extern "C"  void Utils_OpenCVForUnity_MatDataToByteArray_m445738451 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mat, IntPtr_t ___byteArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_ByteArrayToMatData(System.IntPtr,System.IntPtr)
extern "C"  void Utils_OpenCVForUnity_ByteArrayToMatData_m1021910657 (Il2CppObject * __this /* static, unused */, IntPtr_t ___byteArray, IntPtr_t ___Mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_TextureDataToByteArray(System.IntPtr,System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C"  void Utils_OpenCVForUnity_TextureDataToByteArray_m3026882601 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texPtr, int32_t ___texWidth, int32_t ___texHeight, IntPtr_t ___byteArray, int32_t ___bytesPerPixel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_ByteArrayToTextureData(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Utils_OpenCVForUnity_ByteArrayToTextureData_m1004287889 (Il2CppObject * __this /* static, unused */, IntPtr_t ___byteArray, IntPtr_t ___texPtr, int32_t ___texWidth, int32_t ___texHeight, int32_t ___bytesPerPixel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_LowLevelMatToTexture(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Utils_OpenCVForUnity_LowLevelMatToTexture_m3308433039 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mat, IntPtr_t ___texPtr, int32_t ___texWidth, int32_t ___texHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Utils::OpenCVForUnity_LowLevelTextureToMat(System.IntPtr,System.Int32,System.Int32,System.IntPtr)
extern "C"  void Utils_OpenCVForUnity_LowLevelTextureToMat_m342283493 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texPtr, int32_t ___texWidth, int32_t ___texHeight, IntPtr_t ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Utils::OpenCVForUnity_GetLowLevelGraphicsDeviceType()
extern "C"  int32_t Utils_OpenCVForUnity_GetLowLevelGraphicsDeviceType_m3679994766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Utils::OpenCVForUnity_GetLowLevelTextureFormat(System.IntPtr)
extern "C"  int32_t Utils_OpenCVForUnity_GetLowLevelTextureFormat_m2056280435 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Utils::OpenCVForUnity_IsNewLowLevelNativePluginInterface()
extern "C"  bool Utils_OpenCVForUnity_IsNewLowLevelNativePluginInterface_m2800266456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
