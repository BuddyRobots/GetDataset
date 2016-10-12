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

// OpenCVForUnity.SparseMatchInterpolator
struct SparseMatchInterpolator_t1128437855;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.SparseMatchInterpolator::.ctor(System.IntPtr)
extern "C"  void SparseMatchInterpolator__ctor_m2097956320 (SparseMatchInterpolator_t1128437855 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::Dispose(System.Boolean)
extern "C"  void SparseMatchInterpolator_Dispose_m2661078504 (SparseMatchInterpolator_t1128437855 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::interpolate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void SparseMatchInterpolator_interpolate_m2587403224 (SparseMatchInterpolator_t1128437855 * __this, Mat_t1174969555 * ___from_image, Mat_t1174969555 * ___from_points, Mat_t1174969555 * ___to_image, Mat_t1174969555 * ___to_points, Mat_t1174969555 * ___dense_flow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::ximgproc_SparseMatchInterpolator_interpolate_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void SparseMatchInterpolator_ximgproc_SparseMatchInterpolator_interpolate_10_m3341074138 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___from_image_nativeObj, IntPtr_t ___from_points_nativeObj, IntPtr_t ___to_image_nativeObj, IntPtr_t ___to_points_nativeObj, IntPtr_t ___dense_flow_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::ximgproc_SparseMatchInterpolator_delete(System.IntPtr)
extern "C"  void SparseMatchInterpolator_ximgproc_SparseMatchInterpolator_delete_m989843398 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
