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

// OpenCVForUnity.EM
struct EM_t1174894651;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3969392542;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3969392542.h"

// System.Void OpenCVForUnity.EM::.ctor(System.IntPtr)
extern "C"  void EM__ctor_m434058774 (EM_t1174894651 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::Dispose(System.Boolean)
extern "C"  void EM_Dispose_m1706848754 (EM_t1174894651 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.EM::getMeans()
extern "C"  Mat_t1174969555 * EM_getMeans_m426583132 (EM_t1174894651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.EM::getWeights()
extern "C"  Mat_t1174969555 * EM_getWeights_m3626657161 (EM_t1174894651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.EM OpenCVForUnity.EM::create()
extern "C"  EM_t1174894651 * EM_create_m2195595132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TermCriteria OpenCVForUnity.EM::getTermCriteria()
extern "C"  TermCriteria_t3969392542 * EM_getTermCriteria_m2392837248 (EM_t1174894651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] OpenCVForUnity.EM::predict2(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  DoubleU5BU5D_t1048280995* EM_predict2_m4225266280 (EM_t1174894651 * __this, Mat_t1174969555 * ___sample, Mat_t1174969555 * ___probs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainE(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainE_m148436916 (EM_t1174894651 * __this, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___means0, Mat_t1174969555 * ___covs0, Mat_t1174969555 * ___weights0, Mat_t1174969555 * ___logLikelihoods, Mat_t1174969555 * ___labels, Mat_t1174969555 * ___probs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainE(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainE_m3035783767 (EM_t1174894651 * __this, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___means0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainEM(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainEM_m1880552870 (EM_t1174894651 * __this, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___logLikelihoods, Mat_t1174969555 * ___labels, Mat_t1174969555 * ___probs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainEM(OpenCVForUnity.Mat)
extern "C"  bool EM_trainEM_m2988935429 (EM_t1174894651 * __this, Mat_t1174969555 * ___samples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainM(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainM_m2261861532 (EM_t1174894651 * __this, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___probs0, Mat_t1174969555 * ___logLikelihoods, Mat_t1174969555 * ___labels, Mat_t1174969555 * ___probs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainM(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainM_m1843521871 (EM_t1174894651 * __this, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___probs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::getClustersNumber()
extern "C"  int32_t EM_getClustersNumber_m4005334178 (EM_t1174894651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::getCovarianceMatrixType()
extern "C"  int32_t EM_getCovarianceMatrixType_m2524213976 (EM_t1174894651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::getCovs(System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void EM_getCovs_m502001330 (EM_t1174894651 * __this, List_1_t1971928524 * ___covs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::setClustersNumber(System.Int32)
extern "C"  void EM_setClustersNumber_m2010742641 (EM_t1174894651 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::setCovarianceMatrixType(System.Int32)
extern "C"  void EM_setCovarianceMatrixType_m4026854951 (EM_t1174894651 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::setTermCriteria(OpenCVForUnity.TermCriteria)
extern "C"  void EM_setTermCriteria_m643742585 (EM_t1174894651 * __this, TermCriteria_t3969392542 * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.EM::ml_EM_getMeans_10(System.IntPtr)
extern "C"  IntPtr_t EM_ml_EM_getMeans_10_m183580404 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.EM::ml_EM_getWeights_10(System.IntPtr)
extern "C"  IntPtr_t EM_ml_EM_getWeights_10_m2628535585 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.EM::ml_EM_create_10()
extern "C"  IntPtr_t EM_ml_EM_create_10_m3330501820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_getTermCriteria_10(System.IntPtr,System.Double[])
extern "C"  void EM_ml_EM_getTermCriteria_10_m3563585332 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_predict2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void EM_ml_EM_predict2_10_m1713497440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___sample_nativeObj, IntPtr_t ___probs_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainE_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainE_10_m3055247772 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___samples_nativeObj, IntPtr_t ___means0_nativeObj, IntPtr_t ___covs0_nativeObj, IntPtr_t ___weights0_nativeObj, IntPtr_t ___logLikelihoods_nativeObj, IntPtr_t ___labels_nativeObj, IntPtr_t ___probs_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainE_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainE_11_m2886849717 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___samples_nativeObj, IntPtr_t ___means0_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainEM_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainEM_10_m3328336149 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___samples_nativeObj, IntPtr_t ___logLikelihoods_nativeObj, IntPtr_t ___labels_nativeObj, IntPtr_t ___probs_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainEM_11(System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainEM_11_m1719360330 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___samples_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainM_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainM_10_m4111630088 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___samples_nativeObj, IntPtr_t ___probs0_nativeObj, IntPtr_t ___logLikelihoods_nativeObj, IntPtr_t ___labels_nativeObj, IntPtr_t ___probs_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainM_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainM_11_m1474496189 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___samples_nativeObj, IntPtr_t ___probs0_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::ml_EM_getClustersNumber_10(System.IntPtr)
extern "C"  int32_t EM_ml_EM_getClustersNumber_10_m3447292895 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::ml_EM_getCovarianceMatrixType_10(System.IntPtr)
extern "C"  int32_t EM_ml_EM_getCovarianceMatrixType_10_m364151637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_getCovs_10(System.IntPtr,System.IntPtr)
extern "C"  void EM_ml_EM_getCovs_10_m196306150 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___covs_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_setClustersNumber_10(System.IntPtr,System.Int32)
extern "C"  void EM_ml_EM_setClustersNumber_10_m2206725146 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_setCovarianceMatrixType_10(System.IntPtr,System.Int32)
extern "C"  void EM_ml_EM_setCovarianceMatrixType_10_m731196132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_setTermCriteria_10(System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void EM_ml_EM_setTermCriteria_10_m1773042306 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___val_type, int32_t ___val_maxCount, double ___val_epsilon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_delete(System.IntPtr)
extern "C"  void EM_ml_EM_delete_m1123668460 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
