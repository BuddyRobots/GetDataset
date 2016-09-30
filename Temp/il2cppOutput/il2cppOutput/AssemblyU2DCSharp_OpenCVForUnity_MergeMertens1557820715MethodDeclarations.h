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

// OpenCVForUnity.MergeMertens
struct MergeMertens_t1557820715;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.MergeMertens::.ctor(System.IntPtr)
extern "C"  void MergeMertens__ctor_m939939526 (MergeMertens_t1557820715 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::Dispose(System.Boolean)
extern "C"  void MergeMertens_Dispose_m1360089922 (MergeMertens_t1557820715 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.MergeMertens::getContrastWeight()
extern "C"  float MergeMertens_getContrastWeight_m2031953640 (MergeMertens_t1557820715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.MergeMertens::getExposureWeight()
extern "C"  float MergeMertens_getExposureWeight_m2238168045 (MergeMertens_t1557820715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.MergeMertens::getSaturationWeight()
extern "C"  float MergeMertens_getSaturationWeight_m841769080 (MergeMertens_t1557820715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void MergeMertens_process_m4164655033 (MergeMertens_t1557820715 * __this, List_1_t1971928524 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___times, Mat_t1174969555 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void MergeMertens_process_m688406617 (MergeMertens_t1557820715 * __this, List_1_t1971928524 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::setContrastWeight(System.Single)
extern "C"  void MergeMertens_setContrastWeight_m1779825539 (MergeMertens_t1557820715 * __this, float ___contrast_weiht, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::setExposureWeight(System.Single)
extern "C"  void MergeMertens_setExposureWeight_m2780460702 (MergeMertens_t1557820715 * __this, float ___exposure_weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::setSaturationWeight(System.Single)
extern "C"  void MergeMertens_setSaturationWeight_m2915163123 (MergeMertens_t1557820715 * __this, float ___saturation_weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.MergeMertens::photo_MergeMertens_getContrastWeight_10(System.IntPtr)
extern "C"  float MergeMertens_photo_MergeMertens_getContrastWeight_10_m2504245908 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.MergeMertens::photo_MergeMertens_getExposureWeight_10(System.IntPtr)
extern "C"  float MergeMertens_photo_MergeMertens_getExposureWeight_10_m1058385305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.MergeMertens::photo_MergeMertens_getSaturationWeight_10(System.IntPtr)
extern "C"  float MergeMertens_photo_MergeMertens_getSaturationWeight_10_m2756554276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::photo_MergeMertens_process_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void MergeMertens_photo_MergeMertens_process_10_m808188535 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___times_nativeObj, IntPtr_t ___response_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::photo_MergeMertens_process_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void MergeMertens_photo_MergeMertens_process_11_m459251642 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::photo_MergeMertens_setContrastWeight_10(System.IntPtr,System.Single)
extern "C"  void MergeMertens_photo_MergeMertens_setContrastWeight_10_m1598186961 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, float ___contrast_weiht, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::photo_MergeMertens_setExposureWeight_10(System.IntPtr,System.Single)
extern "C"  void MergeMertens_photo_MergeMertens_setExposureWeight_10_m858137622 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, float ___exposure_weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::photo_MergeMertens_setSaturationWeight_10(System.IntPtr,System.Single)
extern "C"  void MergeMertens_photo_MergeMertens_setSaturationWeight_10_m1604542305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, float ___saturation_weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeMertens::photo_MergeMertens_delete(System.IntPtr)
extern "C"  void MergeMertens_photo_MergeMertens_delete_m1086014083 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
