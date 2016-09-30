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

// OpenCVForUnity.Optflow
struct Optflow_t1589978580;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.String
struct String_t;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3218387278;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfRect3218387278.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Optflow::.ctor()
extern "C"  void Optflow__ctor_m2399742751 (Optflow_t1589978580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Optflow::readOpticalFlow(System.String)
extern "C"  Mat_t1174969555 * Optflow_readOpticalFlow_m3735565271 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Optflow::writeOpticalFlow(System.String,OpenCVForUnity.Mat)
extern "C"  bool Optflow_writeOpticalFlow_m3774811881 (Il2CppObject * __this /* static, unused */, String_t* ___path, Mat_t1174969555 * ___flow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Optflow::calcGlobalOrientation(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  double Optflow_calcGlobalOrientation_m3953875951 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___orientation, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___mhi, double ___timestamp, double ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcMotionGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32)
extern "C"  void Optflow_calcMotionGradient_m1734992346 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mhi, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___orientation, double ___delta1, double ___delta2, int32_t ___apertureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcMotionGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Optflow_calcMotionGradient_m1127109149 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mhi, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___orientation, double ___delta1, double ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::segmentMotion(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,System.Double,System.Double)
extern "C"  void Optflow_segmentMotion_m2682989256 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mhi, Mat_t1174969555 * ___segmask, MatOfRect_t3218387278 * ___boundingRects, double ___timestamp, double ___segThresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::updateMotionHistory(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Optflow_updateMotionHistory_m4130759756 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___silhouette, Mat_t1174969555 * ___mhi, double ___timestamp, double ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSF(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double)
extern "C"  void Optflow_calcOpticalFlowSF_m423771241 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___from, Mat_t1174969555 * ___to, Mat_t1174969555 * ___flow, int32_t ___layers, int32_t ___averaging_block_size, int32_t ___max_flow, double ___sigma_dist, double ___sigma_color, int32_t ___postprocess_window, double ___sigma_dist_fix, double ___sigma_color_fix, double ___occ_thr, int32_t ___upscale_averaging_radius, double ___upscale_sigma_dist, double ___upscale_sigma_color, double ___speed_up_thr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSF(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Optflow_calcOpticalFlowSF_m2945785873 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___from, Mat_t1174969555 * ___to, Mat_t1174969555 * ___flow, int32_t ___layers, int32_t ___averaging_block_size, int32_t ___max_flow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSparseToDense(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Single,System.Boolean,System.Single,System.Single)
extern "C"  void Optflow_calcOpticalFlowSparseToDense_m174314917 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___from, Mat_t1174969555 * ___to, Mat_t1174969555 * ___flow, int32_t ___grid_step, int32_t ___k, float ___sigma, bool ___use_post_proc, float ___fgs_lambda, float ___fgs_sigma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSparseToDense(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Optflow_calcOpticalFlowSparseToDense_m3254098141 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___from, Mat_t1174969555 * ___to, Mat_t1174969555 * ___flow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Optflow::optflow_Optflow_readOpticalFlow_10(System.String)
extern "C"  IntPtr_t Optflow_optflow_Optflow_readOpticalFlow_10_m3682454686 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Optflow::optflow_Optflow_writeOpticalFlow_10(System.String,System.IntPtr)
extern "C"  bool Optflow_optflow_Optflow_writeOpticalFlow_10_m1814886028 (Il2CppObject * __this /* static, unused */, String_t* ___path, IntPtr_t ___flow_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Optflow::optflow_Optflow_calcGlobalOrientation_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  double Optflow_optflow_Optflow_calcGlobalOrientation_10_m19419166 (Il2CppObject * __this /* static, unused */, IntPtr_t ___orientation_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___mhi_nativeObj, double ___timestamp, double ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcMotionGradient_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Optflow_optflow_Optflow_calcMotionGradient_10_m1192861651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhi_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___orientation_nativeObj, double ___delta1, double ___delta2, int32_t ___apertureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcMotionGradient_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_calcMotionGradient_11_m932120675 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhi_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___orientation_nativeObj, double ___delta1, double ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_segmentMotion_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_segmentMotion_10_m1631236882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhi_nativeObj, IntPtr_t ___segmask_nativeObj, IntPtr_t ___boundingRects_mat_nativeObj, double ___timestamp, double ___segThresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_updateMotionHistory_10(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_updateMotionHistory_10_m2755523184 (Il2CppObject * __this /* static, unused */, IntPtr_t ___silhouette_nativeObj, IntPtr_t ___mhi_nativeObj, double ___timestamp, double ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSF_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSF_10_m1264513306 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj, IntPtr_t ___to_nativeObj, IntPtr_t ___flow_nativeObj, int32_t ___layers, int32_t ___averaging_block_size, int32_t ___max_flow, double ___sigma_dist, double ___sigma_color, int32_t ___postprocess_window, double ___sigma_dist_fix, double ___sigma_color_fix, double ___occ_thr, int32_t ___upscale_averaging_radius, double ___upscale_sigma_dist, double ___upscale_sigma_color, double ___speed_up_thr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSF_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSF_11_m2821044163 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj, IntPtr_t ___to_nativeObj, IntPtr_t ___flow_nativeObj, int32_t ___layers, int32_t ___averaging_block_size, int32_t ___max_flow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSparseToDense_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Single,System.Boolean,System.Single,System.Single)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSparseToDense_10_m1511037790 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj, IntPtr_t ___to_nativeObj, IntPtr_t ___flow_nativeObj, int32_t ___grid_step, int32_t ___k, float ___sigma, bool ___use_post_proc, float ___fgs_lambda, float ___fgs_sigma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSparseToDense_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSparseToDense_11_m2263622947 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj, IntPtr_t ___to_nativeObj, IntPtr_t ___flow_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
