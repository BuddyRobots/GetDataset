﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OpenCVForUnity.Ccalib
struct Ccalib_t2987229308;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Size
struct Size_t4100163289;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3040734659;
// OpenCVForUnity.MatOfPoint3f
struct MatOfPoint3f_t3946375844;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t3946375813;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3040734659.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint3f3946375844.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint2f3946375813.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Ccalib::.ctor()
extern "C"  void Ccalib__ctor_m3960135330 (Ccalib_t2987229308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::calibrate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Int32,OpenCVForUnity.TermCriteria,OpenCVForUnity.Mat)
extern "C"  double Ccalib_calibrate_m536803599 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___objectPoints0, Mat_t3763101966 * ___imagePoints1, Size_t4100163289 * ___size2, Mat_t3763101966 * ___K3, Mat_t3763101966 * ___xi4, Mat_t3763101966 * ___D5, List_1_t836320222 * ___rvecs6, List_1_t836320222 * ___tvecs7, int32_t ___flags8, TermCriteria_t3040734659 * ___criteria9, Mat_t3763101966 * ___idx10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::calibrate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Int32,OpenCVForUnity.TermCriteria)
extern "C"  double Ccalib_calibrate_m550120092 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___objectPoints0, Mat_t3763101966 * ___imagePoints1, Size_t4100163289 * ___size2, Mat_t3763101966 * ___K3, Mat_t3763101966 * ___xi4, Mat_t3763101966 * ___D5, List_1_t836320222 * ___rvecs6, List_1_t836320222 * ___tvecs7, int32_t ___flags8, TermCriteria_t3040734659 * ___criteria9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::stereoCalibrate(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Int32,OpenCVForUnity.TermCriteria,OpenCVForUnity.Mat)
extern "C"  double Ccalib_stereoCalibrate_m1995364827 (Il2CppObject * __this /* static, unused */, List_1_t836320222 * ___objectPoints0, List_1_t836320222 * ___imagePoints11, List_1_t836320222 * ___imagePoints22, Size_t4100163289 * ___imageSize13, Size_t4100163289 * ___imageSize24, Mat_t3763101966 * ___K15, Mat_t3763101966 * ___xi16, Mat_t3763101966 * ___D17, Mat_t3763101966 * ___K28, Mat_t3763101966 * ___xi29, Mat_t3763101966 * ___D210, Mat_t3763101966 * ___rvec11, Mat_t3763101966 * ___tvec12, List_1_t836320222 * ___rvecsL13, List_1_t836320222 * ___tvecsL14, int32_t ___flags15, TermCriteria_t3040734659 * ___criteria16, Mat_t3763101966 * ___idx17, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::stereoCalibrate(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Int32,OpenCVForUnity.TermCriteria)
extern "C"  double Ccalib_stereoCalibrate_m3499803984 (Il2CppObject * __this /* static, unused */, List_1_t836320222 * ___objectPoints0, List_1_t836320222 * ___imagePoints11, List_1_t836320222 * ___imagePoints22, Size_t4100163289 * ___imageSize13, Size_t4100163289 * ___imageSize24, Mat_t3763101966 * ___K15, Mat_t3763101966 * ___xi16, Mat_t3763101966 * ___D17, Mat_t3763101966 * ___K28, Mat_t3763101966 * ___xi29, Mat_t3763101966 * ___D210, Mat_t3763101966 * ___rvec11, Mat_t3763101966 * ___tvec12, List_1_t836320222 * ___rvecsL13, List_1_t836320222 * ___tvecsL14, int32_t ___flags15, TermCriteria_t3040734659 * ___criteria16, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::initUndistortRectifyMap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Ccalib_initUndistortRectifyMap_m4284924177 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___K0, Mat_t3763101966 * ___D1, Mat_t3763101966 * ___xi2, Mat_t3763101966 * ___R3, Mat_t3763101966 * ___P4, Size_t4100163289 * ___size5, int32_t ___mltype6, Mat_t3763101966 * ___map17, Mat_t3763101966 * ___map28, int32_t ___flags9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::projectPoints(OpenCVForUnity.MatOfPoint3f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ccalib_projectPoints_m568332232 (Il2CppObject * __this /* static, unused */, MatOfPoint3f_t3946375844 * ___objectPoints0, MatOfPoint2f_t3946375813 * ___imagePoints1, Mat_t3763101966 * ___rvec2, Mat_t3763101966 * ___tvec3, Mat_t3763101966 * ___K4, double ___xi5, Mat_t3763101966 * ___D6, Mat_t3763101966 * ___jacobian7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::projectPoints(OpenCVForUnity.MatOfPoint3f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat)
extern "C"  void Ccalib_projectPoints_m2426201219 (Il2CppObject * __this /* static, unused */, MatOfPoint3f_t3946375844 * ___objectPoints0, MatOfPoint2f_t3946375813 * ___imagePoints1, Mat_t3763101966 * ___rvec2, Mat_t3763101966 * ___tvec3, Mat_t3763101966 * ___K4, double ___xi5, Mat_t3763101966 * ___D6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::stereoReconstruct(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Ccalib_stereoReconstruct_m4281481475 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image10, Mat_t3763101966 * ___image21, Mat_t3763101966 * ___K12, Mat_t3763101966 * ___D13, Mat_t3763101966 * ___xi14, Mat_t3763101966 * ___K25, Mat_t3763101966 * ___D26, Mat_t3763101966 * ___xi27, Mat_t3763101966 * ___R8, Mat_t3763101966 * ___T9, int32_t ___flag10, int32_t ___numDisparities11, int32_t ___SADWindowSize12, Mat_t3763101966 * ___disparity13, Mat_t3763101966 * ___image1Rec14, Mat_t3763101966 * ___image2Rec15, Size_t4100163289 * ___newSize16, Mat_t3763101966 * ___Knew17, Mat_t3763101966 * ___pointCloud18, int32_t ___pointType19, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::stereoReconstruct(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ccalib_stereoReconstruct_m3128267278 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image10, Mat_t3763101966 * ___image21, Mat_t3763101966 * ___K12, Mat_t3763101966 * ___D13, Mat_t3763101966 * ___xi14, Mat_t3763101966 * ___K25, Mat_t3763101966 * ___D26, Mat_t3763101966 * ___xi27, Mat_t3763101966 * ___R8, Mat_t3763101966 * ___T9, int32_t ___flag10, int32_t ___numDisparities11, int32_t ___SADWindowSize12, Mat_t3763101966 * ___disparity13, Mat_t3763101966 * ___image1Rec14, Mat_t3763101966 * ___image2Rec15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::stereoRectify(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ccalib_stereoRectify_m54990886 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___R0, Mat_t3763101966 * ___T1, Mat_t3763101966 * ___R12, Mat_t3763101966 * ___R23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::undistortImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Mat)
extern "C"  void Ccalib_undistortImage_m834132929 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___distorted0, Mat_t3763101966 * ___undistorted1, Mat_t3763101966 * ___K2, Mat_t3763101966 * ___D3, Mat_t3763101966 * ___xi4, int32_t ___flags5, Mat_t3763101966 * ___Knew6, Size_t4100163289 * ___new_size7, Mat_t3763101966 * ___R8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::undistortImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Ccalib_undistortImage_m940932295 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___distorted0, Mat_t3763101966 * ___undistorted1, Mat_t3763101966 * ___K2, Mat_t3763101966 * ___D3, Mat_t3763101966 * ___xi4, int32_t ___flags5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::undistortPoints(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ccalib_undistortPoints_m1497729169 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___distorted0, Mat_t3763101966 * ___undistorted1, Mat_t3763101966 * ___K2, Mat_t3763101966 * ___D3, Mat_t3763101966 * ___xi4, Mat_t3763101966 * ___R5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::ccalib_Ccalib_calibrate_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.IntPtr)
extern "C"  double Ccalib_ccalib_Ccalib_calibrate_10_m936664439 (Il2CppObject * __this /* static, unused */, IntPtr_t ___objectPoints_nativeObj0, IntPtr_t ___imagePoints_nativeObj1, double ___size_width2, double ___size_height3, IntPtr_t ___K_nativeObj4, IntPtr_t ___xi_nativeObj5, IntPtr_t ___D_nativeObj6, IntPtr_t ___rvecs_mat_nativeObj7, IntPtr_t ___tvecs_mat_nativeObj8, int32_t ___flags9, int32_t ___criteria_type10, int32_t ___criteria_maxCount11, double ___criteria_epsilon12, IntPtr_t ___idx_nativeObj13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::ccalib_Ccalib_calibrate_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  double Ccalib_ccalib_Ccalib_calibrate_11_m789409066 (Il2CppObject * __this /* static, unused */, IntPtr_t ___objectPoints_nativeObj0, IntPtr_t ___imagePoints_nativeObj1, double ___size_width2, double ___size_height3, IntPtr_t ___K_nativeObj4, IntPtr_t ___xi_nativeObj5, IntPtr_t ___D_nativeObj6, IntPtr_t ___rvecs_mat_nativeObj7, IntPtr_t ___tvecs_mat_nativeObj8, int32_t ___flags9, int32_t ___criteria_type10, int32_t ___criteria_maxCount11, double ___criteria_epsilon12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::ccalib_Ccalib_stereoCalibrate_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.IntPtr)
extern "C"  double Ccalib_ccalib_Ccalib_stereoCalibrate_10_m2763015875 (Il2CppObject * __this /* static, unused */, IntPtr_t ___objectPoints_mat_nativeObj0, IntPtr_t ___imagePoints1_mat_nativeObj1, IntPtr_t ___imagePoints2_mat_nativeObj2, double ___imageSize1_width3, double ___imageSize1_height4, double ___imageSize2_width5, double ___imageSize2_height6, IntPtr_t ___K1_nativeObj7, IntPtr_t ___xi1_nativeObj8, IntPtr_t ___D1_nativeObj9, IntPtr_t ___K2_nativeObj10, IntPtr_t ___xi2_nativeObj11, IntPtr_t ___D2_nativeObj12, IntPtr_t ___rvec_nativeObj13, IntPtr_t ___tvec_nativeObj14, IntPtr_t ___rvecsL_mat_nativeObj15, IntPtr_t ___tvecsL_mat_nativeObj16, int32_t ___flags17, int32_t ___criteria_type18, int32_t ___criteria_maxCount19, double ___criteria_epsilon20, IntPtr_t ___idx_nativeObj21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Ccalib::ccalib_Ccalib_stereoCalibrate_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  double Ccalib_ccalib_Ccalib_stereoCalibrate_11_m2717277558 (Il2CppObject * __this /* static, unused */, IntPtr_t ___objectPoints_mat_nativeObj0, IntPtr_t ___imagePoints1_mat_nativeObj1, IntPtr_t ___imagePoints2_mat_nativeObj2, double ___imageSize1_width3, double ___imageSize1_height4, double ___imageSize2_width5, double ___imageSize2_height6, IntPtr_t ___K1_nativeObj7, IntPtr_t ___xi1_nativeObj8, IntPtr_t ___D1_nativeObj9, IntPtr_t ___K2_nativeObj10, IntPtr_t ___xi2_nativeObj11, IntPtr_t ___D2_nativeObj12, IntPtr_t ___rvec_nativeObj13, IntPtr_t ___tvec_nativeObj14, IntPtr_t ___rvecsL_mat_nativeObj15, IntPtr_t ___tvecsL_mat_nativeObj16, int32_t ___flags17, int32_t ___criteria_type18, int32_t ___criteria_maxCount19, double ___criteria_epsilon20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_initUndistortRectifyMap_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Ccalib_ccalib_Ccalib_initUndistortRectifyMap_10_m2683003566 (Il2CppObject * __this /* static, unused */, IntPtr_t ___K_nativeObj0, IntPtr_t ___D_nativeObj1, IntPtr_t ___xi_nativeObj2, IntPtr_t ___R_nativeObj3, IntPtr_t ___P_nativeObj4, double ___size_width5, double ___size_height6, int32_t ___mltype7, IntPtr_t ___map1_nativeObj8, IntPtr_t ___map2_nativeObj9, int32_t ___flags10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_projectPoints_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.IntPtr,System.IntPtr)
extern "C"  void Ccalib_ccalib_Ccalib_projectPoints_10_m3550639936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___objectPoints_mat_nativeObj0, IntPtr_t ___imagePoints_mat_nativeObj1, IntPtr_t ___rvec_nativeObj2, IntPtr_t ___tvec_nativeObj3, IntPtr_t ___K_nativeObj4, double ___xi5, IntPtr_t ___D_nativeObj6, IntPtr_t ___jacobian_nativeObj7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_projectPoints_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.IntPtr)
extern "C"  void Ccalib_ccalib_Ccalib_projectPoints_11_m3365505425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___objectPoints_mat_nativeObj0, IntPtr_t ___imagePoints_mat_nativeObj1, IntPtr_t ___rvec_nativeObj2, IntPtr_t ___tvec_nativeObj3, IntPtr_t ___K_nativeObj4, double ___xi5, IntPtr_t ___D_nativeObj6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_stereoReconstruct_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Ccalib_ccalib_Ccalib_stereoReconstruct_10_m2227435264 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image1_nativeObj0, IntPtr_t ___image2_nativeObj1, IntPtr_t ___K1_nativeObj2, IntPtr_t ___D1_nativeObj3, IntPtr_t ___xi1_nativeObj4, IntPtr_t ___K2_nativeObj5, IntPtr_t ___D2_nativeObj6, IntPtr_t ___xi2_nativeObj7, IntPtr_t ___R_nativeObj8, IntPtr_t ___T_nativeObj9, int32_t ___flag10, int32_t ___numDisparities11, int32_t ___SADWindowSize12, IntPtr_t ___disparity_nativeObj13, IntPtr_t ___image1Rec_nativeObj14, IntPtr_t ___image2Rec_nativeObj15, double ___newSize_width16, double ___newSize_height17, IntPtr_t ___Knew_nativeObj18, IntPtr_t ___pointCloud_nativeObj19, int32_t ___pointType20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_stereoReconstruct_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Ccalib_ccalib_Ccalib_stereoReconstruct_11_m110585316 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image1_nativeObj0, IntPtr_t ___image2_nativeObj1, IntPtr_t ___K1_nativeObj2, IntPtr_t ___D1_nativeObj3, IntPtr_t ___xi1_nativeObj4, IntPtr_t ___K2_nativeObj5, IntPtr_t ___D2_nativeObj6, IntPtr_t ___xi2_nativeObj7, IntPtr_t ___R_nativeObj8, IntPtr_t ___T_nativeObj9, int32_t ___flag10, int32_t ___numDisparities11, int32_t ___SADWindowSize12, IntPtr_t ___disparity_nativeObj13, IntPtr_t ___image1Rec_nativeObj14, IntPtr_t ___image2Rec_nativeObj15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_stereoRectify_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Ccalib_ccalib_Ccalib_stereoRectify_10_m1181959230 (Il2CppObject * __this /* static, unused */, IntPtr_t ___R_nativeObj0, IntPtr_t ___T_nativeObj1, IntPtr_t ___R1_nativeObj2, IntPtr_t ___R2_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_undistortImage_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Double,System.Double,System.IntPtr)
extern "C"  void Ccalib_ccalib_Ccalib_undistortImage_10_m213309428 (Il2CppObject * __this /* static, unused */, IntPtr_t ___distorted_nativeObj0, IntPtr_t ___undistorted_nativeObj1, IntPtr_t ___K_nativeObj2, IntPtr_t ___D_nativeObj3, IntPtr_t ___xi_nativeObj4, int32_t ___flags5, IntPtr_t ___Knew_nativeObj6, double ___new_size_width7, double ___new_size_height8, IntPtr_t ___R_nativeObj9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_undistortImage_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Ccalib_ccalib_Ccalib_undistortImage_11_m416624097 (Il2CppObject * __this /* static, unused */, IntPtr_t ___distorted_nativeObj0, IntPtr_t ___undistorted_nativeObj1, IntPtr_t ___K_nativeObj2, IntPtr_t ___D_nativeObj3, IntPtr_t ___xi_nativeObj4, int32_t ___flags5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ccalib::ccalib_Ccalib_undistortPoints_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Ccalib_ccalib_Ccalib_undistortPoints_10_m73979375 (Il2CppObject * __this /* static, unused */, IntPtr_t ___distorted_nativeObj0, IntPtr_t ___undistorted_nativeObj1, IntPtr_t ___K_nativeObj2, IntPtr_t ___D_nativeObj3, IntPtr_t ___xi_nativeObj4, IntPtr_t ___R_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
