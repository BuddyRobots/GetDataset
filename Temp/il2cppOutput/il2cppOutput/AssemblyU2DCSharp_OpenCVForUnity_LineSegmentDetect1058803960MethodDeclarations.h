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

// OpenCVForUnity.LineSegmentDetector
struct LineSegmentDetector_t1058803960;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.LineSegmentDetector::.ctor(System.IntPtr)
extern "C"  void LineSegmentDetector__ctor_m251690809 (LineSegmentDetector_t1058803960 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::Dispose(System.Boolean)
extern "C"  void LineSegmentDetector_Dispose_m1916432879 (LineSegmentDetector_t1058803960 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::compareSegments(OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t LineSegmentDetector_compareSegments_m781000047 (LineSegmentDetector_t1058803960 * __this, Size_t1177469876 * ___size, Mat_t1174969555 * ___lines1, Mat_t1174969555 * ___lines2, Mat_t1174969555 * ____image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::compareSegments(OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t LineSegmentDetector_compareSegments_m357081660 (LineSegmentDetector_t1058803960 * __this, Size_t1177469876 * ___size, Mat_t1174969555 * ___lines1, Mat_t1174969555 * ___lines2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::detect(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void LineSegmentDetector_detect_m4170206865 (LineSegmentDetector_t1058803960 * __this, Mat_t1174969555 * ____image, Mat_t1174969555 * ____lines, Mat_t1174969555 * ___width, Mat_t1174969555 * ___prec, Mat_t1174969555 * ___nfa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::detect(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void LineSegmentDetector_detect_m1783597498 (LineSegmentDetector_t1058803960 * __this, Mat_t1174969555 * ____image, Mat_t1174969555 * ____lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::drawSegments(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void LineSegmentDetector_drawSegments_m602641977 (LineSegmentDetector_t1058803960 * __this, Mat_t1174969555 * ____image, Mat_t1174969555 * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_compareSegments_10(System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t LineSegmentDetector_imgproc_LineSegmentDetector_compareSegments_10_m2358233446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, double ___size_width, double ___size_height, IntPtr_t ___lines1_nativeObj, IntPtr_t ___lines2_nativeObj, IntPtr_t ____image_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_compareSegments_11(System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr)
extern "C"  int32_t LineSegmentDetector_imgproc_LineSegmentDetector_compareSegments_11_m1399515831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, double ___size_width, double ___size_height, IntPtr_t ___lines1_nativeObj, IntPtr_t ___lines2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_detect_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_detect_10_m3169689958 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ____image_nativeObj, IntPtr_t ____lines_nativeObj, IntPtr_t ___width_nativeObj, IntPtr_t ___prec_nativeObj, IntPtr_t ___nfa_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_detect_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_detect_11_m3694976667 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ____image_nativeObj, IntPtr_t ____lines_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_drawSegments_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_drawSegments_10_m3076803549 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ____image_nativeObj, IntPtr_t ___lines_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_delete(System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_delete_m4122251424 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
