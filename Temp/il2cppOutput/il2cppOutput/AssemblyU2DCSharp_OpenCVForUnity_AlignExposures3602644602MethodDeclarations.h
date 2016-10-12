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

// OpenCVForUnity.AlignExposures
struct AlignExposures_t3602644602;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.AlignExposures::.ctor(System.IntPtr)
extern "C"  void AlignExposures__ctor_m3859857301 (AlignExposures_t3602644602 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::Dispose(System.Boolean)
extern "C"  void AlignExposures_Dispose_m2657879059 (AlignExposures_t3602644602 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void AlignExposures_process_m3339069544 (AlignExposures_t3602644602 * __this, List_1_t1971928524 * ___src, List_1_t1971928524 * ___dst, Mat_t1174969555 * ___times, Mat_t1174969555 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::photo_AlignExposures_process_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignExposures_photo_AlignExposures_process_10_m919943317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, IntPtr_t ___times_nativeObj, IntPtr_t ___response_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::photo_AlignExposures_delete(System.IntPtr)
extern "C"  void AlignExposures_photo_AlignExposures_delete_m2562994593 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
