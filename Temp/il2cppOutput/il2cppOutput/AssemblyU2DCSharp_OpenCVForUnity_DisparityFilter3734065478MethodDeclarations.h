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

// OpenCVForUnity.DisparityFilter
struct DisparityFilter_t3734065478;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.Rect
struct Rect_t1177435543;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect1177435543.h"

// System.Void OpenCVForUnity.DisparityFilter::.ctor(System.IntPtr)
extern "C"  void DisparityFilter__ctor_m4011022983 (DisparityFilter_t3734065478 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::Dispose(System.Boolean)
extern "C"  void DisparityFilter_Dispose_m614018017 (DisparityFilter_t3734065478 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::filter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.Mat)
extern "C"  void DisparityFilter_filter_m2147014449 (DisparityFilter_t3734065478 * __this, Mat_t1174969555 * ___disparity_map_left, Mat_t1174969555 * ___left_view, Mat_t1174969555 * ___filtered_disparity_map, Mat_t1174969555 * ___disparity_map_right, Rect_t1177435543 * ___ROI, Mat_t1174969555 * ___right_view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::filter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void DisparityFilter_filter_m4208785428 (DisparityFilter_t3734065478 * __this, Mat_t1174969555 * ___disparity_map_left, Mat_t1174969555 * ___left_view, Mat_t1174969555 * ___filtered_disparity_map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::ximgproc_DisparityFilter_filter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr)
extern "C"  void DisparityFilter_ximgproc_DisparityFilter_filter_10_m1754504775 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___disparity_map_left_nativeObj, IntPtr_t ___left_view_nativeObj, IntPtr_t ___filtered_disparity_map_nativeObj, IntPtr_t ___disparity_map_right_nativeObj, int32_t ___ROI_x, int32_t ___ROI_y, int32_t ___ROI_width, int32_t ___ROI_height, IntPtr_t ___right_view_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::ximgproc_DisparityFilter_filter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DisparityFilter_ximgproc_DisparityFilter_filter_11_m199106826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___disparity_map_left_nativeObj, IntPtr_t ___left_view_nativeObj, IntPtr_t ___filtered_disparity_map_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::ximgproc_DisparityFilter_delete(System.IntPtr)
extern "C"  void DisparityFilter_ximgproc_DisparityFilter_delete_m2071098452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
