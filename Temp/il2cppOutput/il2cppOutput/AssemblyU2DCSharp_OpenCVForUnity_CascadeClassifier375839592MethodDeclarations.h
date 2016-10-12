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

// OpenCVForUnity.CascadeClassifier
struct CascadeClassifier_t375839592;
// System.String
struct String_t;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3218387278;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t1517897931;
// OpenCVForUnity.MatOfDouble
struct MatOfDouble_t1782331771;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfRect3218387278.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt1517897931.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDouble1782331771.h"

// System.Void OpenCVForUnity.CascadeClassifier::.ctor(System.IntPtr)
extern "C"  void CascadeClassifier__ctor_m3102421609 (CascadeClassifier_t375839592 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::.ctor(System.String)
extern "C"  void CascadeClassifier__ctor_m3558190359 (CascadeClassifier_t375839592 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::.ctor()
extern "C"  void CascadeClassifier__ctor_m692433867 (CascadeClassifier_t375839592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::Dispose(System.Boolean)
extern "C"  void CascadeClassifier_Dispose_m3649351871 (CascadeClassifier_t375839592 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.CascadeClassifier::getOriginalWindowSize()
extern "C"  Size_t1177469876 * CascadeClassifier_getOriginalWindowSize_m868219988 (CascadeClassifier_t375839592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::convert(System.String,System.String)
extern "C"  bool CascadeClassifier_convert_m1991383542 (Il2CppObject * __this /* static, unused */, String_t* ___oldcascade, String_t* ___newcascade, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::empty()
extern "C"  bool CascadeClassifier_empty_m1905398498 (CascadeClassifier_t375839592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::isOldFormatCascade()
extern "C"  bool CascadeClassifier_isOldFormatCascade_m3162289869 (CascadeClassifier_t375839592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::load(System.String)
extern "C"  bool CascadeClassifier_load_m3645120463 (CascadeClassifier_t375839592 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.CascadeClassifier::getFeatureType()
extern "C"  int32_t CascadeClassifier_getFeatureType_m4072214561 (CascadeClassifier_t375839592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,System.Double,System.Int32,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Size)
extern "C"  void CascadeClassifier_detectMultiScale_m1228971142 (CascadeClassifier_t375839592 * __this, Mat_t1174969555 * ___image, MatOfRect_t3218387278 * ___objects, double ___scaleFactor, int32_t ___minNeighbors, int32_t ___flags, Size_t1177469876 * ___minSize, Size_t1177469876 * ___maxSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect)
extern "C"  void CascadeClassifier_detectMultiScale_m2718812254 (CascadeClassifier_t375839592 * __this, Mat_t1174969555 * ___image, MatOfRect_t3218387278 * ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt,System.Double,System.Int32,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Size)
extern "C"  void CascadeClassifier_detectMultiScale2_m2876178203 (CascadeClassifier_t375839592 * __this, Mat_t1174969555 * ___image, MatOfRect_t3218387278 * ___objects, MatOfInt_t1517897931 * ___numDetections, double ___scaleFactor, int32_t ___minNeighbors, int32_t ___flags, Size_t1177469876 * ___minSize, Size_t1177469876 * ___maxSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt)
extern "C"  void CascadeClassifier_detectMultiScale2_m1399135475 (CascadeClassifier_t375839592 * __this, Mat_t1174969555 * ___image, MatOfRect_t3218387278 * ___objects, MatOfInt_t1517897931 * ___numDetections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale3(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfDouble,System.Double,System.Int32,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Boolean)
extern "C"  void CascadeClassifier_detectMultiScale3_m1043546500 (CascadeClassifier_t375839592 * __this, Mat_t1174969555 * ___image, MatOfRect_t3218387278 * ___objects, MatOfInt_t1517897931 * ___rejectLevels, MatOfDouble_t1782331771 * ___levelWeights, double ___scaleFactor, int32_t ___minNeighbors, int32_t ___flags, Size_t1177469876 * ___minSize, Size_t1177469876 * ___maxSize, bool ___outputRejectLevels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale3(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfDouble)
extern "C"  void CascadeClassifier_detectMultiScale3_m1441263281 (CascadeClassifier_t375839592 * __this, Mat_t1174969555 * ___image, MatOfRect_t3218387278 * ___objects, MatOfInt_t1517897931 * ___rejectLevels, MatOfDouble_t1782331771 * ___levelWeights, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_CascadeClassifier_10(System.String)
extern "C"  IntPtr_t CascadeClassifier_objdetect_CascadeClassifier_CascadeClassifier_10_m2458188124 (Il2CppObject * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_CascadeClassifier_11()
extern "C"  IntPtr_t CascadeClassifier_objdetect_CascadeClassifier_CascadeClassifier_11_m225894183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_getOriginalWindowSize_10(System.IntPtr,System.Double[])
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_getOriginalWindowSize_10_m3064082368 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_convert_10(System.String,System.String)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_convert_10_m2979183511 (Il2CppObject * __this /* static, unused */, String_t* ___oldcascade, String_t* ___newcascade, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_empty_10(System.IntPtr)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_empty_10_m1699780167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_isOldFormatCascade_10(System.IntPtr)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_isOldFormatCascade_10_m1395815408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_load_10(System.IntPtr,System.String)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_load_10_m2993657650 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_getFeatureType_10(System.IntPtr)
extern "C"  int32_t CascadeClassifier_objdetect_CascadeClassifier_getFeatureType_10_m1823304132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale_10_m3200681432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___objects_mat_nativeObj, double ___scaleFactor, int32_t ___minNeighbors, int32_t ___flags, double ___minSize_width, double ___minSize_height, double ___maxSize_width, double ___maxSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale_11_m2924703851 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___objects_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale2_10_m4066915970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___objects_mat_nativeObj, IntPtr_t ___numDetections_mat_nativeObj, double ___scaleFactor, int32_t ___minNeighbors, int32_t ___flags, double ___minSize_width, double ___minSize_height, double ___maxSize_width, double ___maxSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale2_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale2_11_m1210926805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___objects_mat_nativeObj, IntPtr_t ___numDetections_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale3_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale3_10_m2130158348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___objects_mat_nativeObj, IntPtr_t ___rejectLevels_mat_nativeObj, IntPtr_t ___levelWeights_mat_nativeObj, double ___scaleFactor, int32_t ___minNeighbors, int32_t ___flags, double ___minSize_width, double ___minSize_height, double ___maxSize_width, double ___maxSize_height, bool ___outputRejectLevels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale3_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale3_11_m3775333988 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___objects_mat_nativeObj, IntPtr_t ___rejectLevels_mat_nativeObj, IntPtr_t ___levelWeights_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_delete(System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_delete_m1047099425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
