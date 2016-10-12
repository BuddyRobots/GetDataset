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

// OpenCVForUnity.SuperpixelLSC
struct SuperpixelLSC_t2712494916;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.SuperpixelLSC::.ctor(System.IntPtr)
extern "C"  void SuperpixelLSC__ctor_m2638182085 (SuperpixelLSC_t2712494916 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::Dispose(System.Boolean)
extern "C"  void SuperpixelLSC_Dispose_m3284385507 (SuperpixelLSC_t2712494916 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelLSC::getNumberOfSuperpixels()
extern "C"  int32_t SuperpixelLSC_getNumberOfSuperpixels_m1400869621 (SuperpixelLSC_t2712494916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::enforceLabelConnectivity(System.Int32)
extern "C"  void SuperpixelLSC_enforceLabelConnectivity_m3249886319 (SuperpixelLSC_t2712494916 * __this, int32_t ___min_element_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::enforceLabelConnectivity()
extern "C"  void SuperpixelLSC_enforceLabelConnectivity_m1060559902 (SuperpixelLSC_t2712494916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::getLabelContourMask(OpenCVForUnity.Mat,System.Boolean)
extern "C"  void SuperpixelLSC_getLabelContourMask_m2416406627 (SuperpixelLSC_t2712494916 * __this, Mat_t1174969555 * ___image, bool ___thick_line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::getLabelContourMask(OpenCVForUnity.Mat)
extern "C"  void SuperpixelLSC_getLabelContourMask_m3938153434 (SuperpixelLSC_t2712494916 * __this, Mat_t1174969555 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::getLabels(OpenCVForUnity.Mat)
extern "C"  void SuperpixelLSC_getLabels_m316497031 (SuperpixelLSC_t2712494916 * __this, Mat_t1174969555 * ___labels_out, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::iterate(System.Int32)
extern "C"  void SuperpixelLSC_iterate_m677380344 (SuperpixelLSC_t2712494916 * __this, int32_t ___num_iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::iterate()
extern "C"  void SuperpixelLSC_iterate_m3647032871 (SuperpixelLSC_t2712494916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getNumberOfSuperpixels_10(System.IntPtr)
extern "C"  int32_t SuperpixelLSC_ximgproc_SuperpixelLSC_getNumberOfSuperpixels_10_m1262383377 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_enforceLabelConnectivity_10(System.IntPtr,System.Int32)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_enforceLabelConnectivity_10_m3295754881 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___min_element_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_enforceLabelConnectivity_11(System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_enforceLabelConnectivity_11_m1158861813 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getLabelContourMask_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_getLabelContourMask_10_m3929534698 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, bool ___thick_line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getLabelContourMask_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_getLabelContourMask_11_m255689170 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getLabels_10(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_getLabels_10_m3359518304 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___labels_out_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_iterate_10(System.IntPtr,System.Int32)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_iterate_10_m226826656 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___num_iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_iterate_11(System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_iterate_11_m2217201270 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_delete(System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_delete_m1291367440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
