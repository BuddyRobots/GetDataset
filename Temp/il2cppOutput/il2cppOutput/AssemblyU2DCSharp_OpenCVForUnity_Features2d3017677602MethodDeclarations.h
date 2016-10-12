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

// OpenCVForUnity.Features2d
struct Features2d_t3017677602;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.MatOfKeyPoint
struct MatOfKeyPoint_t4231167579;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;
// OpenCVForUnity.MatOfDMatch
struct MatOfDMatch_t1750353259;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3217930354;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>
struct List_1_t2547312228;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfByte>
struct List_1_t4014889323;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfKeyPoint4231167579.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3645537183.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDMatch1750353259.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfByte3217930354.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Features2d::.ctor()
extern "C"  void Features2d__ctor_m3159759095 (Features2d_t3017677602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawKeypoints(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Features2d_drawKeypoints_m4147165500 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, MatOfKeyPoint_t4231167579 * ___keypoints, Mat_t1174969555 * ___outImage, Scalar_t3645537183 * ___color, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawKeypoints(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat)
extern "C"  void Features2d_drawKeypoints_m3997399904 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___image, MatOfKeyPoint_t4231167579 * ___keypoints, Mat_t1174969555 * ___outImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.MatOfDMatch,OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Scalar,OpenCVForUnity.MatOfByte,System.Int32)
extern "C"  void Features2d_drawMatches_m3068699723 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img1, MatOfKeyPoint_t4231167579 * ___keypoints1, Mat_t1174969555 * ___img2, MatOfKeyPoint_t4231167579 * ___keypoints2, MatOfDMatch_t1750353259 * ___matches1to2, Mat_t1174969555 * ___outImg, Scalar_t3645537183 * ___matchColor, Scalar_t3645537183 * ___singlePointColor, MatOfByte_t3217930354 * ___matchesMask, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.MatOfDMatch,OpenCVForUnity.Mat)
extern "C"  void Features2d_drawMatches_m225197290 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img1, MatOfKeyPoint_t4231167579 * ___keypoints1, Mat_t1174969555 * ___img2, MatOfKeyPoint_t4231167579 * ___keypoints2, MatOfDMatch_t1750353259 * ___matches1to2, Mat_t1174969555 * ___outImg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Scalar,System.Collections.Generic.List`1<OpenCVForUnity.MatOfByte>,System.Int32)
extern "C"  void Features2d_drawMatches2_m1723606773 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img1, MatOfKeyPoint_t4231167579 * ___keypoints1, Mat_t1174969555 * ___img2, MatOfKeyPoint_t4231167579 * ___keypoints2, List_1_t2547312228 * ___matches1to2, Mat_t1174969555 * ___outImg, Scalar_t3645537183 * ___matchColor, Scalar_t3645537183 * ___singlePointColor, List_1_t4014889323 * ___matchesMask, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,OpenCVForUnity.Mat)
extern "C"  void Features2d_drawMatches2_m1264106982 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___img1, MatOfKeyPoint_t4231167579 * ___keypoints1, Mat_t1174969555 * ___img2, MatOfKeyPoint_t4231167579 * ___keypoints2, List_1_t2547312228 * ___matches1to2, Mat_t1174969555 * ___outImg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawKeypoints_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Features2d_features2d_Features2d_drawKeypoints_10_m4045399108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___keypoints_mat_nativeObj, IntPtr_t ___outImage_nativeObj, double ___color_val0, double ___color_val1, double ___color_val2, double ___color_val3, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawKeypoints_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Features2d_features2d_Features2d_drawKeypoints_11_m1277074914 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj, IntPtr_t ___keypoints_mat_nativeObj, IntPtr_t ___outImage_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Features2d_features2d_Features2d_drawMatches_10_m3875985739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj, IntPtr_t ___keypoints1_mat_nativeObj, IntPtr_t ___img2_nativeObj, IntPtr_t ___keypoints2_mat_nativeObj, IntPtr_t ___matches1to2_mat_nativeObj, IntPtr_t ___outImg_nativeObj, double ___matchColor_val0, double ___matchColor_val1, double ___matchColor_val2, double ___matchColor_val3, double ___singlePointColor_val0, double ___singlePointColor_val1, double ___singlePointColor_val2, double ___singlePointColor_val3, IntPtr_t ___matchesMask_mat_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Features2d_features2d_Features2d_drawMatches_11_m3365256381 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj, IntPtr_t ___keypoints1_mat_nativeObj, IntPtr_t ___img2_nativeObj, IntPtr_t ___keypoints2_mat_nativeObj, IntPtr_t ___matches1to2_mat_nativeObj, IntPtr_t ___outImg_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Features2d_features2d_Features2d_drawMatches2_10_m2456194175 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj, IntPtr_t ___keypoints1_mat_nativeObj, IntPtr_t ___img2_nativeObj, IntPtr_t ___keypoints2_mat_nativeObj, IntPtr_t ___matches1to2_mat_nativeObj, IntPtr_t ___outImg_nativeObj, double ___matchColor_val0, double ___matchColor_val1, double ___matchColor_val2, double ___matchColor_val3, double ___singlePointColor_val0, double ___singlePointColor_val1, double ___singlePointColor_val2, double ___singlePointColor_val3, IntPtr_t ___matchesMask_mat_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches2_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Features2d_features2d_Features2d_drawMatches2_11_m170312201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj, IntPtr_t ___keypoints1_mat_nativeObj, IntPtr_t ___img2_nativeObj, IntPtr_t ___keypoints2_mat_nativeObj, IntPtr_t ___matches1to2_mat_nativeObj, IntPtr_t ___outImg_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
