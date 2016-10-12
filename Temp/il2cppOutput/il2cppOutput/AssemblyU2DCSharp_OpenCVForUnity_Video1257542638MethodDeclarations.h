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

// OpenCVForUnity.Video
struct Video_t1257542638;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.BackgroundSubtractorKNN
struct BackgroundSubtractorKNN_t1839158489;
// OpenCVForUnity.BackgroundSubtractorMOG2
struct BackgroundSubtractorMOG2_t292364005;
// OpenCVForUnity.DualTVL1OpticalFlow
struct DualTVL1OpticalFlow_t3656933078;
// OpenCVForUnity.RotatedRect
struct RotatedRect_t415848288;
// OpenCVForUnity.Rect
struct Rect_t1177435543;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3969392542;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t580066400;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3217930354;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t87860472;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect1177435543.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3969392542.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint2f580066400.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfByte3217930354.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat87860472.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Video::.ctor()
extern "C"  void Video__ctor_m2907293061 (Video_t1257542638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Video::estimateRigidTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  Mat_t1174969555 * Video_estimateRigidTransform_m2008721857 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, bool ___fullAffine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorKNN OpenCVForUnity.Video::createBackgroundSubtractorKNN(System.Int32,System.Double,System.Boolean)
extern "C"  BackgroundSubtractorKNN_t1839158489 * Video_createBackgroundSubtractorKNN_m2370946687 (Il2CppObject * __this /* static, unused */, int32_t ___history, double ___dist2Threshold, bool ___detectShadows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorKNN OpenCVForUnity.Video::createBackgroundSubtractorKNN()
extern "C"  BackgroundSubtractorKNN_t1839158489 * Video_createBackgroundSubtractorKNN_m1202564209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorMOG2 OpenCVForUnity.Video::createBackgroundSubtractorMOG2(System.Int32,System.Double,System.Boolean)
extern "C"  BackgroundSubtractorMOG2_t292364005 * Video_createBackgroundSubtractorMOG2_m657227431 (Il2CppObject * __this /* static, unused */, int32_t ___history, double ___varThreshold, bool ___detectShadows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorMOG2 OpenCVForUnity.Video::createBackgroundSubtractorMOG2()
extern "C"  BackgroundSubtractorMOG2_t292364005 * Video_createBackgroundSubtractorMOG2_m96798537 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DualTVL1OpticalFlow OpenCVForUnity.Video::createOptFlow_DualTVL1()
extern "C"  DualTVL1OpticalFlow_t3656933078 * Video_createOptFlow_DualTVL1_m1596548059 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RotatedRect OpenCVForUnity.Video::CamShift(OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.TermCriteria)
extern "C"  RotatedRect_t415848288 * Video_CamShift_m2314415307 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___probImage, Rect_t1177435543 * ___window, TermCriteria_t3969392542 * ___criteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::findTransformECC(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.TermCriteria,OpenCVForUnity.Mat)
extern "C"  double Video_findTransformECC_m812115761 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___templateImage, Mat_t1174969555 * ___inputImage, Mat_t1174969555 * ___warpMatrix, int32_t ___motionType, TermCriteria_t3969392542 * ___criteria, Mat_t1174969555 * ___inputMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::findTransformECC(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  double Video_findTransformECC_m4149145406 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___templateImage, Mat_t1174969555 * ___inputImage, Mat_t1174969555 * ___warpMatrix, int32_t ___motionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::findTransformECC(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Video_findTransformECC_m984306233 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___templateImage, Mat_t1174969555 * ___inputImage, Mat_t1174969555 * ___warpMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::buildOpticalFlowPyramid(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Size,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Video_buildOpticalFlowPyramid_m426698072 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t1971928524 * ___pyramid, Size_t1177469876 * ___winSize, int32_t ___maxLevel, bool ___withDerivatives, int32_t ___pyrBorder, int32_t ___derivBorder, bool ___tryReuseInputImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::buildOpticalFlowPyramid(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Size,System.Int32)
extern "C"  int32_t Video_buildOpticalFlowPyramid_m2818506264 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t1971928524 * ___pyramid, Size_t1177469876 * ___winSize, int32_t ___maxLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::meanShift(OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.TermCriteria)
extern "C"  int32_t Video_meanShift_m3932042550 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___probImage, Rect_t1177435543 * ___window, TermCriteria_t3969392542 * ___criteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowFarneback(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Int32)
extern "C"  void Video_calcOpticalFlowFarneback_m1457854807 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___prev, Mat_t1174969555 * ___next, Mat_t1174969555 * ___flow, double ___pyr_scale, int32_t ___levels, int32_t ___winsize, int32_t ___iterations, int32_t ___poly_n, double ___poly_sigma, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowPyrLK(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfFloat,OpenCVForUnity.Size,System.Int32,OpenCVForUnity.TermCriteria,System.Int32,System.Double)
extern "C"  void Video_calcOpticalFlowPyrLK_m2269405456 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___prevImg, Mat_t1174969555 * ___nextImg, MatOfPoint2f_t580066400 * ___prevPts, MatOfPoint2f_t580066400 * ___nextPts, MatOfByte_t3217930354 * ___status, MatOfFloat_t87860472 * ___err, Size_t1177469876 * ___winSize, int32_t ___maxLevel, TermCriteria_t3969392542 * ___criteria, int32_t ___flags, double ___minEigThreshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowPyrLK(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfFloat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Video_calcOpticalFlowPyrLK_m1217820967 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___prevImg, Mat_t1174969555 * ___nextImg, MatOfPoint2f_t580066400 * ___prevPts, MatOfPoint2f_t580066400 * ___nextPts, MatOfByte_t3217930354 * ___status, MatOfFloat_t87860472 * ___err, Size_t1177469876 * ___winSize, int32_t ___maxLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowPyrLK(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfFloat)
extern "C"  void Video_calcOpticalFlowPyrLK_m523425930 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___prevImg, Mat_t1174969555 * ___nextImg, MatOfPoint2f_t580066400 * ___prevPts, MatOfPoint2f_t580066400 * ___nextPts, MatOfByte_t3217930354 * ___status, MatOfFloat_t87860472 * ___err, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_estimateRigidTransform_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  IntPtr_t Video_video_Video_estimateRigidTransform_10_m121879926 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, bool ___fullAffine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorKNN_10(System.Int32,System.Double,System.Boolean)
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorKNN_10_m983217536 (Il2CppObject * __this /* static, unused */, int32_t ___history, double ___dist2Threshold, bool ___detectShadows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorKNN_11()
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorKNN_11_m221767697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorMOG2_10(System.Int32,System.Double,System.Boolean)
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorMOG2_10_m1172067098 (Il2CppObject * __this /* static, unused */, int32_t ___history, double ___varThreshold, bool ___detectShadows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorMOG2_11()
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorMOG2_11_m1839320375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createOptFlow_1DualTVL1_10()
extern "C"  IntPtr_t Video_video_Video_createOptFlow_1DualTVL1_10_m2548443136 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_CamShift_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Double[],System.Int32,System.Int32,System.Double,System.Double[])
extern "C"  void Video_video_Video_CamShift_10_m139551806 (Il2CppObject * __this /* static, unused */, IntPtr_t ___probImage_nativeObj, int32_t ___window_x, int32_t ___window_y, int32_t ___window_width, int32_t ___window_height, DoubleU5BU5D_t1048280995* ___window_out, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::video_Video_findTransformECC_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.IntPtr)
extern "C"  double Video_video_Video_findTransformECC_10_m1807631509 (Il2CppObject * __this /* static, unused */, IntPtr_t ___templateImage_nativeObj, IntPtr_t ___inputImage_nativeObj, IntPtr_t ___warpMatrix_nativeObj, int32_t ___motionType, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, IntPtr_t ___inputMask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::video_Video_findTransformECC_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  double Video_video_Video_findTransformECC_11_m1783758188 (Il2CppObject * __this /* static, unused */, IntPtr_t ___templateImage_nativeObj, IntPtr_t ___inputImage_nativeObj, IntPtr_t ___warpMatrix_nativeObj, int32_t ___motionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::video_Video_findTransformECC_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double Video_video_Video_findTransformECC_12_m1930640042 (Il2CppObject * __this /* static, unused */, IntPtr_t ___templateImage_nativeObj, IntPtr_t ___inputImage_nativeObj, IntPtr_t ___warpMatrix_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::video_Video_buildOpticalFlowPyramid_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Video_video_Video_buildOpticalFlowPyramid_10_m3211275192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pyramid_mat_nativeObj, double ___winSize_width, double ___winSize_height, int32_t ___maxLevel, bool ___withDerivatives, int32_t ___pyrBorder, int32_t ___derivBorder, bool ___tryReuseInputImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::video_Video_buildOpticalFlowPyramid_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  int32_t Video_video_Video_buildOpticalFlowPyramid_11_m3263862713 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pyramid_mat_nativeObj, double ___winSize_width, double ___winSize_height, int32_t ___maxLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::video_Video_meanShift_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Double[],System.Int32,System.Int32,System.Double)
extern "C"  int32_t Video_video_Video_meanShift_10_m3945140468 (Il2CppObject * __this /* static, unused */, IntPtr_t ___probImage_nativeObj, int32_t ___window_x, int32_t ___window_y, int32_t ___window_width, int32_t ___window_height, DoubleU5BU5D_t1048280995* ___window_out, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowFarneback_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Int32)
extern "C"  void Video_video_Video_calcOpticalFlowFarneback_10_m3441748356 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prev_nativeObj, IntPtr_t ___next_nativeObj, IntPtr_t ___flow_nativeObj, double ___pyr_scale, int32_t ___levels, int32_t ___winsize, int32_t ___iterations, int32_t ___poly_n, double ___poly_sigma, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowPyrLK_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Double,System.Int32,System.Double)
extern "C"  void Video_video_Video_calcOpticalFlowPyrLK_10_m2389136816 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prevImg_nativeObj, IntPtr_t ___nextImg_nativeObj, IntPtr_t ___prevPts_mat_nativeObj, IntPtr_t ___nextPts_mat_nativeObj, IntPtr_t ___status_mat_nativeObj, IntPtr_t ___err_mat_nativeObj, double ___winSize_width, double ___winSize_height, int32_t ___maxLevel, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, int32_t ___flags, double ___minEigThreshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowPyrLK_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Video_video_Video_calcOpticalFlowPyrLK_11_m2988026600 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prevImg_nativeObj, IntPtr_t ___nextImg_nativeObj, IntPtr_t ___prevPts_mat_nativeObj, IntPtr_t ___nextPts_mat_nativeObj, IntPtr_t ___status_mat_nativeObj, IntPtr_t ___err_mat_nativeObj, double ___winSize_width, double ___winSize_height, int32_t ___maxLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowPyrLK_12(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Video_video_Video_calcOpticalFlowPyrLK_12_m432063862 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prevImg_nativeObj, IntPtr_t ___nextImg_nativeObj, IntPtr_t ___prevPts_mat_nativeObj, IntPtr_t ___nextPts_mat_nativeObj, IntPtr_t ___status_mat_nativeObj, IntPtr_t ___err_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
