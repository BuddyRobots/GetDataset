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

// OpenCVForUnity.CLAHE
struct CLAHE_t1239097224;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"

// System.Void OpenCVForUnity.CLAHE::.ctor(System.IntPtr)
extern "C"  void CLAHE__ctor_m1868675849 (CLAHE_t1239097224 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::Dispose(System.Boolean)
extern "C"  void CLAHE_Dispose_m1164567583 (CLAHE_t1239097224 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.CLAHE::getTilesGridSize()
extern "C"  Size_t1177469876 * CLAHE_getTilesGridSize_m2731406204 (CLAHE_t1239097224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.CLAHE::getClipLimit()
extern "C"  double CLAHE_getClipLimit_m1379007441 (CLAHE_t1239097224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::apply(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void CLAHE_apply_m4127608047 (CLAHE_t1239097224 * __this, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::collectGarbage()
extern "C"  void CLAHE_collectGarbage_m1943144324 (CLAHE_t1239097224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::setClipLimit(System.Double)
extern "C"  void CLAHE_setClipLimit_m2729729056 (CLAHE_t1239097224 * __this, double ___clipLimit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::setTilesGridSize(OpenCVForUnity.Size)
extern "C"  void CLAHE_setTilesGridSize_m3130431401 (CLAHE_t1239097224 * __this, Size_t1177469876 * ___tileGridSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_getTilesGridSize_10(System.IntPtr,System.Double[])
extern "C"  void CLAHE_imgproc_CLAHE_getTilesGridSize_10_m2105874669 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.CLAHE::imgproc_CLAHE_getClipLimit_10(System.IntPtr)
extern "C"  double CLAHE_imgproc_CLAHE_getClipLimit_10_m995354229 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_apply_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CLAHE_imgproc_CLAHE_apply_10_m3923263863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_collectGarbage_10(System.IntPtr)
extern "C"  void CLAHE_imgproc_CLAHE_collectGarbage_10_m1669896552 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_setClipLimit_10(System.IntPtr,System.Double)
extern "C"  void CLAHE_imgproc_CLAHE_setClipLimit_10_m1815679554 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, double ___clipLimit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_setTilesGridSize_10(System.IntPtr,System.Double,System.Double)
extern "C"  void CLAHE_imgproc_CLAHE_setTilesGridSize_10_m2316096319 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, double ___tileGridSize_width, double ___tileGridSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_delete(System.IntPtr)
extern "C"  void CLAHE_imgproc_CLAHE_delete_m1370924256 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
