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

// OpenCVForUnity.ShapeTransformer
struct ShapeTransformer_t3441621611;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.MatOfDMatch
struct MatOfDMatch_t1750353259;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDMatch1750353259.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3645537183.h"

// System.Void OpenCVForUnity.ShapeTransformer::.ctor(System.IntPtr)
extern "C"  void ShapeTransformer__ctor_m1879041414 (ShapeTransformer_t3441621611 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::Dispose(System.Boolean)
extern "C"  void ShapeTransformer_Dispose_m727469186 (ShapeTransformer_t3441621611 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::applyTransformation(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float ShapeTransformer_applyTransformation_m170109079 (ShapeTransformer_t3441621611 * __this, Mat_t1174969555 * ___input, Mat_t1174969555 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::applyTransformation(OpenCVForUnity.Mat)
extern "C"  float ShapeTransformer_applyTransformation_m2090915860 (ShapeTransformer_t3441621611 * __this, Mat_t1174969555 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::estimateTransformation(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfDMatch)
extern "C"  void ShapeTransformer_estimateTransformation_m898568084 (ShapeTransformer_t3441621611 * __this, Mat_t1174969555 * ___transformingShape, Mat_t1174969555 * ___targetShape, MatOfDMatch_t1750353259 * ___matches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::warpImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void ShapeTransformer_warpImage_m1679992194 (ShapeTransformer_t3441621611 * __this, Mat_t1174969555 * ___transformingImage, Mat_t1174969555 * ___output, int32_t ___flags, int32_t ___borderMode, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::warpImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void ShapeTransformer_warpImage_m571698736 (ShapeTransformer_t3441621611 * __this, Mat_t1174969555 * ___transformingImage, Mat_t1174969555 * ___output, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::warpImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void ShapeTransformer_warpImage_m612987399 (ShapeTransformer_t3441621611 * __this, Mat_t1174969555 * ___transformingImage, Mat_t1174969555 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_applyTransformation_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float ShapeTransformer_shape_ShapeTransformer_applyTransformation_10_m3916704104 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___input_nativeObj, IntPtr_t ___output_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_applyTransformation_11(System.IntPtr,System.IntPtr)
extern "C"  float ShapeTransformer_shape_ShapeTransformer_applyTransformation_11_m2005699833 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___input_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_estimateTransformation_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_estimateTransformation_10_m478317668 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___transformingShape_nativeObj, IntPtr_t ___targetShape_nativeObj, IntPtr_t ___matches_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_warpImage_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_warpImage_10_m2748761504 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___transformingImage_nativeObj, IntPtr_t ___output_nativeObj, int32_t ___flags, int32_t ___borderMode, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_warpImage_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_warpImage_11_m291012488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___transformingImage_nativeObj, IntPtr_t ___output_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_warpImage_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_warpImage_12_m4019682062 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___transformingImage_nativeObj, IntPtr_t ___output_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_delete(System.IntPtr)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_delete_m425399604 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
