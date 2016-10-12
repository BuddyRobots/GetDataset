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

// OpenCVForUnity.SuperpixelSEEDS
struct SuperpixelSEEDS_t1348178538;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.SuperpixelSEEDS::.ctor(System.IntPtr)
extern "C"  void SuperpixelSEEDS__ctor_m2487249067 (SuperpixelSEEDS_t1348178538 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::Dispose(System.Boolean)
extern "C"  void SuperpixelSEEDS_Dispose_m3669605181 (SuperpixelSEEDS_t1348178538 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelSEEDS::getNumberOfSuperpixels()
extern "C"  int32_t SuperpixelSEEDS_getNumberOfSuperpixels_m2011461211 (SuperpixelSEEDS_t1348178538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::getLabelContourMask(OpenCVForUnity.Mat,System.Boolean)
extern "C"  void SuperpixelSEEDS_getLabelContourMask_m977823945 (SuperpixelSEEDS_t1348178538 * __this, Mat_t1174969555 * ___image, bool ___thick_line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::getLabelContourMask(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSEEDS_getLabelContourMask_m166820916 (SuperpixelSEEDS_t1348178538 * __this, Mat_t1174969555 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::getLabels(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSEEDS_getLabels_m2572627297 (SuperpixelSEEDS_t1348178538 * __this, Mat_t1174969555 * ___labels_out, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::iterate(OpenCVForUnity.Mat,System.Int32)
extern "C"  void SuperpixelSEEDS_iterate_m3481213617 (SuperpixelSEEDS_t1348178538 * __this, Mat_t1174969555 * ___img, int32_t ___num_iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::iterate(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSEEDS_iterate_m410683366 (SuperpixelSEEDS_t1348178538 * __this, Mat_t1174969555 * ___img, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels_10(System.IntPtr)
extern "C"  int32_t SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels_10_m2137910533 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getLabelContourMask_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getLabelContourMask_10_m1198656734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, bool ___thick_line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getLabelContourMask_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getLabelContourMask_11_m3885333598 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getLabels_10(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getLabels_10_m1380427756 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___labels_out_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_iterate_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_iterate_10_m1342318086 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, int32_t ___num_iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_iterate_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_iterate_11_m2697683472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_delete(System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_delete_m4124928924 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
