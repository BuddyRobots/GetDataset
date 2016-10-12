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

// OpenCVForUnity.ShapeDistanceExtractor
struct ShapeDistanceExtractor_t28977089;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.ShapeDistanceExtractor::.ctor(System.IntPtr)
extern "C"  void ShapeDistanceExtractor__ctor_m2015042716 (ShapeDistanceExtractor_t28977089 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeDistanceExtractor::Dispose(System.Boolean)
extern "C"  void ShapeDistanceExtractor_Dispose_m2188096940 (ShapeDistanceExtractor_t28977089 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeDistanceExtractor::computeDistance(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float ShapeDistanceExtractor_computeDistance_m530867928 (ShapeDistanceExtractor_t28977089 * __this, Mat_t1174969555 * ___contour1, Mat_t1174969555 * ___contour2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeDistanceExtractor::shape_ShapeDistanceExtractor_computeDistance_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float ShapeDistanceExtractor_shape_ShapeDistanceExtractor_computeDistance_10_m2062861577 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___contour1_nativeObj, IntPtr_t ___contour2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeDistanceExtractor::shape_ShapeDistanceExtractor_delete(System.IntPtr)
extern "C"  void ShapeDistanceExtractor_shape_ShapeDistanceExtractor_delete_m2701428832 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
