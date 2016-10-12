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

// OpenCVForUnity.Ximgproc
struct Ximgproc_t1841135060;
// OpenCVForUnity.AdaptiveManifoldFilter
struct AdaptiveManifoldFilter_t4126467633;
// OpenCVForUnity.DTFilter
struct DTFilter_t3067118523;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.DisparityWLSFilter
struct DisparityWLSFilter_t4139599054;
// OpenCVForUnity.EdgeAwareInterpolator
struct EdgeAwareInterpolator_t182099323;
// OpenCVForUnity.FastGlobalSmootherFilter
struct FastGlobalSmootherFilter_t2420426469;
// OpenCVForUnity.GraphSegmentation
struct GraphSegmentation_t71656323;
// OpenCVForUnity.GuidedFilter
struct GuidedFilter_t3034599987;
// OpenCVForUnity.RFFeatureGetter
struct RFFeatureGetter_t2434632032;
// OpenCVForUnity.StructuredEdgeDetection
struct StructuredEdgeDetection_t4154393322;
// System.String
struct String_t;
// OpenCVForUnity.SuperpixelLSC
struct SuperpixelLSC_t2712494916;
// OpenCVForUnity.SuperpixelSEEDS
struct SuperpixelSEEDS_t1348178538;
// OpenCVForUnity.SuperpixelSLIC
struct SuperpixelSLIC_t1596131153;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_RFFeatureGetter2434632032.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Ximgproc::.ctor()
extern "C"  void Ximgproc__ctor_m2178681669 (Ximgproc_t1841135060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AdaptiveManifoldFilter OpenCVForUnity.Ximgproc::createAMFilter(System.Double,System.Double,System.Boolean)
extern "C"  AdaptiveManifoldFilter_t4126467633 * Ximgproc_createAMFilter_m3996819598 (Il2CppObject * __this /* static, unused */, double ___sigma_s, double ___sigma_r, bool ___adjust_outliers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AdaptiveManifoldFilter OpenCVForUnity.Ximgproc::createAMFilter(System.Double,System.Double)
extern "C"  AdaptiveManifoldFilter_t4126467633 * Ximgproc_createAMFilter_m2439074575 (Il2CppObject * __this /* static, unused */, double ___sigma_s, double ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DTFilter OpenCVForUnity.Ximgproc::createDTFilter(OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  DTFilter_t3067118523 * Ximgproc_createDTFilter_m913013114 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, double ___sigmaSpatial, double ___sigmaColor, int32_t ___mode, int32_t ___numIters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DTFilter OpenCVForUnity.Ximgproc::createDTFilter(OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  DTFilter_t3067118523 * Ximgproc_createDTFilter_m927568026 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, double ___sigmaSpatial, double ___sigmaColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DisparityWLSFilter OpenCVForUnity.Ximgproc::createDisparityWLSFilterGeneric(System.Boolean)
extern "C"  DisparityWLSFilter_t4139599054 * Ximgproc_createDisparityWLSFilterGeneric_m4180918157 (Il2CppObject * __this /* static, unused */, bool ___use_confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.EdgeAwareInterpolator OpenCVForUnity.Ximgproc::createEdgeAwareInterpolator()
extern "C"  EdgeAwareInterpolator_t182099323 * Ximgproc_createEdgeAwareInterpolator_m3340773673 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.FastGlobalSmootherFilter OpenCVForUnity.Ximgproc::createFastGlobalSmootherFilter(OpenCVForUnity.Mat,System.Double,System.Double,System.Double,System.Int32)
extern "C"  FastGlobalSmootherFilter_t2420426469 * Ximgproc_createFastGlobalSmootherFilter_m3923951661 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, double ___lambda, double ___sigma_color, double ___lambda_attenuation, int32_t ___num_iter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.FastGlobalSmootherFilter OpenCVForUnity.Ximgproc::createFastGlobalSmootherFilter(OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  FastGlobalSmootherFilter_t2420426469 * Ximgproc_createFastGlobalSmootherFilter_m908418286 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, double ___lambda, double ___sigma_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.GraphSegmentation OpenCVForUnity.Ximgproc::createGraphSegmentation(System.Double,System.Single,System.Int32)
extern "C"  GraphSegmentation_t71656323 * Ximgproc_createGraphSegmentation_m580803513 (Il2CppObject * __this /* static, unused */, double ___sigma, float ___k, int32_t ___min_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.GraphSegmentation OpenCVForUnity.Ximgproc::createGraphSegmentation()
extern "C"  GraphSegmentation_t71656323 * Ximgproc_createGraphSegmentation_m2248687401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.GuidedFilter OpenCVForUnity.Ximgproc::createGuidedFilter(OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  GuidedFilter_t3034599987 * Ximgproc_createGuidedFilter_m394836033 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, int32_t ___radius, double ___eps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RFFeatureGetter OpenCVForUnity.Ximgproc::createRFFeatureGetter()
extern "C"  RFFeatureGetter_t2434632032 * Ximgproc_createRFFeatureGetter_m3652265481 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StructuredEdgeDetection OpenCVForUnity.Ximgproc::createStructuredEdgeDetection(System.String,OpenCVForUnity.RFFeatureGetter)
extern "C"  StructuredEdgeDetection_t4154393322 * Ximgproc_createStructuredEdgeDetection_m924981317 (Il2CppObject * __this /* static, unused */, String_t* ___model, RFFeatureGetter_t2434632032 * ___howToGetFeatures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StructuredEdgeDetection OpenCVForUnity.Ximgproc::createStructuredEdgeDetection(System.String)
extern "C"  StructuredEdgeDetection_t4154393322 * Ximgproc_createStructuredEdgeDetection_m3197255641 (Il2CppObject * __this /* static, unused */, String_t* ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelLSC OpenCVForUnity.Ximgproc::createSuperpixelLSC(OpenCVForUnity.Mat,System.Int32,System.Single)
extern "C"  SuperpixelLSC_t2712494916 * Ximgproc_createSuperpixelLSC_m2020102926 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, int32_t ___region_size, float ___ratio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelLSC OpenCVForUnity.Ximgproc::createSuperpixelLSC(OpenCVForUnity.Mat)
extern "C"  SuperpixelLSC_t2712494916 * Ximgproc_createSuperpixelLSC_m1458942894 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSEEDS OpenCVForUnity.Ximgproc::createSuperpixelSEEDS(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  SuperpixelSEEDS_t1348178538 * Ximgproc_createSuperpixelSEEDS_m4174449923 (Il2CppObject * __this /* static, unused */, int32_t ___image_width, int32_t ___image_height, int32_t ___image_channels, int32_t ___num_superpixels, int32_t ___num_levels, int32_t ___prior, int32_t ___histogram_bins, bool ___double_step, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSEEDS OpenCVForUnity.Ximgproc::createSuperpixelSEEDS(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  SuperpixelSEEDS_t1348178538 * Ximgproc_createSuperpixelSEEDS_m3745051226 (Il2CppObject * __this /* static, unused */, int32_t ___image_width, int32_t ___image_height, int32_t ___image_channels, int32_t ___num_superpixels, int32_t ___num_levels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSLIC OpenCVForUnity.Ximgproc::createSuperpixelSLIC(OpenCVForUnity.Mat,System.Int32,System.Int32,System.Single)
extern "C"  SuperpixelSLIC_t1596131153 * Ximgproc_createSuperpixelSLIC_m784602643 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, int32_t ___algorithm, int32_t ___region_size, float ___ruler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSLIC OpenCVForUnity.Ximgproc::createSuperpixelSLIC(OpenCVForUnity.Mat)
extern "C"  SuperpixelSLIC_t1596131153 * Ximgproc_createSuperpixelSLIC_m2495939534 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::amFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Boolean)
extern "C"  void Ximgproc_amFilter_m2092823549 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___joint, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sigma_s, double ___sigma_r, bool ___adjust_outliers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::amFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_amFilter_m1812295552 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___joint, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sigma_s, double ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::covarianceEstimation(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Ximgproc_covarianceEstimation_m2836141535 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___windowRows, int32_t ___windowCols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::dtFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_dtFilter_m2241270340 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sigmaSpatial, double ___sigmaColor, int32_t ___mode, int32_t ___numIters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::dtFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_dtFilter_m586519012 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sigmaSpatial, double ___sigmaColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::fastGlobalSmootherFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_fastGlobalSmootherFilter_m4253347757 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___lambda, double ___sigma_color, double ___lambda_attenuation, int32_t ___num_iter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::fastGlobalSmootherFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_fastGlobalSmootherFilter_m1612111214 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___lambda, double ___sigma_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::guidedFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Int32)
extern "C"  void Ximgproc_guidedFilter_m1868445672 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___radius, double ___eps, int32_t ___dDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::guidedFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  void Ximgproc_guidedFilter_m3789634895 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___guide, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___radius, double ___eps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::jointBilateralFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_jointBilateralFilter_m612430314 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___joint, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::jointBilateralFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double)
extern "C"  void Ximgproc_jointBilateralFilter_m328099853 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___joint, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::l0Smooth(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_l0Smooth_m2459654701 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___lambda, double ___kappa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::l0Smooth(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ximgproc_l0Smooth_m44551093 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::niBlackThreshold(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32,System.Int32,System.Double)
extern "C"  void Ximgproc_niBlackThreshold_m1555156152 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____src, Mat_t1174969555 * ____dst, double ___maxValue, int32_t ___type, int32_t ___blockSize, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::rollingGuidanceFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_rollingGuidanceFilter_m2410250785 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___numOfIter, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::rollingGuidanceFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_rollingGuidanceFilter_m1481427574 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___numOfIter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::rollingGuidanceFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ximgproc_rollingGuidanceFilter_m402706446 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createAMFilter_10(System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createAMFilter_10_m1218343829 (Il2CppObject * __this /* static, unused */, double ___sigma_s, double ___sigma_r, bool ___adjust_outliers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createAMFilter_11(System.Double,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createAMFilter_11_m1757765255 (Il2CppObject * __this /* static, unused */, double ___sigma_s, double ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createDTFilter_10(System.IntPtr,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createDTFilter_10_m3801803450 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, double ___sigmaSpatial, double ___sigmaColor, int32_t ___mode, int32_t ___numIters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createDTFilter_11(System.IntPtr,System.Double,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createDTFilter_11_m2637200185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, double ___sigmaSpatial, double ___sigmaColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createDisparityWLSFilterGeneric_10(System.Boolean)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createDisparityWLSFilterGeneric_10_m2414661343 (Il2CppObject * __this /* static, unused */, bool ___use_confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createEdgeAwareInterpolator_10()
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createEdgeAwareInterpolator_10_m1790013340 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createFastGlobalSmootherFilter_10(System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createFastGlobalSmootherFilter_10_m680836567 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, double ___lambda, double ___sigma_color, double ___lambda_attenuation, int32_t ___num_iter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createFastGlobalSmootherFilter_11(System.IntPtr,System.Double,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createFastGlobalSmootherFilter_11_m2232785635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, double ___lambda, double ___sigma_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createGraphSegmentation_10(System.Double,System.Single,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createGraphSegmentation_10_m1188081316 (Il2CppObject * __this /* static, unused */, double ___sigma, float ___k, int32_t ___min_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createGraphSegmentation_11()
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createGraphSegmentation_11_m297802965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createGuidedFilter_10(System.IntPtr,System.Int32,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createGuidedFilter_10_m3729724921 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, int32_t ___radius, double ___eps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createRFFeatureGetter_10()
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createRFFeatureGetter_10_m2822308503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createStructuredEdgeDetection_10(System.String,System.IntPtr)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createStructuredEdgeDetection_10_m1853996707 (Il2CppObject * __this /* static, unused */, String_t* ___model, IntPtr_t ___howToGetFeatures_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createStructuredEdgeDetection_11(System.String)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createStructuredEdgeDetection_11_m2397128628 (Il2CppObject * __this /* static, unused */, String_t* ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelLSC_10(System.IntPtr,System.Int32,System.Single)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelLSC_10_m2033315867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, int32_t ___region_size, float ___ratio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelLSC_11(System.IntPtr)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelLSC_11_m3546292384 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSEEDS_10(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSEEDS_10_m2306701951 (Il2CppObject * __this /* static, unused */, int32_t ___image_width, int32_t ___image_height, int32_t ___image_channels, int32_t ___num_superpixels, int32_t ___num_levels, int32_t ___prior, int32_t ___histogram_bins, bool ___double_step, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSEEDS_11(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSEEDS_11_m2988356895 (Il2CppObject * __this /* static, unused */, int32_t ___image_width, int32_t ___image_height, int32_t ___image_channels, int32_t ___num_superpixels, int32_t ___num_levels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSLIC_10(System.IntPtr,System.Int32,System.Int32,System.Single)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSLIC_10_m3383540605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, int32_t ___algorithm, int32_t ___region_size, float ___ruler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSLIC_11(System.IntPtr)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSLIC_11_m4291868951 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_amFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Boolean)
extern "C"  void Ximgproc_ximgproc_Ximgproc_amFilter_10_m1335203058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sigma_s, double ___sigma_r, bool ___adjust_outliers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_amFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_amFilter_11_m4089141258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sigma_s, double ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_covarianceEstimation_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_covarianceEstimation_10_m2634300425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___windowRows, int32_t ___windowCols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_dtFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_dtFilter_10_m3098324015 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sigmaSpatial, double ___sigmaColor, int32_t ___mode, int32_t ___numIters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_dtFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_dtFilter_11_m2736844910 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sigmaSpatial, double ___sigmaColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_fastGlobalSmootherFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_fastGlobalSmootherFilter_10_m2390094882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___lambda, double ___sigma_color, double ___lambda_attenuation, int32_t ___num_iter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_fastGlobalSmootherFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_fastGlobalSmootherFilter_11_m2107603704 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___lambda, double ___sigma_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_guidedFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_guidedFilter_10_m2014309651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___radius, double ___eps, int32_t ___dDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_guidedFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_guidedFilter_11_m3406115205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___radius, double ___eps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_jointBilateralFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_jointBilateralFilter_10_m1685736661 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_jointBilateralFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_jointBilateralFilter_11_m166795459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_l0Smooth_10(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_l0Smooth_10_m4174506923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___lambda, double ___kappa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_l0Smooth_11(System.IntPtr,System.IntPtr)
extern "C"  void Ximgproc_ximgproc_Ximgproc_l0Smooth_11_m58954194 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_niBlackThreshold_10(System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_niBlackThreshold_10_m4158762560 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj, IntPtr_t ____dst_nativeObj, double ___maxValue, int32_t ___type, int32_t ___blockSize, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_rollingGuidanceFilter_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_rollingGuidanceFilter_10_m3254818549 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___numOfIter, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_rollingGuidanceFilter_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_rollingGuidanceFilter_11_m3111111553 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___numOfIter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_rollingGuidanceFilter_12(System.IntPtr,System.IntPtr)
extern "C"  void Ximgproc_ximgproc_Ximgproc_rollingGuidanceFilter_12_m3677799160 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
