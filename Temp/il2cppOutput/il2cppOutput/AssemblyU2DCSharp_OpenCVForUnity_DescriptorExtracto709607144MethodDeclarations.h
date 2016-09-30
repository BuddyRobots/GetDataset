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

// OpenCVForUnity.DescriptorExtractor
struct DescriptorExtractor_t709607144;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.MatOfKeyPoint
struct MatOfKeyPoint_t4231167579;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfKeyPoint>
struct List_1_t733159252;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfKeyPoint4231167579.h"
#include "mscorlib_System_String968488902.h"

// System.Void OpenCVForUnity.DescriptorExtractor::.ctor(System.IntPtr)
extern "C"  void DescriptorExtractor__ctor_m4026538281 (DescriptorExtractor_t709607144 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::Dispose(System.Boolean)
extern "C"  void DescriptorExtractor_Dispose_m3268760063 (DescriptorExtractor_t709607144 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorExtractor::empty()
extern "C"  bool DescriptorExtractor_empty_m2393993506 (DescriptorExtractor_t709607144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::descriptorSize()
extern "C"  int32_t DescriptorExtractor_descriptorSize_m1841939415 (DescriptorExtractor_t709607144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::descriptorType()
extern "C"  int32_t DescriptorExtractor_descriptorType_m1885046992 (DescriptorExtractor_t709607144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DescriptorExtractor OpenCVForUnity.DescriptorExtractor::create(System.Int32)
extern "C"  DescriptorExtractor_t709607144 * DescriptorExtractor_create_m1799494259 (Il2CppObject * __this /* static, unused */, int32_t ___extractorType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::compute(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat)
extern "C"  void DescriptorExtractor_compute_m413899021 (DescriptorExtractor_t709607144 * __this, Mat_t1174969555 * ___image, MatOfKeyPoint_t4231167579 * ___keypoints, Mat_t1174969555 * ___descriptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::compute(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.MatOfKeyPoint>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void DescriptorExtractor_compute_m1052535235 (DescriptorExtractor_t709607144 * __this, List_1_t1971928524 * ___images, List_1_t733159252 * ___keypoints, List_1_t1971928524 * ___descriptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::read(System.String)
extern "C"  void DescriptorExtractor_read_m1692859539 (DescriptorExtractor_t709607144 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::write(System.String)
extern "C"  void DescriptorExtractor_write_m3522218394 (DescriptorExtractor_t709607144 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_empty_10(System.IntPtr)
extern "C"  bool DescriptorExtractor_features2d_DescriptorExtractor_empty_10_m2641574452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_descriptorSize_10(System.IntPtr)
extern "C"  int32_t DescriptorExtractor_features2d_DescriptorExtractor_descriptorSize_10_m1723470201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_descriptorType_10(System.IntPtr)
extern "C"  int32_t DescriptorExtractor_features2d_DescriptorExtractor_descriptorType_10_m2860303474 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_create_10(System.Int32)
extern "C"  IntPtr_t DescriptorExtractor_features2d_DescriptorExtractor_create_10_m521988807 (Il2CppObject * __this /* static, unused */, int32_t ___extractorType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_compute_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_compute_10_m2761100308 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___keypoints_mat_nativeObj, IntPtr_t ___descriptors_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_compute_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_compute_11_m830481203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___images_mat_nativeObj, IntPtr_t ___keypoints_mat_nativeObj, IntPtr_t ___descriptors_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_read_10(System.IntPtr,System.String)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_read_10_m1375076937 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_write_10(System.IntPtr,System.String)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_write_10_m3455514446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_delete(System.IntPtr)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_delete_m2272882022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
