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

// OpenCVForUnity.KalmanFilter
struct KalmanFilter_t3062286351;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.KalmanFilter::.ctor(System.IntPtr)
extern "C"  void KalmanFilter__ctor_m3220547242 (KalmanFilter_t3062286351 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void KalmanFilter__ctor_m2033776348 (KalmanFilter_t3062286351 * __this, int32_t ___dynamParams, int32_t ___measureParams, int32_t ___controlParams, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::.ctor(System.Int32,System.Int32)
extern "C"  void KalmanFilter__ctor_m1837106300 (KalmanFilter_t3062286351 * __this, int32_t ___dynamParams, int32_t ___measureParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::.ctor()
extern "C"  void KalmanFilter__ctor_m1248750058 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::Dispose(System.Boolean)
extern "C"  void KalmanFilter_Dispose_m856901854 (KalmanFilter_t3062286351 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::correct(OpenCVForUnity.Mat)
extern "C"  Mat_t1174969555 * KalmanFilter_correct_m2454396761 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___measurement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::predict(OpenCVForUnity.Mat)
extern "C"  Mat_t1174969555 * KalmanFilter_predict_m724672072 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___control, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::predict()
extern "C"  Mat_t1174969555 * KalmanFilter_predict_m2643450595 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_statePre()
extern "C"  Mat_t1174969555 * KalmanFilter_get_statePre_m1378795443 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_statePre(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_statePre_m1759066798 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___statePre, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_statePost()
extern "C"  Mat_t1174969555 * KalmanFilter_get_statePost_m4085672626 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_statePost(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_statePost_m2940641153 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___statePost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_transitionMatrix()
extern "C"  Mat_t1174969555 * KalmanFilter_get_transitionMatrix_m3691455447 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_transitionMatrix(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_transitionMatrix_m3916720082 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___transitionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_controlMatrix()
extern "C"  Mat_t1174969555 * KalmanFilter_get_controlMatrix_m1254191647 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_controlMatrix(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_controlMatrix_m4166901934 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___controlMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_measurementMatrix()
extern "C"  Mat_t1174969555 * KalmanFilter_get_measurementMatrix_m4193552766 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_measurementMatrix(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_measurementMatrix_m580016461 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___measurementMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_processNoiseCov()
extern "C"  Mat_t1174969555 * KalmanFilter_get_processNoiseCov_m2426957312 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_processNoiseCov(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_processNoiseCov_m2256806863 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___processNoiseCov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_measurementNoiseCov()
extern "C"  Mat_t1174969555 * KalmanFilter_get_measurementNoiseCov_m328998669 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_measurementNoiseCov(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_measurementNoiseCov_m2120787612 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___measurementNoiseCov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_errorCovPre()
extern "C"  Mat_t1174969555 * KalmanFilter_get_errorCovPre_m1931061954 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_errorCovPre(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_errorCovPre_m1879234833 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___errorCovPre, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_gain()
extern "C"  Mat_t1174969555 * KalmanFilter_get_gain_m8749984 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_gain(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_gain_m2849175643 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.KalmanFilter::get_errorCovPost()
extern "C"  Mat_t1174969555 * KalmanFilter_get_errorCovPost_m4026065283 (KalmanFilter_t3062286351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::set_errorCovPost(OpenCVForUnity.Mat)
extern "C"  void KalmanFilter_set_errorCovPost_m2370882942 (KalmanFilter_t3062286351 * __this, Mat_t1174969555 * ___errorCovPost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_KalmanFilter_10(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_KalmanFilter_10_m3247942942 (Il2CppObject * __this /* static, unused */, int32_t ___dynamParams, int32_t ___measureParams, int32_t ___controlParams, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_KalmanFilter_11(System.Int32,System.Int32)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_KalmanFilter_11_m4047376541 (Il2CppObject * __this /* static, unused */, int32_t ___dynamParams, int32_t ___measureParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_KalmanFilter_12()
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_KalmanFilter_12_m956065386 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_correct_10(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_correct_10_m537091986 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___measurement_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_predict_10(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_predict_10_m3111120897 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___control_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_predict_11(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_predict_11_m1089738130 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1statePre_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1statePre_10_m3694643892 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1statePre_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1statePre_10_m3492549283 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___statePre_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1statePost_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1statePost_10_m2691528249 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1statePost_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1statePost_10_m1981059782 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___statePost_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1transitionMatrix_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1transitionMatrix_10_m1956874712 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1transitionMatrix_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1transitionMatrix_10_m238129607 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___transitionMatrix_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1controlMatrix_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1controlMatrix_10_m2283127334 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1controlMatrix_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1controlMatrix_10_m1928299635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___controlMatrix_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1measurementMatrix_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1measurementMatrix_10_m2907224581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1measurementMatrix_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1measurementMatrix_10_m1086329490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___measurementMatrix_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1processNoiseCov_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1processNoiseCov_10_m1086030663 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1processNoiseCov_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1processNoiseCov_10_m759260180 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___processNoiseCov_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1measurementNoiseCov_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1measurementNoiseCov_10_m2745981140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1measurementNoiseCov_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1measurementNoiseCov_10_m2868586337 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___measurementNoiseCov_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1errorCovPre_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1errorCovPre_10_m3420249481 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1errorCovPre_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1errorCovPre_10_m1335769686 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___errorCovPre_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1gain_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1gain_10_m70247201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1gain_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1gain_10_m1485455568 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___gain_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KalmanFilter::video_KalmanFilter_get_1errorCovPost_10(System.IntPtr)
extern "C"  IntPtr_t KalmanFilter_video_KalmanFilter_get_1errorCovPost_10_m2775236100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_set_1errorCovPost_10(System.IntPtr,System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_set_1errorCovPost_10_m3840369011 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___errorCovPost_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KalmanFilter::video_KalmanFilter_delete(System.IntPtr)
extern "C"  void KalmanFilter_video_KalmanFilter_delete_m3983115618 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
