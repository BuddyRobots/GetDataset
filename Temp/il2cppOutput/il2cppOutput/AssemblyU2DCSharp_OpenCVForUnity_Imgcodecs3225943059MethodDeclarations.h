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

// OpenCVForUnity.Imgcodecs
struct Imgcodecs_t3225943059;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.String
struct String_t;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3217930354;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t1517897931;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfByte3217930354.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt1517897931.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Imgcodecs::.ctor()
extern "C"  void Imgcodecs__ctor_m3211849856 (Imgcodecs_t3225943059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgcodecs::imdecode(OpenCVForUnity.Mat,System.Int32)
extern "C"  Mat_t1174969555 * Imgcodecs_imdecode_m1689778618 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___buf, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgcodecs::imread(System.String,System.Int32)
extern "C"  Mat_t1174969555 * Imgcodecs_imread_m2812195605 (Il2CppObject * __this /* static, unused */, String_t* ___filename, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgcodecs::imread(System.String)
extern "C"  Mat_t1174969555 * Imgcodecs_imread_m1685527810 (Il2CppObject * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imencode(System.String,OpenCVForUnity.Mat,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfInt)
extern "C"  bool Imgcodecs_imencode_m1044550080 (Il2CppObject * __this /* static, unused */, String_t* ___ext, Mat_t1174969555 * ___img, MatOfByte_t3217930354 * ___buf, MatOfInt_t1517897931 * ____params, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imencode(System.String,OpenCVForUnity.Mat,OpenCVForUnity.MatOfByte)
extern "C"  bool Imgcodecs_imencode_m4199683025 (Il2CppObject * __this /* static, unused */, String_t* ___ext, Mat_t1174969555 * ___img, MatOfByte_t3217930354 * ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imreadmulti(System.String,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Int32)
extern "C"  bool Imgcodecs_imreadmulti_m934990423 (Il2CppObject * __this /* static, unused */, String_t* ___filename, List_1_t1971928524 * ___mats, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imreadmulti(System.String,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  bool Imgcodecs_imreadmulti_m2676972160 (Il2CppObject * __this /* static, unused */, String_t* ___filename, List_1_t1971928524 * ___mats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imwrite(System.String,OpenCVForUnity.Mat,OpenCVForUnity.MatOfInt)
extern "C"  bool Imgcodecs_imwrite_m1787692957 (Il2CppObject * __this /* static, unused */, String_t* ___filename, Mat_t1174969555 * ___img, MatOfInt_t1517897931 * ____params, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imwrite(System.String,OpenCVForUnity.Mat)
extern "C"  bool Imgcodecs_imwrite_m555684014 (Il2CppObject * __this /* static, unused */, String_t* ___filename, Mat_t1174969555 * ___img, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imdecode_10(System.IntPtr,System.Int32)
extern "C"  IntPtr_t Imgcodecs_imgcodecs_Imgcodecs_imdecode_10_m1198502778 (Il2CppObject * __this /* static, unused */, IntPtr_t ___buf_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imread_10(System.String,System.Int32)
extern "C"  IntPtr_t Imgcodecs_imgcodecs_Imgcodecs_imread_10_m2779199588 (Il2CppObject * __this /* static, unused */, String_t* ___filename, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imread_11(System.String)
extern "C"  IntPtr_t Imgcodecs_imgcodecs_Imgcodecs_imread_11_m3802595634 (Il2CppObject * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imencode_10(System.String,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool Imgcodecs_imgcodecs_Imgcodecs_imencode_10_m264352316 (Il2CppObject * __this /* static, unused */, String_t* ___ext, IntPtr_t ___img_nativeObj, IntPtr_t ___buf_mat_nativeObj, IntPtr_t ___params_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imencode_11(System.String,System.IntPtr,System.IntPtr)
extern "C"  bool Imgcodecs_imgcodecs_Imgcodecs_imencode_11_m858068621 (Il2CppObject * __this /* static, unused */, String_t* ___ext, IntPtr_t ___img_nativeObj, IntPtr_t ___buf_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imreadmulti_10(System.String,System.IntPtr,System.Int32)
extern "C"  bool Imgcodecs_imgcodecs_Imgcodecs_imreadmulti_10_m1927038108 (Il2CppObject * __this /* static, unused */, String_t* ___filename, IntPtr_t ___mats_mat_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imreadmulti_11(System.String,System.IntPtr)
extern "C"  bool Imgcodecs_imgcodecs_Imgcodecs_imreadmulti_11_m3543484346 (Il2CppObject * __this /* static, unused */, String_t* ___filename, IntPtr_t ___mats_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imwrite_10(System.String,System.IntPtr,System.IntPtr)
extern "C"  bool Imgcodecs_imgcodecs_Imgcodecs_imwrite_10_m710176613 (Il2CppObject * __this /* static, unused */, String_t* ___filename, IntPtr_t ___img_nativeObj, IntPtr_t ___params_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgcodecs::imgcodecs_Imgcodecs_imwrite_11(System.String,System.IntPtr)
extern "C"  bool Imgcodecs_imgcodecs_Imgcodecs_imwrite_11_m2989646262 (Il2CppObject * __this /* static, unused */, String_t* ___filename, IntPtr_t ___img_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
