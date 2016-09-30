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

// OpenCVForUnity.Imgproc
struct Imgproc_t462334220;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t580066400;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.Point
struct Point_t1252185347;
// OpenCVForUnity.Moments
struct Moments_t4074816998;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// OpenCVForUnity.CLAHE
struct CLAHE_t1239097224;
// OpenCVForUnity.LineSegmentDetector
struct LineSegmentDetector_t1058803960;
// OpenCVForUnity.Rect
struct Rect_t1177435543;
// OpenCVForUnity.MatOfPoint
struct MatOfPoint_t97179692;
// OpenCVForUnity.RotatedRect
struct RotatedRect_t415848288;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t1517897931;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t87860472;
// OpenCVForUnity.MatOfInt4
struct MatOfInt4_t3218128271;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3969392542;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>
struct List_1_t894138661;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint2f580066400.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1252185347.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint97179692.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect1177435543.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3645537183.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_RotatedRect415848288.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Moments4074816998.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt1517897931.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat87860472.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt43218128271.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3969392542.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Imgproc::.ctor()
extern "C"  void Imgproc__ctor_m693356263 (Imgproc_t462334220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getAffineTransform(OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f)
extern "C"  Mat_t1174969555 * Imgproc_getAffineTransform_m3069526244 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___src, MatOfPoint2f_t580066400 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getDefaultNewCameraMatrix(OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Boolean)
extern "C"  Mat_t1174969555 * Imgproc_getDefaultNewCameraMatrix_m286842836 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___cameraMatrix, Size_t1177469876 * ___imgsize, bool ___centerPrincipalPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getDefaultNewCameraMatrix(OpenCVForUnity.Mat)
extern "C"  Mat_t1174969555 * Imgproc_getDefaultNewCameraMatrix_m558255587 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___cameraMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getGaborKernel(OpenCVForUnity.Size,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  Mat_t1174969555 * Imgproc_getGaborKernel_m572724496 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___ksize, double ___sigma, double ___theta, double ___lambd, double ___gamma, double ___psi, int32_t ___ktype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getGaborKernel(OpenCVForUnity.Size,System.Double,System.Double,System.Double,System.Double)
extern "C"  Mat_t1174969555 * Imgproc_getGaborKernel_m3438334443 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___ksize, double ___sigma, double ___theta, double ___lambd, double ___gamma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getGaussianKernel(System.Int32,System.Double,System.Int32)
extern "C"  Mat_t1174969555 * Imgproc_getGaussianKernel_m66368697 (Il2CppObject * __this /* static, unused */, int32_t ___ksize, double ___sigma, int32_t ___ktype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getGaussianKernel(System.Int32,System.Double)
extern "C"  Mat_t1174969555 * Imgproc_getGaussianKernel_m1036730590 (Il2CppObject * __this /* static, unused */, int32_t ___ksize, double ___sigma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getPerspectiveTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Mat_t1174969555 * Imgproc_getPerspectiveTransform_m864464381 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getRotationMatrix2D(OpenCVForUnity.Point,System.Double,System.Double)
extern "C"  Mat_t1174969555 * Imgproc_getRotationMatrix2D_m1331723415 (Il2CppObject * __this /* static, unused */, Point_t1252185347 * ___center, double ___angle, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getStructuringElement(System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Point)
extern "C"  Mat_t1174969555 * Imgproc_getStructuringElement_m1796057759 (Il2CppObject * __this /* static, unused */, int32_t ___shape, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Imgproc::getStructuringElement(System.Int32,OpenCVForUnity.Size)
extern "C"  Mat_t1174969555 * Imgproc_getStructuringElement_m4127100252 (Il2CppObject * __this /* static, unused */, int32_t ___shape, Size_t1177469876 * ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Moments OpenCVForUnity.Imgproc::moments(OpenCVForUnity.Mat,System.Boolean)
extern "C"  Moments_t4074816998 * Imgproc_moments_m1509660111 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___array, bool ___binaryImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Moments OpenCVForUnity.Imgproc::moments(OpenCVForUnity.Mat)
extern "C"  Moments_t4074816998 * Imgproc_moments_m3999704046 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Imgproc::phaseCorrelate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double[])
extern "C"  Point_t1252185347 * Imgproc_phaseCorrelate_m285024338 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___window, DoubleU5BU5D_t1048280995* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Imgproc::phaseCorrelate(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Point_t1252185347 * Imgproc_phaseCorrelate_m1336911507 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.CLAHE OpenCVForUnity.Imgproc::createCLAHE(System.Double,OpenCVForUnity.Size)
extern "C"  CLAHE_t1239097224 * Imgproc_createCLAHE_m1086674135 (Il2CppObject * __this /* static, unused */, double ___clipLimit, Size_t1177469876 * ___tileGridSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.CLAHE OpenCVForUnity.Imgproc::createCLAHE()
extern "C"  CLAHE_t1239097224 * Imgproc_createCLAHE_m3492371889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.LineSegmentDetector OpenCVForUnity.Imgproc::createLineSegmentDetector(System.Int32,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  LineSegmentDetector_t1058803960 * Imgproc_createLineSegmentDetector_m2783330189 (Il2CppObject * __this /* static, unused */, int32_t ____refine, double ____scale, double ____sigma_scale, double ____quant, double ____ang_th, double ____log_eps, double ____density_th, int32_t ____n_bins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.LineSegmentDetector OpenCVForUnity.Imgproc::createLineSegmentDetector()
extern "C"  LineSegmentDetector_t1058803960 * Imgproc_createLineSegmentDetector_m121260753 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnity.Imgproc::boundingRect(OpenCVForUnity.MatOfPoint)
extern "C"  Rect_t1177435543 * Imgproc_boundingRect_m2878212293 (Il2CppObject * __this /* static, unused */, MatOfPoint_t97179692 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RotatedRect OpenCVForUnity.Imgproc::fitEllipse(OpenCVForUnity.MatOfPoint2f)
extern "C"  RotatedRect_t415848288 * Imgproc_fitEllipse_m881019713 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RotatedRect OpenCVForUnity.Imgproc::minAreaRect(OpenCVForUnity.MatOfPoint2f)
extern "C"  RotatedRect_t415848288 * Imgproc_minAreaRect_m1442419917 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgproc::clipLine(OpenCVForUnity.Rect,OpenCVForUnity.Point,OpenCVForUnity.Point)
extern "C"  bool Imgproc_clipLine_m3455700788 (Il2CppObject * __this /* static, unused */, Rect_t1177435543 * ___imgRect, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgproc::isContourConvex(OpenCVForUnity.MatOfPoint)
extern "C"  bool Imgproc_isContourConvex_m158769772 (Il2CppObject * __this /* static, unused */, MatOfPoint_t97179692 * ___contour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::arcLength(OpenCVForUnity.MatOfPoint2f,System.Boolean)
extern "C"  double Imgproc_arcLength_m2338278519 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___curve, bool ___closed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::compareHist(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  double Imgproc_compareHist_m873280506 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___H1, Mat_t1174969555 * ___H2, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::contourArea(OpenCVForUnity.Mat,System.Boolean)
extern "C"  double Imgproc_contourArea_m901684847 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___contour, bool ___oriented, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::contourArea(OpenCVForUnity.Mat)
extern "C"  double Imgproc_contourArea_m1481076558 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___contour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::matchShapes(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  double Imgproc_matchShapes_m2354367590 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___contour1, Mat_t1174969555 * ___contour2, int32_t ___method, double ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::minEnclosingTriangle(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Imgproc_minEnclosingTriangle_m3754514500 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___points, Mat_t1174969555 * ___triangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::pointPolygonTest(OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Point,System.Boolean)
extern "C"  double Imgproc_pointPolygonTest_m2261395750 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___contour, Point_t1252185347 * ___pt, bool ___measureDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::threshold(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32)
extern "C"  double Imgproc_threshold_m1200967558 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___thresh, double ___maxval, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::initWideAngleProjMap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  float Imgproc_initWideAngleProjMap_m511143295 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, Size_t1177469876 * ___imageSize, int32_t ___destImageWidth, int32_t ___m1type, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, int32_t ___projType, double ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::initWideAngleProjMap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float Imgproc_initWideAngleProjMap_m4026671892 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, Size_t1177469876 * ___imageSize, int32_t ___destImageWidth, int32_t ___m1type, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::intersectConvexConvex(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  float Imgproc_intersectConvexConvex_m2129491858 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____p1, Mat_t1174969555 * ____p2, Mat_t1174969555 * ____p12, bool ___handleNested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::intersectConvexConvex(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float Imgproc_intersectConvexConvex_m2950943883 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____p1, Mat_t1174969555 * ____p2, Mat_t1174969555 * ____p12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::connectedComponents(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  int32_t Imgproc_connectedComponents_m3861955824 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___labels, int32_t ___connectivity, int32_t ___ltype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::connectedComponents(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t Imgproc_connectedComponents_m1254310800 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___labels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::connectedComponentsWithStats(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  int32_t Imgproc_connectedComponentsWithStats_m2373307361 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___labels, Mat_t1174969555 * ___stats, Mat_t1174969555 * ___centroids, int32_t ___connectivity, int32_t ___ltype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::connectedComponentsWithStats(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t Imgproc_connectedComponentsWithStats_m4159083969 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___labels, Mat_t1174969555 * ___stats, Mat_t1174969555 * ___centroids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::floodFill(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Scalar,OpenCVForUnity.Rect,OpenCVForUnity.Scalar,OpenCVForUnity.Scalar,System.Int32)
extern "C"  int32_t Imgproc_floodFill_m3949871862 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___mask, Point_t1252185347 * ___seedPoint, Scalar_t3645537183 * ___newVal, Rect_t1177435543 * ___rect, Scalar_t3645537183 * ___loDiff, Scalar_t3645537183 * ___upDiff, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::floodFill(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Scalar)
extern "C"  int32_t Imgproc_floodFill_m1319517544 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___mask, Point_t1252185347 * ___seedPoint, Scalar_t3645537183 * ___newVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::rotatedRectangleIntersection(OpenCVForUnity.RotatedRect,OpenCVForUnity.RotatedRect,OpenCVForUnity.Mat)
extern "C"  int32_t Imgproc_rotatedRectangleIntersection_m1232195391 (Il2CppObject * __this /* static, unused */, RotatedRect_t415848288 * ___rect1, RotatedRect_t415848288 * ___rect2, Mat_t1174969555 * ___intersectingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Canny(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Boolean)
extern "C"  void Imgproc_Canny_m2980595652 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___edges, double ___threshold1, double ___threshold2, int32_t ___apertureSize, bool ___L2gradient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Canny(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Imgproc_Canny_m56066814 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___edges, double ___threshold1, double ___threshold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::GaussianBlur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_GaussianBlur_m3289399698 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___ksize, double ___sigmaX, double ___sigmaY, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::GaussianBlur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Double,System.Double)
extern "C"  void Imgproc_GaussianBlur_m1980680037 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___ksize, double ___sigmaX, double ___sigmaY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::GaussianBlur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Double)
extern "C"  void Imgproc_GaussianBlur_m3527909033 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___ksize, double ___sigmaX, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HoughCircles(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Imgproc_HoughCircles_m2936725426 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___circles, int32_t ___method, double ___dp, double ___minDist, double ___param1, double ___param2, int32_t ___minRadius, int32_t ___maxRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HoughCircles(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_HoughCircles_m758822874 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___circles, int32_t ___method, double ___dp, double ___minDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HoughLines(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_HoughLines_m2518531574 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___lines, double ___rho, double ___theta, int32_t ___threshold, double ___srn, double ___stn, double ___min_theta, double ___max_theta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HoughLines(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_HoughLines_m2848828422 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___lines, double ___rho, double ___theta, int32_t ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HoughLinesP(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_HoughLinesP_m2248999606 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___lines, double ___rho, double ___theta, int32_t ___threshold, double ___minLineLength, double ___maxLineGap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HoughLinesP(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_HoughLinesP_m2725931966 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___lines, double ___rho, double ___theta, int32_t ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::HuMoments(OpenCVForUnity.Moments,OpenCVForUnity.Mat)
extern "C"  void Imgproc_HuMoments_m142059950 (Il2CppObject * __this /* static, unused */, Moments_t4074816998 * ___m, Mat_t1174969555 * ___hu, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Laplacian(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_Laplacian_m3021731457 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___ksize, double ___scale, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Laplacian(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_Laplacian_m689224214 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___ksize, double ___scale, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Laplacian(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_Laplacian_m554992217 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Scharr(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_Scharr_m1154066792 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, double ___scale, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Scharr(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_Scharr_m2067487695 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, double ___scale, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Scharr(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_Scharr_m2674209879 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Sobel(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_Sobel_m814215403 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, int32_t ___ksize, double ___scale, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Sobel(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_Sobel_m3798997868 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, int32_t ___ksize, double ___scale, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::Sobel(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_Sobel_m4108734531 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulate_m1287171268 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulate(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulate_m57102599 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulateProduct(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulateProduct_m3419310388 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulateProduct(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulateProduct_m101280407 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulateSquare(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulateSquare_m3960886593 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulateSquare(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulateSquare_m373385130 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulateWeighted(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat)
extern "C"  void Imgproc_accumulateWeighted_m3054679871 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___alpha, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::accumulateWeighted(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void Imgproc_accumulateWeighted_m3146005100 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::adaptiveThreshold(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_adaptiveThreshold_m557973899 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___maxValue, int32_t ___adaptiveMethod, int32_t ___thresholdType, int32_t ___blockSize, double ___C, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::applyColorMap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_applyColorMap_m95546269 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___colormap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::approxPolyDP(OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,System.Double,System.Boolean)
extern "C"  void Imgproc_approxPolyDP_m3551212790 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___curve, MatOfPoint2f_t580066400 * ___approxCurve, double ___epsilon, bool ___closed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::arrowedLine(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_arrowedLine_m255408850 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___line_type, int32_t ___shift, double ___tipLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::arrowedLine(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_arrowedLine_m444440449 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::bilateralFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_bilateralFilter_m138663137 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::bilateralFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_bilateralFilter_m497221558 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::blur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Point,System.Int32)
extern "C"  void Imgproc_blur_m2502682308 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::blur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Point)
extern "C"  void Imgproc_blur_m330602739 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::blur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size)
extern "C"  void Imgproc_blur_m2027999880 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::boxFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Point,System.Boolean,System.Int32)
extern "C"  void Imgproc_boxFilter_m1596892790 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, bool ___normalize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::boxFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Point,System.Boolean)
extern "C"  void Imgproc_boxFilter_m981090305 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, bool ___normalize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::boxFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Size)
extern "C"  void Imgproc_boxFilter_m677665759 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Size_t1177469876 * ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::boxPoints(OpenCVForUnity.RotatedRect,OpenCVForUnity.Mat)
extern "C"  void Imgproc_boxPoints_m208974496 (Il2CppObject * __this /* static, unused */, RotatedRect_t415848288 * ___box, Mat_t1174969555 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::calcBackProject(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.MatOfInt,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat,System.Double)
extern "C"  void Imgproc_calcBackProject_m761357656 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___images, MatOfInt_t1517897931 * ___channels, Mat_t1174969555 * ___hist, Mat_t1174969555 * ___dst, MatOfFloat_t87860472 * ___ranges, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::calcHist(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.MatOfInt,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfFloat,System.Boolean)
extern "C"  void Imgproc_calcHist_m1143852356 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___images, MatOfInt_t1517897931 * ___channels, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___hist, MatOfInt_t1517897931 * ___histSize, MatOfFloat_t87860472 * ___ranges, bool ___accumulate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::calcHist(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.MatOfInt,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfFloat)
extern "C"  void Imgproc_calcHist_m913117465 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___images, MatOfInt_t1517897931 * ___channels, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___hist, MatOfInt_t1517897931 * ___histSize, MatOfFloat_t87860472 * ___ranges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::circle(OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_circle_m2466255854 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___center, int32_t ___radius, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::circle(OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_circle_m3403699214 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___center, int32_t ___radius, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::circle(OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_circle_m3701889897 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___center, int32_t ___radius, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::convertMaps(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Boolean)
extern "C"  void Imgproc_convertMaps_m3023363293 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, Mat_t1174969555 * ___dstmap1, Mat_t1174969555 * ___dstmap2, int32_t ___dstmap1type, bool ___nninterpolation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::convertMaps(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_convertMaps_m2675303072 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, Mat_t1174969555 * ___dstmap1, Mat_t1174969555 * ___dstmap2, int32_t ___dstmap1type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::convexHull(OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfInt,System.Boolean)
extern "C"  void Imgproc_convexHull_m3220548203 (Il2CppObject * __this /* static, unused */, MatOfPoint_t97179692 * ___points, MatOfInt_t1517897931 * ___hull, bool ___clockwise, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::convexHull(OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfInt)
extern "C"  void Imgproc_convexHull_m3803278034 (Il2CppObject * __this /* static, unused */, MatOfPoint_t97179692 * ___points, MatOfInt_t1517897931 * ___hull, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::convexityDefects(OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfInt4)
extern "C"  void Imgproc_convexityDefects_m3517083716 (Il2CppObject * __this /* static, unused */, MatOfPoint_t97179692 * ___contour, MatOfInt_t1517897931 * ___convexhull, MatOfInt4_t3218128271 * ___convexityDefects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerEigenValsAndVecs(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_cornerEigenValsAndVecs_m807231131 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerEigenValsAndVecs(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_cornerEigenValsAndVecs_m2854891452 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerHarris(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Double,System.Int32)
extern "C"  void Imgproc_cornerHarris_m4147243786 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, int32_t ___ksize, double ___k, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerHarris(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_cornerHarris_m3810466541 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, int32_t ___ksize, double ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerMinEigenVal(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_cornerMinEigenVal_m1110602536 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerMinEigenVal(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_cornerMinEigenVal_m1519237647 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerMinEigenVal(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_cornerMinEigenVal_m3599124424 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cornerSubPix(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.TermCriteria)
extern "C"  void Imgproc_cornerSubPix_m3244648184 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, MatOfPoint2f_t580066400 * ___corners, Size_t1177469876 * ___winSize, Size_t1177469876 * ___zeroZone, TermCriteria_t3969392542 * ___criteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::createHanningWindow(OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Imgproc_createHanningWindow_m2671930186 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___dst, Size_t1177469876 * ___winSize, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cvtColor(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_cvtColor_m2430504071 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___code, int32_t ___dstCn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::cvtColor(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_cvtColor_m1442370128 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::demosaicing(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_demosaicing_m2603033130 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____src, Mat_t1174969555 * ____dst, int32_t ___code, int32_t ___dcn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::demosaicing(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_demosaicing_m828297165 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____src, Mat_t1174969555 * ____dst, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::dilate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_dilate_m1204581705 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, int32_t ___iterations, int32_t ___borderType, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::dilate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32)
extern "C"  void Imgproc_dilate_m1931653065 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::dilate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_dilate_m391277773 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___kernel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::distanceTransformWithLabels(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_distanceTransformWithLabels_m1674229329 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___labels, int32_t ___distanceType, int32_t ___maskSize, int32_t ___labelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::distanceTransformWithLabels(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_distanceTransformWithLabels_m3814361158 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___labels, int32_t ___distanceType, int32_t ___maskSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::distanceTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_distanceTransform_m2432367405 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___distanceType, int32_t ___maskSize, int32_t ___dstType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::distanceTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_distanceTransform_m323980778 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___distanceType, int32_t ___maskSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::drawContours(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,System.Int32,OpenCVForUnity.Scalar,System.Int32,System.Int32,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Point)
extern "C"  void Imgproc_drawContours_m1053528390 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, List_1_t894138661 * ___contours, int32_t ___contourIdx, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, Mat_t1174969555 * ___hierarchy, int32_t ___maxLevel, Point_t1252185347 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::drawContours(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,System.Int32,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_drawContours_m2075485390 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, List_1_t894138661 * ___contours, int32_t ___contourIdx, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::drawContours(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_drawContours_m723849897 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, List_1_t894138661 * ___contours, int32_t ___contourIdx, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::drawMarker(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_drawMarker_m2628303670 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___position, Scalar_t3645537183 * ___color, int32_t ___markerType, int32_t ___markerSize, int32_t ___thickness, int32_t ___line_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::drawMarker(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_drawMarker_m591312758 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___position, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Size,System.Double,System.Double,System.Double,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_ellipse_m3428116399 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___center, Size_t1177469876 * ___axes, double ___angle, double ___startAngle, double ___endAngle, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Size,System.Double,System.Double,System.Double,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_ellipse_m2056378127 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___center, Size_t1177469876 * ___axes, double ___angle, double ___startAngle, double ___endAngle, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Size,System.Double,System.Double,System.Double,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_ellipse_m1360464584 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___center, Size_t1177469876 * ___axes, double ___angle, double ___startAngle, double ___endAngle, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse(OpenCVForUnity.Mat,OpenCVForUnity.RotatedRect,OpenCVForUnity.Scalar,System.Int32,System.Int32)
extern "C"  void Imgproc_ellipse_m4001388561 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, RotatedRect_t415848288 * ___box, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse(OpenCVForUnity.Mat,OpenCVForUnity.RotatedRect,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_ellipse_m1633750662 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, RotatedRect_t415848288 * ___box, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse(OpenCVForUnity.Mat,OpenCVForUnity.RotatedRect,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_ellipse_m3828350449 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, RotatedRect_t415848288 * ___box, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::ellipse2Poly(OpenCVForUnity.Point,OpenCVForUnity.Size,System.Int32,System.Int32,System.Int32,System.Int32,OpenCVForUnity.MatOfPoint)
extern "C"  void Imgproc_ellipse2Poly_m188913638 (Il2CppObject * __this /* static, unused */, Point_t1252185347 * ___center, Size_t1177469876 * ___axes, int32_t ___angle, int32_t ___arcStart, int32_t ___arcEnd, int32_t ___delta, MatOfPoint_t97179692 * ___pts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::equalizeHist(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_equalizeHist_m1026700423 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::erode(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_erode_m645785801 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, int32_t ___iterations, int32_t ___borderType, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::erode(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32)
extern "C"  void Imgproc_erode_m2913201225 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::erode(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_erode_m3465201997 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___kernel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::fillConvexPoly(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,OpenCVForUnity.Scalar,System.Int32,System.Int32)
extern "C"  void Imgproc_fillConvexPoly_m1617026913 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, MatOfPoint_t97179692 * ___points, Scalar_t3645537183 * ___color, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::fillConvexPoly(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_fillConvexPoly_m1375996225 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, MatOfPoint_t97179692 * ___points, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::fillPoly(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,OpenCVForUnity.Scalar,System.Int32,System.Int32,OpenCVForUnity.Point)
extern "C"  void Imgproc_fillPoly_m1099987209 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t894138661 * ___pts, Scalar_t3645537183 * ___color, int32_t ___lineType, int32_t ___shift, Point_t1252185347 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::fillPoly(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_fillPoly_m3958439378 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t894138661 * ___pts, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::filter2D(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Double,System.Int32)
extern "C"  void Imgproc_filter2D_m3784343059 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::filter2D(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Double)
extern "C"  void Imgproc_filter2D_m2747354436 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::filter2D(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  void Imgproc_filter2D_m4088301971 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Mat_t1174969555 * ___kernel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::findContours(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.Point)
extern "C"  void Imgproc_findContours_m3828110116 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, List_1_t894138661 * ___contours, Mat_t1174969555 * ___hierarchy, int32_t ___mode, int32_t ___method, Point_t1252185347 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::findContours(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_findContours_m259652535 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, List_1_t894138661 * ___contours, Mat_t1174969555 * ___hierarchy, int32_t ___mode, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::fitLine(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_fitLine_m3941647215 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___points, Mat_t1174969555 * ___line, int32_t ___distType, double ___param, double ___reps, double ___aeps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::getDerivKernels(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  void Imgproc_getDerivKernels_m1481340638 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___kx, Mat_t1174969555 * ___ky, int32_t ___dx, int32_t ___dy, int32_t ___ksize, bool ___normalize, int32_t ___ktype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::getDerivKernels(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_getDerivKernels_m3080525924 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___kx, Mat_t1174969555 * ___ky, int32_t ___dx, int32_t ___dy, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::getRectSubPix(OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Point,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_getRectSubPix_m3123751486 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Size_t1177469876 * ___patchSize, Point_t1252185347 * ___center, Mat_t1174969555 * ___patch, int32_t ___patchType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::getRectSubPix(OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Point,OpenCVForUnity.Mat)
extern "C"  void Imgproc_getRectSubPix_m3835017017 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Size_t1177469876 * ___patchSize, Point_t1252185347 * ___center, Mat_t1174969555 * ___patch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::goodFeaturesToTrack(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,System.Int32,System.Double,System.Double,OpenCVForUnity.Mat,System.Int32,System.Boolean,System.Double)
extern "C"  void Imgproc_goodFeaturesToTrack_m3596141580 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, MatOfPoint_t97179692 * ___corners, int32_t ___maxCorners, double ___qualityLevel, double ___minDistance, Mat_t1174969555 * ___mask, int32_t ___blockSize, bool ___useHarrisDetector, double ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::goodFeaturesToTrack(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_goodFeaturesToTrack_m2004106945 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, MatOfPoint_t97179692 * ___corners, int32_t ___maxCorners, double ___qualityLevel, double ___minDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::grabCut(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_grabCut_m1019752046 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Mat_t1174969555 * ___mask, Rect_t1177435543 * ___rect, Mat_t1174969555 * ___bgdModel, Mat_t1174969555 * ___fgdModel, int32_t ___iterCount, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::grabCut(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_grabCut_m4012582153 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Mat_t1174969555 * ___mask, Rect_t1177435543 * ___rect, Mat_t1174969555 * ___bgdModel, Mat_t1174969555 * ___fgdModel, int32_t ___iterCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::initUndistortRectifyMap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_initUndistortRectifyMap_m4096333910 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, Mat_t1174969555 * ___R, Mat_t1174969555 * ___newCameraMatrix, Size_t1177469876 * ___size, int32_t ___m1type, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::integral3(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_integral3_m3957235066 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___sum, Mat_t1174969555 * ___sqsum, Mat_t1174969555 * ___tilted, int32_t ___sdepth, int32_t ___sqdepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::integral3(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_integral3_m878818458 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___sum, Mat_t1174969555 * ___sqsum, Mat_t1174969555 * ___tilted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::integral2(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_integral2_m991791504 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___sum, Mat_t1174969555 * ___sqsum, int32_t ___sdepth, int32_t ___sqdepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::integral2(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_integral2_m1162645552 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___sum, Mat_t1174969555 * ___sqsum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::integral(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_integral_m594589050 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___sum, int32_t ___sdepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::integral(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_integral_m3732413053 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___sum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::invertAffineTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_invertAffineTransform_m1195782634 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___M, Mat_t1174969555 * ___iM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::line(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_line_m2521953062 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::line(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_line_m2236533062 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::line(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_line_m315214641 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::linearPolar(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Double,System.Int32)
extern "C"  void Imgproc_linearPolar_m1591062056 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Point_t1252185347 * ___center, double ___maxRadius, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::logPolar(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Double,System.Int32)
extern "C"  void Imgproc_logPolar_m2437414543 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Point_t1252185347 * ___center, double ___M, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::matchTemplate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  void Imgproc_matchTemplate_m2104012093 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___templ, Mat_t1174969555 * ___result, int32_t ___method, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::matchTemplate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_matchTemplate_m2337143086 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___templ, Mat_t1174969555 * ___result, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::medianBlur(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_medianBlur_m569498847 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::minEnclosingCircle(OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Point,System.Single[])
extern "C"  void Imgproc_minEnclosingCircle_m940024069 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___points, Point_t1252185347 * ___center, SingleU5BU5D_t1219431280* ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::morphologyEx(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_morphologyEx_m2294517608 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___op, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, int32_t ___iterations, int32_t ___borderType, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::morphologyEx(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Int32)
extern "C"  void Imgproc_morphologyEx_m4176815626 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___op, Mat_t1174969555 * ___kernel, Point_t1252185347 * ___anchor, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::morphologyEx(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  void Imgproc_morphologyEx_m893502286 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___op, Mat_t1174969555 * ___kernel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::polylines(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,System.Boolean,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_polylines_m3373044490 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t894138661 * ___pts, bool ___isClosed, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::polylines(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,System.Boolean,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_polylines_m2618261034 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t894138661 * ___pts, bool ___isClosed, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::polylines(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,System.Boolean,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_polylines_m2450584525 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, List_1_t894138661 * ___pts, bool ___isClosed, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::preCornerDetect(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_preCornerDetect_m785084614 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::preCornerDetect(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_preCornerDetect_m3327325105 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::putText(OpenCVForUnity.Mat,System.String,OpenCVForUnity.Point,System.Int32,System.Double,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Boolean)
extern "C"  void Imgproc_putText_m3107179720 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, String_t* ___text, Point_t1252185347 * ___org, int32_t ___fontFace, double ___fontScale, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, bool ___bottomLeftOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::putText(OpenCVForUnity.Mat,System.String,OpenCVForUnity.Point,System.Int32,System.Double,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_putText_m3606967810 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, String_t* ___text, Point_t1252185347 * ___org, int32_t ___fontFace, double ___fontScale, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::putText(OpenCVForUnity.Mat,System.String,OpenCVForUnity.Point,System.Int32,System.Double,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_putText_m2261032181 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, String_t* ___text, Point_t1252185347 * ___org, int32_t ___fontFace, double ___fontScale, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrDown(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Imgproc_pyrDown_m272807547 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___dstsize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrDown(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size)
extern "C"  void Imgproc_pyrDown_m349408220 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___dstsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrDown(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_pyrDown_m871059638 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrMeanShiftFiltering(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,OpenCVForUnity.TermCriteria)
extern "C"  void Imgproc_pyrMeanShiftFiltering_m251881520 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sp, double ___sr, int32_t ___maxLevel, TermCriteria_t3969392542 * ___termcrit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrMeanShiftFiltering(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Imgproc_pyrMeanShiftFiltering_m4059975939 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sp, double ___sr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrUp(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Imgproc_pyrUp_m3944824500 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___dstsize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrUp(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size)
extern "C"  void Imgproc_pyrUp_m742333187 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___dstsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::pyrUp(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_pyrUp_m2840770909 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::rectangle(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_rectangle_m955176195 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::rectangle(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Imgproc_rectangle_m3913270627 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::rectangle(OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_rectangle_m3124782068 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img, Point_t1252185347 * ___pt1, Point_t1252185347 * ___pt2, Scalar_t3645537183 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::remap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_remap_m65295635 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, int32_t ___interpolation, int32_t ___borderMode, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::remap(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_remap_m1086934079 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___map1, Mat_t1174969555 * ___map2, int32_t ___interpolation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::resize(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_resize_m2219454756 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___dsize, double ___fx, double ___fy, int32_t ___interpolation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::resize(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size)
extern "C"  void Imgproc_resize_m3286882587 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Size_t1177469876 * ___dsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::sepFilter2D(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Double,System.Int32)
extern "C"  void Imgproc_sepFilter2D_m2559889918 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Mat_t1174969555 * ___kernelX, Mat_t1174969555 * ___kernelY, Point_t1252185347 * ___anchor, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::sepFilter2D(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,System.Double)
extern "C"  void Imgproc_sepFilter2D_m1472984953 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Mat_t1174969555 * ___kernelX, Mat_t1174969555 * ___kernelY, Point_t1252185347 * ___anchor, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::sepFilter2D(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_sepFilter2D_m2902491006 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___ddepth, Mat_t1174969555 * ___kernelX, Mat_t1174969555 * ___kernelY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::spatialGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Imgproc_spatialGradient_m2080903134 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dx, Mat_t1174969555 * ___dy, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::spatialGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Imgproc_spatialGradient_m948546969 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dx, Mat_t1174969555 * ___dy, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::spatialGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_spatialGradient_m305355774 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dx, Mat_t1174969555 * ___dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::sqrBoxFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Point,System.Boolean,System.Int32)
extern "C"  void Imgproc_sqrBoxFilter_m1017837874 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____src, Mat_t1174969555 * ____dst, int32_t ___ddepth, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, bool ___normalize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::sqrBoxFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Point,System.Boolean)
extern "C"  void Imgproc_sqrBoxFilter_m2118265797 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____src, Mat_t1174969555 * ____dst, int32_t ___ddepth, Size_t1177469876 * ___ksize, Point_t1252185347 * ___anchor, bool ___normalize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::sqrBoxFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Size)
extern "C"  void Imgproc_sqrBoxFilter_m2674448803 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ____src, Mat_t1174969555 * ____dst, int32_t ___ddepth, Size_t1177469876 * ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::undistort(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_undistort_m925948188 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, Mat_t1174969555 * ___newCameraMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::undistort(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_undistort_m784896943 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::undistortPoints(OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_undistortPoints_m3008374016 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___src, MatOfPoint2f_t580066400 * ___dst, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, Mat_t1174969555 * ___R, Mat_t1174969555 * ___P, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::undistortPoints(OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_undistortPoints_m1630137056 (Il2CppObject * __this /* static, unused */, MatOfPoint2f_t580066400 * ___src, MatOfPoint2f_t580066400 * ___dst, Mat_t1174969555 * ___cameraMatrix, Mat_t1174969555 * ___distCoeffs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::warpAffine(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_warpAffine_m643057226 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___M, Size_t1177469876 * ___dsize, int32_t ___flags, int32_t ___borderMode, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::warpAffine(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Imgproc_warpAffine_m3043598952 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___M, Size_t1177469876 * ___dsize, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::warpAffine(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size)
extern "C"  void Imgproc_warpAffine_m152748751 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___M, Size_t1177469876 * ___dsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::warpPerspective(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Imgproc_warpPerspective_m440635103 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___M, Size_t1177469876 * ___dsize, int32_t ___flags, int32_t ___borderMode, Scalar_t3645537183 * ___borderValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::warpPerspective(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Imgproc_warpPerspective_m3468760563 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___M, Size_t1177469876 * ___dsize, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::warpPerspective(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size)
extern "C"  void Imgproc_warpPerspective_m1880582500 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___M, Size_t1177469876 * ___dsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::watershed(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Imgproc_watershed_m3945389622 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, Mat_t1174969555 * ___markers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.Imgproc::getTextSize(System.String,System.Int32,System.Double,System.Int32,System.Int32[])
extern "C"  Size_t1177469876 * Imgproc_getTextSize_m2357056075 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___fontFace, double ___fontScale, int32_t ___thickness, Int32U5BU5D_t1809983122* ___baseLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getAffineTransform_10(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getAffineTransform_10_m3932853335 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getDefaultNewCameraMatrix_10(System.IntPtr,System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getDefaultNewCameraMatrix_10_m3872690002 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraMatrix_nativeObj, double ___imgsize_width, double ___imgsize_height, bool ___centerPrincipalPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getDefaultNewCameraMatrix_11(System.IntPtr)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getDefaultNewCameraMatrix_11_m2791439666 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraMatrix_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getGaborKernel_10(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getGaborKernel_10_m2553598973 (Il2CppObject * __this /* static, unused */, double ___ksize_width, double ___ksize_height, double ___sigma, double ___theta, double ___lambd, double ___gamma, double ___psi, int32_t ___ktype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getGaborKernel_11(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getGaborKernel_11_m3573362109 (Il2CppObject * __this /* static, unused */, double ___ksize_width, double ___ksize_height, double ___sigma, double ___theta, double ___lambd, double ___gamma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getGaussianKernel_10(System.Int32,System.Double,System.Int32)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getGaussianKernel_10_m1237050940 (Il2CppObject * __this /* static, unused */, int32_t ___ksize, double ___sigma, int32_t ___ktype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getGaussianKernel_11(System.Int32,System.Double)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getGaussianKernel_11_m101890812 (Il2CppObject * __this /* static, unused */, int32_t ___ksize, double ___sigma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getPerspectiveTransform_10(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getPerspectiveTransform_10_m861056492 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getRotationMatrix2D_10(System.Double,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getRotationMatrix2D_10_m3814252321 (Il2CppObject * __this /* static, unused */, double ___center_x, double ___center_y, double ___angle, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getStructuringElement_10(System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getStructuringElement_10_m4003995867 (Il2CppObject * __this /* static, unused */, int32_t ___shape, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_getStructuringElement_11(System.Int32,System.Double,System.Double)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_getStructuringElement_11_m2058433060 (Il2CppObject * __this /* static, unused */, int32_t ___shape, double ___ksize_width, double ___ksize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_moments_10(System.IntPtr,System.Boolean,System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_moments_10_m1745576503 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array_nativeObj, bool ___binaryImage, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_moments_11(System.IntPtr,System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_moments_11_m3481670745 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_phaseCorrelate_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double[],System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_phaseCorrelate_10_m997980721 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___window_nativeObj, DoubleU5BU5D_t1048280995* ___response_out, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_phaseCorrelate_11(System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_phaseCorrelate_11_m3310044648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_createCLAHE_10(System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_createCLAHE_10_m3575738487 (Il2CppObject * __this /* static, unused */, double ___clipLimit, double ___tileGridSize_width, double ___tileGridSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_createCLAHE_11()
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_createCLAHE_11_m362126052 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_createLineSegmentDetector_10(System.Int32,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_createLineSegmentDetector_10_m3058234795 (Il2CppObject * __this /* static, unused */, int32_t ____refine, double ____scale, double ____sigma_scale, double ____quant, double ____ang_th, double ____log_eps, double ____density_th, int32_t ____n_bins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Imgproc::imgproc_Imgproc_createLineSegmentDetector_11()
extern "C"  IntPtr_t Imgproc_imgproc_Imgproc_createLineSegmentDetector_11_m288036788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_boundingRect_10(System.IntPtr,System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_boundingRect_10_m103125503 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_mat_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_fitEllipse_10(System.IntPtr,System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_fitEllipse_10_m3295873956 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_mat_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_minAreaRect_10(System.IntPtr,System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_minAreaRect_10_m2764447370 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_mat_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgproc::imgproc_Imgproc_clipLine_10(System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Double[],System.Double,System.Double,System.Double[])
extern "C"  bool Imgproc_imgproc_Imgproc_clipLine_10_m113474795 (Il2CppObject * __this /* static, unused */, int32_t ___imgRect_x, int32_t ___imgRect_y, int32_t ___imgRect_width, int32_t ___imgRect_height, double ___pt1_x, double ___pt1_y, DoubleU5BU5D_t1048280995* ___pt1_out, double ___pt2_x, double ___pt2_y, DoubleU5BU5D_t1048280995* ___pt2_out, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Imgproc::imgproc_Imgproc_isContourConvex_10(System.IntPtr)
extern "C"  bool Imgproc_imgproc_Imgproc_isContourConvex_10_m199581072 (Il2CppObject * __this /* static, unused */, IntPtr_t ___contour_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_arcLength_10(System.IntPtr,System.Boolean)
extern "C"  double Imgproc_imgproc_Imgproc_arcLength_10_m2076433531 (Il2CppObject * __this /* static, unused */, IntPtr_t ___curve_mat_nativeObj, bool ___closed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_compareHist_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  double Imgproc_imgproc_Imgproc_compareHist_10_m715234776 (Il2CppObject * __this /* static, unused */, IntPtr_t ___H1_nativeObj, IntPtr_t ___H2_nativeObj, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_contourArea_10(System.IntPtr,System.Boolean)
extern "C"  double Imgproc_imgproc_Imgproc_contourArea_10_m643995884 (Il2CppObject * __this /* static, unused */, IntPtr_t ___contour_nativeObj, bool ___oriented, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_contourArea_11(System.IntPtr)
extern "C"  double Imgproc_imgproc_Imgproc_contourArea_11_m2547075152 (Il2CppObject * __this /* static, unused */, IntPtr_t ___contour_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_matchShapes_10(System.IntPtr,System.IntPtr,System.Int32,System.Double)
extern "C"  double Imgproc_imgproc_Imgproc_matchShapes_10_m2278175972 (Il2CppObject * __this /* static, unused */, IntPtr_t ___contour1_nativeObj, IntPtr_t ___contour2_nativeObj, int32_t ___method, double ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_minEnclosingTriangle_10(System.IntPtr,System.IntPtr)
extern "C"  double Imgproc_imgproc_Imgproc_minEnclosingTriangle_10_m1054768208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_nativeObj, IntPtr_t ___triangle_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_pointPolygonTest_10(System.IntPtr,System.Double,System.Double,System.Boolean)
extern "C"  double Imgproc_imgproc_Imgproc_pointPolygonTest_10_m3642099305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___contour_mat_nativeObj, double ___pt_x, double ___pt_y, bool ___measureDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Imgproc::imgproc_Imgproc_threshold_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  double Imgproc_imgproc_Imgproc_threshold_10_m781136348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___thresh, double ___maxval, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::imgproc_Imgproc_initWideAngleProjMap_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.IntPtr,System.IntPtr,System.Int32,System.Double)
extern "C"  float Imgproc_imgproc_Imgproc_initWideAngleProjMap_10_m3451069177 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, double ___imageSize_width, double ___imageSize_height, int32_t ___destImageWidth, int32_t ___m1type, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, int32_t ___projType, double ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::imgproc_Imgproc_initWideAngleProjMap_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  float Imgproc_imgproc_Imgproc_initWideAngleProjMap_11_m1487375289 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, double ___imageSize_width, double ___imageSize_height, int32_t ___destImageWidth, int32_t ___m1type, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::imgproc_Imgproc_intersectConvexConvex_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  float Imgproc_imgproc_Imgproc_intersectConvexConvex_10_m2122546835 (Il2CppObject * __this /* static, unused */, IntPtr_t ____p1_nativeObj, IntPtr_t ____p2_nativeObj, IntPtr_t ____p12_nativeObj, bool ___handleNested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Imgproc::imgproc_Imgproc_intersectConvexConvex_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float Imgproc_imgproc_Imgproc_intersectConvexConvex_11_m1211577609 (Il2CppObject * __this /* static, unused */, IntPtr_t ____p1_nativeObj, IntPtr_t ____p2_nativeObj, IntPtr_t ____p12_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_connectedComponents_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t Imgproc_imgproc_Imgproc_connectedComponents_10_m1903845772 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___labels_nativeObj, int32_t ___connectivity, int32_t ___ltype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_connectedComponents_11(System.IntPtr,System.IntPtr)
extern "C"  int32_t Imgproc_imgproc_Imgproc_connectedComponents_11_m1329993419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___labels_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_connectedComponentsWithStats_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t Imgproc_imgproc_Imgproc_connectedComponentsWithStats_10_m591134095 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___labels_nativeObj, IntPtr_t ___stats_nativeObj, IntPtr_t ___centroids_nativeObj, int32_t ___connectivity, int32_t ___ltype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_connectedComponentsWithStats_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t Imgproc_imgproc_Imgproc_connectedComponentsWithStats_11_m2997197838 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___labels_nativeObj, IntPtr_t ___stats_nativeObj, IntPtr_t ___centroids_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_floodFill_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double[],System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  int32_t Imgproc_imgproc_Imgproc_floodFill_10_m3113840167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___mask_nativeObj, double ___seedPoint_x, double ___seedPoint_y, double ___newVal_val0, double ___newVal_val1, double ___newVal_val2, double ___newVal_val3, DoubleU5BU5D_t1048280995* ___rect_out, double ___loDiff_val0, double ___loDiff_val1, double ___loDiff_val2, double ___loDiff_val3, double ___upDiff_val0, double ___upDiff_val1, double ___upDiff_val2, double ___upDiff_val3, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_floodFill_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  int32_t Imgproc_imgproc_Imgproc_floodFill_11_m29770325 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___mask_nativeObj, double ___seedPoint_x, double ___seedPoint_y, double ___newVal_val0, double ___newVal_val1, double ___newVal_val2, double ___newVal_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Imgproc::imgproc_Imgproc_rotatedRectangleIntersection_10(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  int32_t Imgproc_imgproc_Imgproc_rotatedRectangleIntersection_10_m1416385554 (Il2CppObject * __this /* static, unused */, double ___rect1_center_x, double ___rect1_center_y, double ___rect1_size_width, double ___rect1_size_height, double ___rect1_angle, double ___rect2_center_x, double ___rect2_center_y, double ___rect2_size_width, double ___rect2_size_height, double ___rect2_angle, IntPtr_t ___intersectingRegion_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Canny_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_Canny_10_m3736405556 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___edges_nativeObj, double ___threshold1, double ___threshold2, int32_t ___apertureSize, bool ___L2gradient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Canny_11(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_Canny_11_m2636275853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___edges_nativeObj, double ___threshold1, double ___threshold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_GaussianBlur_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_GaussianBlur_10_m1948447578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___ksize_width, double ___ksize_height, double ___sigmaX, double ___sigmaY, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_GaussianBlur_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_GaussianBlur_11_m4248310588 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___ksize_width, double ___ksize_height, double ___sigmaX, double ___sigmaY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_GaussianBlur_12(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_GaussianBlur_12_m3570733983 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___ksize_width, double ___ksize_height, double ___sigmaX, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HoughCircles_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_HoughCircles_10_m4154830568 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___circles_nativeObj, int32_t ___method, double ___dp, double ___minDist, double ___param1, double ___param2, int32_t ___minRadius, int32_t ___maxRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HoughCircles_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_HoughCircles_11_m3158367953 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___circles_nativeObj, int32_t ___method, double ___dp, double ___minDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HoughLines_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_HoughLines_10_m1647074036 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___lines_nativeObj, double ___rho, double ___theta, int32_t ___threshold, double ___srn, double ___stn, double ___min_theta, double ___max_theta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HoughLines_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_HoughLines_11_m3943239237 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___lines_nativeObj, double ___rho, double ___theta, int32_t ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HoughLinesP_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_HoughLinesP_10_m1110303132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___lines_nativeObj, double ___rho, double ___theta, int32_t ___threshold, double ___minLineLength, double ___maxLineGap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HoughLinesP_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_HoughLinesP_11_m4094309093 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___lines_nativeObj, double ___rho, double ___theta, int32_t ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_HuMoments_10(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_HuMoments_10_m1377557387 (Il2CppObject * __this /* static, unused */, double ___m_m00, double ___m_m10, double ___m_m01, double ___m_m20, double ___m_m11, double ___m_m02, double ___m_m30, double ___m_m21, double ___m_m12, double ___m_m03, IntPtr_t ___hu_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Laplacian_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_Laplacian_10_m478089601 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___ksize, double ___scale, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Laplacian_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_Laplacian_11_m3200327029 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___ksize, double ___scale, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Laplacian_12(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_Laplacian_12_m2876029659 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Scharr_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_Scharr_10_m3628274236 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, double ___scale, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Scharr_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_Scharr_11_m364600956 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, double ___scale, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Scharr_12(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_Scharr_12_m2338298885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Sobel_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_Sobel_10_m27061399 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, int32_t ___ksize, double ___scale, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Sobel_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_Sobel_11_m1166716383 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, int32_t ___ksize, double ___scale, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_Sobel_12(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_Sobel_12_m2542019569 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, int32_t ___dx, int32_t ___dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulate_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulate_10_m1523495099 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulate_11(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulate_11_m442503564 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulateProduct_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulateProduct_10_m850648260 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulateProduct_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulateProduct_11_m1449709333 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulateSquare_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulateSquare_10_m2560248760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulateSquare_11(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulateSquare_11_m3174693705 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulateWeighted_10(System.IntPtr,System.IntPtr,System.Double,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_accumulateWeighted_10_m4143300654 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___alpha, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_accumulateWeighted_11(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_accumulateWeighted_11_m2592248831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_adaptiveThreshold_10(System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_adaptiveThreshold_10_m1833709351 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___maxValue, int32_t ___adaptiveMethod, int32_t ___thresholdType, int32_t ___blockSize, double ___C, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_applyColorMap_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_applyColorMap_10_m149439125 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___colormap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_approxPolyDP_10(System.IntPtr,System.IntPtr,System.Double,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_approxPolyDP_10_m4182510596 (Il2CppObject * __this /* static, unused */, IntPtr_t ___curve_mat_nativeObj, IntPtr_t ___approxCurve_mat_nativeObj, double ___epsilon, bool ___closed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_arrowedLine_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_arrowedLine_10_m175580618 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___line_type, int32_t ___shift, double ___tipLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_arrowedLine_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_arrowedLine_11_m1682470248 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_bilateralFilter_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_bilateralFilter_10_m1394432203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_bilateralFilter_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_bilateralFilter_11_m1761286861 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___d, double ___sigmaColor, double ___sigmaSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_blur_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_blur_10_m880913205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_blur_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_blur_11_m3139744641 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_blur_12(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_blur_12_m2530984488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___ksize_width, double ___ksize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_boxFilter_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Boolean,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_boxFilter_10_m1047473507 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, bool ___normalize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_boxFilter_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_boxFilter_11_m1607543315 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, bool ___normalize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_boxFilter_12(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_boxFilter_12_m3989021299 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, double ___ksize_width, double ___ksize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_boxPoints_10(System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_boxPoints_10_m1781198567 (Il2CppObject * __this /* static, unused */, double ___box_center_x, double ___box_center_y, double ___box_size_width, double ___box_size_height, double ___box_angle, IntPtr_t ___points_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_calcBackProject_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_calcBackProject_10_m784331710 (Il2CppObject * __this /* static, unused */, IntPtr_t ___images_mat_nativeObj, IntPtr_t ___channels_mat_nativeObj, IntPtr_t ___hist_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___ranges_mat_nativeObj, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_calcHist_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_calcHist_10_m369141091 (Il2CppObject * __this /* static, unused */, IntPtr_t ___images_mat_nativeObj, IntPtr_t ___channels_mat_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___hist_nativeObj, IntPtr_t ___histSize_mat_nativeObj, IntPtr_t ___ranges_mat_nativeObj, bool ___accumulate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_calcHist_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_calcHist_11_m2411733369 (Il2CppObject * __this /* static, unused */, IntPtr_t ___images_mat_nativeObj, IntPtr_t ___channels_mat_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___hist_nativeObj, IntPtr_t ___histSize_mat_nativeObj, IntPtr_t ___ranges_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_circle_10(System.IntPtr,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_circle_10_m3915067221 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___center_x, double ___center_y, int32_t ___radius, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_circle_11(System.IntPtr,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_circle_11_m1491687892 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___center_x, double ___center_y, int32_t ___radius, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_circle_12(System.IntPtr,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_circle_12_m4081221092 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___center_x, double ___center_y, int32_t ___radius, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_convertMaps_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_convertMaps_10_m788812103 (Il2CppObject * __this /* static, unused */, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, IntPtr_t ___dstmap1_nativeObj, IntPtr_t ___dstmap2_nativeObj, int32_t ___dstmap1type, bool ___nninterpolation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_convertMaps_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_convertMaps_11_m2336823991 (Il2CppObject * __this /* static, unused */, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, IntPtr_t ___dstmap1_nativeObj, IntPtr_t ___dstmap2_nativeObj, int32_t ___dstmap1type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_convexHull_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_convexHull_10_m2849144382 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_mat_nativeObj, IntPtr_t ___hull_mat_nativeObj, bool ___clockwise, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_convexHull_11(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_convexHull_11_m2957801214 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_mat_nativeObj, IntPtr_t ___hull_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_convexityDefects_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_convexityDefects_10_m1298288724 (Il2CppObject * __this /* static, unused */, IntPtr_t ___contour_mat_nativeObj, IntPtr_t ___convexhull_mat_nativeObj, IntPtr_t ___convexityDefects_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerEigenValsAndVecs_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cornerEigenValsAndVecs_10_m1252257599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerEigenValsAndVecs_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cornerEigenValsAndVecs_11_m1472706423 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerHarris_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cornerHarris_10_m2089085752 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, int32_t ___ksize, double ___k, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerHarris_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_cornerHarris_11_m36292766 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, int32_t ___ksize, double ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerMinEigenVal_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cornerMinEigenVal_10_m2881988522 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerMinEigenVal_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cornerMinEigenVal_11_m2617879852 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerMinEigenVal_12(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cornerMinEigenVal_12_m741210188 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cornerSubPix_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_cornerSubPix_10_m3446632011 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___corners_mat_nativeObj, double ___winSize_width, double ___winSize_height, double ___zeroZone_width, double ___zeroZone_height, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_createHanningWindow_10(System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_createHanningWindow_10_m2175535541 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dst_nativeObj, double ___winSize_width, double ___winSize_height, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cvtColor_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cvtColor_10_m1830523693 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___code, int32_t ___dstCn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_cvtColor_11(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_cvtColor_11_m4216939691 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_demosaicing_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_demosaicing_10_m2959968658 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj, IntPtr_t ____dst_nativeObj, int32_t ___code, int32_t ___dcn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_demosaicing_11(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_demosaicing_11_m956165670 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj, IntPtr_t ____dst_nativeObj, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_dilate_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_dilate_10_m35592332 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, int32_t ___iterations, int32_t ___borderType, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_dilate_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_dilate_11_m3426356636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_dilate_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_dilate_12_m3098681090 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___kernel_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_distanceTransformWithLabels_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_distanceTransformWithLabels_10_m746127570 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___labels_nativeObj, int32_t ___distanceType, int32_t ___maskSize, int32_t ___labelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_distanceTransformWithLabels_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_distanceTransformWithLabels_11_m117481668 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___labels_nativeObj, int32_t ___distanceType, int32_t ___maskSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_distanceTransform_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_distanceTransform_10_m328461125 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___distanceType, int32_t ___maskSize, int32_t ___dstType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_distanceTransform_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_distanceTransform_11_m2628823473 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___distanceType, int32_t ___maskSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_drawContours_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_drawContours_10_m2968383234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___contours_mat_nativeObj, int32_t ___contourIdx, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, IntPtr_t ___hierarchy_nativeObj, int32_t ___maxLevel, double ___offset_x, double ___offset_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_drawContours_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_drawContours_11_m2593802519 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___contours_mat_nativeObj, int32_t ___contourIdx, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_drawContours_12(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_drawContours_12_m466625409 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___contours_mat_nativeObj, int32_t ___contourIdx, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_drawMarker_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_drawMarker_10_m2264150147 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___position_x, double ___position_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___markerType, int32_t ___markerSize, int32_t ___thickness, int32_t ___line_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_drawMarker_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_drawMarker_11_m1101875618 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___position_x, double ___position_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse_10_m214168440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___center_x, double ___center_y, double ___axes_width, double ___axes_height, double ___angle, double ___startAngle, double ___endAngle, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse_11_m990826841 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___center_x, double ___center_y, double ___axes_width, double ___axes_height, double ___angle, double ___startAngle, double ___endAngle, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse_12(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse_12_m2794677597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___center_x, double ___center_y, double ___axes_width, double ___axes_height, double ___angle, double ___startAngle, double ___endAngle, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse_13(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse_13_m2516898020 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___box_center_x, double ___box_center_y, double ___box_size_width, double ___box_size_height, double ___box_angle, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse_14(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse_14_m1229831060 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___box_center_x, double ___box_center_y, double ___box_size_width, double ___box_size_height, double ___box_angle, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse_15(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse_15_m1930300354 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___box_center_x, double ___box_center_y, double ___box_size_width, double ___box_size_height, double ___box_angle, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_ellipse2Poly_10(System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_ellipse2Poly_10_m3633388013 (Il2CppObject * __this /* static, unused */, double ___center_x, double ___center_y, double ___axes_width, double ___axes_height, int32_t ___angle, int32_t ___arcStart, int32_t ___arcEnd, int32_t ___delta, IntPtr_t ___pts_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_equalizeHist_10(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_equalizeHist_10_m2334943085 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_erode_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_erode_10_m5581236 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, int32_t ___iterations, int32_t ___borderType, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_erode_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_erode_11_m1519559540 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_erode_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_erode_12_m3810506282 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___kernel_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_fillConvexPoly_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_fillConvexPoly_10_m667944145 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___points_mat_nativeObj, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_fillConvexPoly_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_fillConvexPoly_11_m2248105296 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___points_mat_nativeObj, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_fillPoly_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_fillPoly_10_m1730633282 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pts_mat_nativeObj, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___lineType, int32_t ___shift, double ___offset_x, double ___offset_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_fillPoly_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_fillPoly_11_m259182345 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pts_mat_nativeObj, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_filter2D_10(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_filter2D_10_m1604095539 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_filter2D_11(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_filter2D_11_m3178741989 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_filter2D_12(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_filter2D_12_m3861071026 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, IntPtr_t ___kernel_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_findContours_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_findContours_10_m3019484707 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___contours_mat_nativeObj, IntPtr_t ___hierarchy_nativeObj, int32_t ___mode, int32_t ___method, double ___offset_x, double ___offset_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_findContours_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_findContours_11_m1119939914 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___contours_mat_nativeObj, IntPtr_t ___hierarchy_nativeObj, int32_t ___mode, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_fitLine_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_fitLine_10_m1645856747 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_nativeObj, IntPtr_t ___line_nativeObj, int32_t ___distType, double ___param, double ___reps, double ___aeps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_getDerivKernels_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_getDerivKernels_10_m3120710760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___kx_nativeObj, IntPtr_t ___ky_nativeObj, int32_t ___dx, int32_t ___dy, int32_t ___ksize, bool ___normalize, int32_t ___ktype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_getDerivKernels_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_getDerivKernels_11_m2017740911 (Il2CppObject * __this /* static, unused */, IntPtr_t ___kx_nativeObj, IntPtr_t ___ky_nativeObj, int32_t ___dx, int32_t ___dy, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_getRectSubPix_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_getRectSubPix_10_m2898351667 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, double ___patchSize_width, double ___patchSize_height, double ___center_x, double ___center_y, IntPtr_t ___patch_nativeObj, int32_t ___patchType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_getRectSubPix_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_getRectSubPix_11_m857015235 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, double ___patchSize_width, double ___patchSize_height, double ___center_x, double ___center_y, IntPtr_t ___patch_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_goodFeaturesToTrack_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.IntPtr,System.Int32,System.Boolean,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_goodFeaturesToTrack_10_m2872878126 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___corners_mat_nativeObj, int32_t ___maxCorners, double ___qualityLevel, double ___minDistance, IntPtr_t ___mask_nativeObj, int32_t ___blockSize, bool ___useHarrisDetector, double ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_goodFeaturesToTrack_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_goodFeaturesToTrack_11_m2564435359 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___corners_mat_nativeObj, int32_t ___maxCorners, double ___qualityLevel, double ___minDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_grabCut_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_grabCut_10_m2825787853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___mask_nativeObj, int32_t ___rect_x, int32_t ___rect_y, int32_t ___rect_width, int32_t ___rect_height, IntPtr_t ___bgdModel_nativeObj, IntPtr_t ___fgdModel_nativeObj, int32_t ___iterCount, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_grabCut_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_grabCut_11_m4223561739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___mask_nativeObj, int32_t ___rect_x, int32_t ___rect_y, int32_t ___rect_width, int32_t ___rect_height, IntPtr_t ___bgdModel_nativeObj, IntPtr_t ___fgdModel_nativeObj, int32_t ___iterCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_initUndistortRectifyMap_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_initUndistortRectifyMap_10_m299842846 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, IntPtr_t ___R_nativeObj, IntPtr_t ___newCameraMatrix_nativeObj, double ___size_width, double ___size_height, int32_t ___m1type, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_integral3_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_integral3_10_m2696126590 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___sum_nativeObj, IntPtr_t ___sqsum_nativeObj, IntPtr_t ___tilted_nativeObj, int32_t ___sdepth, int32_t ___sqdepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_integral3_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_integral3_11_m2219805629 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___sum_nativeObj, IntPtr_t ___sqsum_nativeObj, IntPtr_t ___tilted_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_integral2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_integral2_10_m1559731567 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___sum_nativeObj, IntPtr_t ___sqsum_nativeObj, int32_t ___sdepth, int32_t ___sqdepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_integral2_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_integral2_11_m2855839278 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___sum_nativeObj, IntPtr_t ___sqsum_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_integral_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_integral_10_m2821910016 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___sum_nativeObj, int32_t ___sdepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_integral_11(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_integral_11_m2698193878 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___sum_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_invertAffineTransform_10(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_invertAffineTransform_10_m3784301842 (Il2CppObject * __this /* static, unused */, IntPtr_t ___M_nativeObj, IntPtr_t ___iM_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_line_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_line_10_m401530310 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_line_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_line_11_m3099964007 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_line_12(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_line_12_m714878031 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_linearPolar_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_linearPolar_10_m2852341327 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___center_x, double ___center_y, double ___maxRadius, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_logPolar_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_logPolar_10_m2167111774 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___center_x, double ___center_y, double ___M, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_matchTemplate_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_matchTemplate_10_m467600061 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___templ_nativeObj, IntPtr_t ___result_nativeObj, int32_t ___method, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_matchTemplate_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_matchTemplate_11_m3743583344 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___templ_nativeObj, IntPtr_t ___result_nativeObj, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_medianBlur_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_medianBlur_10_m1072892219 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_minEnclosingCircle_10(System.IntPtr,System.Double[],System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_minEnclosingCircle_10_m3489075099 (Il2CppObject * __this /* static, unused */, IntPtr_t ___points_mat_nativeObj, DoubleU5BU5D_t1048280995* ___center_out, DoubleU5BU5D_t1048280995* ___radius_out, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_morphologyEx_10(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_morphologyEx_10_m1725500147 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___op, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, int32_t ___iterations, int32_t ___borderType, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_morphologyEx_11(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_morphologyEx_11_m1333206387 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___op, IntPtr_t ___kernel_nativeObj, double ___anchor_x, double ___anchor_y, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_morphologyEx_12(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_morphologyEx_12_m2118227181 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___op, IntPtr_t ___kernel_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_polylines_10(System.IntPtr,System.IntPtr,System.Boolean,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_polylines_10_m3771504024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pts_mat_nativeObj, bool ___isClosed, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_polylines_11(System.IntPtr,System.IntPtr,System.Boolean,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_polylines_11_m1681376343 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pts_mat_nativeObj, bool ___isClosed, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_polylines_12(System.IntPtr,System.IntPtr,System.Boolean,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_polylines_12_m1241281537 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, IntPtr_t ___pts_mat_nativeObj, bool ___isClosed, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_preCornerDetect_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_preCornerDetect_10_m1899055222 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_preCornerDetect_11(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_preCornerDetect_11_m2484718786 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_putText_10(System.IntPtr,System.String,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_putText_10_m4220271863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, String_t* ___text, double ___org_x, double ___org_y, int32_t ___fontFace, double ___fontScale, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, bool ___bottomLeftOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_putText_11(System.IntPtr,System.String,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_putText_11_m2775815632 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, String_t* ___text, double ___org_x, double ___org_y, int32_t ___fontFace, double ___fontScale, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_putText_12(System.IntPtr,System.String,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_putText_12_m3644546280 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, String_t* ___text, double ___org_x, double ___org_y, int32_t ___fontFace, double ___fontScale, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrDown_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_pyrDown_10_m245106649 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___dstsize_width, double ___dstsize_height, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrDown_11(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_pyrDown_11_m2936565981 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___dstsize_width, double ___dstsize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrDown_12(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_pyrDown_12_m4028462596 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrMeanShiftFiltering_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_pyrMeanShiftFiltering_10_m3654754378 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sp, double ___sr, int32_t ___maxLevel, int32_t ___termcrit_type, int32_t ___termcrit_maxCount, double ___termcrit_epsilon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrMeanShiftFiltering_11(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_pyrMeanShiftFiltering_11_m346125864 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sp, double ___sr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrUp_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_pyrUp_10_m1876038080 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___dstsize_width, double ___dstsize_height, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrUp_11(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_pyrUp_11_m3873790870 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___dstsize_width, double ___dstsize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_pyrUp_12(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_pyrUp_12_m1799585853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_rectangle_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_rectangle_10_m924685883 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, int32_t ___lineType, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_rectangle_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_rectangle_11_m993760028 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___thickness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_rectangle_12(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_rectangle_12_m931023226 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj, double ___pt1_x, double ___pt1_y, double ___pt2_x, double ___pt2_y, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_remap_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_remap_10_m2041147696 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, int32_t ___interpolation, int32_t ___borderMode, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_remap_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_remap_11_m1290798136 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___map1_nativeObj, IntPtr_t ___map2_nativeObj, int32_t ___interpolation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_resize_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_resize_10_m1150825736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___dsize_width, double ___dsize_height, double ___fx, double ___fy, int32_t ___interpolation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_resize_11(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_resize_11_m2978196438 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___dsize_width, double ___dsize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_sepFilter2D_10(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_sepFilter2D_10_m3776488403 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, IntPtr_t ___kernelX_nativeObj, IntPtr_t ___kernelY_nativeObj, double ___anchor_x, double ___anchor_y, double ___delta, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_sepFilter2D_11(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_sepFilter2D_11_m3903316357 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, IntPtr_t ___kernelX_nativeObj, IntPtr_t ___kernelY_nativeObj, double ___anchor_x, double ___anchor_y, double ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_sepFilter2D_12(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_sepFilter2D_12_m547870610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___ddepth, IntPtr_t ___kernelX_nativeObj, IntPtr_t ___kernelY_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_spatialGradient_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_spatialGradient_10_m4063013309 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dx_nativeObj, IntPtr_t ___dy_nativeObj, int32_t ___ksize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_spatialGradient_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_spatialGradient_11_m2781445723 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dx_nativeObj, IntPtr_t ___dy_nativeObj, int32_t ___ksize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_spatialGradient_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_spatialGradient_12_m997319003 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dx_nativeObj, IntPtr_t ___dy_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_sqrBoxFilter_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Boolean,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_sqrBoxFilter_10_m981690055 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj, IntPtr_t ____dst_nativeObj, int32_t ___ddepth, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, bool ___normalize, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_sqrBoxFilter_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  void Imgproc_imgproc_Imgproc_sqrBoxFilter_11_m1910996527 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj, IntPtr_t ____dst_nativeObj, int32_t ___ddepth, double ___ksize_width, double ___ksize_height, double ___anchor_x, double ___anchor_y, bool ___normalize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_sqrBoxFilter_12(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_sqrBoxFilter_12_m2527549399 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj, IntPtr_t ____dst_nativeObj, int32_t ___ddepth, double ___ksize_width, double ___ksize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_undistort_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_undistort_10_m3284416183 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, IntPtr_t ___newCameraMatrix_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_undistort_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_undistort_11_m2243030024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_undistortPoints_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_undistortPoints_10_m2371182728 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, IntPtr_t ___R_nativeObj, IntPtr_t ___P_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_undistortPoints_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_undistortPoints_11_m2236139275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, IntPtr_t ___cameraMatrix_nativeObj, IntPtr_t ___distCoeffs_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_warpAffine_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_warpAffine_10_m3432652264 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___M_nativeObj, double ___dsize_width, double ___dsize_height, int32_t ___flags, int32_t ___borderMode, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_warpAffine_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_warpAffine_11_m845889216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___M_nativeObj, double ___dsize_width, double ___dsize_height, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_warpAffine_12(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_warpAffine_12_m3611602006 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___M_nativeObj, double ___dsize_width, double ___dsize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_warpPerspective_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_warpPerspective_10_m1158788453 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___M_nativeObj, double ___dsize_width, double ___dsize_height, int32_t ___flags, int32_t ___borderMode, double ___borderValue_val0, double ___borderValue_val1, double ___borderValue_val2, double ___borderValue_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_warpPerspective_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Imgproc_imgproc_Imgproc_warpPerspective_11_m2079114531 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___M_nativeObj, double ___dsize_width, double ___dsize_height, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_warpPerspective_12(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Imgproc_imgproc_Imgproc_warpPerspective_12_m2113503507 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___M_nativeObj, double ___dsize_width, double ___dsize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_watershed_10(System.IntPtr,System.IntPtr)
extern "C"  void Imgproc_imgproc_Imgproc_watershed_10_m1501228102 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___markers_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Imgproc::imgproc_Imgproc_n_1getTextSize(System.String,System.Int32,System.Double,System.Int32,System.Int32[],System.Double[])
extern "C"  void Imgproc_imgproc_Imgproc_n_1getTextSize_m3159490262 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___fontFace, double ___fontScale, int32_t ___thickness, Int32U5BU5D_t1809983122* ___baseLine, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
