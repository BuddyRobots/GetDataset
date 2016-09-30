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

// OpenCVForUnity.Core
struct Core_t1176998738;
// System.String
struct String_t;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3969392542;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// OpenCVForUnity.MatOfDouble
struct MatOfDouble_t1782331771;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t1517897931;
// OpenCVForUnity.Core/MinMaxLocResult
struct MinMaxLocResult_t2054552011;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3969392542.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3645537183.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDouble1782331771.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt1517897931.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Core::.ctor()
extern "C"  void Core__ctor_m1599384839 (Core_t1176998738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::.cctor()
extern "C"  void Core__cctor_m1854193542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Core::getVersion()
extern "C"  String_t* Core_getVersion_m3526051996 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Core::getNativeLibraryName()
extern "C"  String_t* Core_getNativeLibraryName_m2811069331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getVersionMajor()
extern "C"  int32_t Core_getVersionMajor_m3464539466 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getVersionMinor()
extern "C"  int32_t Core_getVersionMinor_m3697266758 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getVersionRevision()
extern "C"  int32_t Core_getVersionRevision_m2908341068 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Core::getVersionStatus()
extern "C"  String_t* Core_getVersionStatus_m3779520494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Scalar OpenCVForUnity.Core::mean(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Scalar_t3645537183 * Core_mean_m3442197606 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Scalar OpenCVForUnity.Core::mean(OpenCVForUnity.Mat)
extern "C"  Scalar_t3645537183 * Core_mean_m3141609637 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Scalar OpenCVForUnity.Core::sumElems(OpenCVForUnity.Mat)
extern "C"  Scalar_t3645537183 * Core_sumElems_m1424127257 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Scalar OpenCVForUnity.Core::trace(OpenCVForUnity.Mat)
extern "C"  Scalar_t3645537183 * Core_trace_m298974321 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mtx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Core::getBuildInformation()
extern "C"  String_t* Core_getBuildInformation_m1645369852 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::checkRange(OpenCVForUnity.Mat,System.Boolean,System.Double,System.Double)
extern "C"  bool Core_checkRange_m3775851922 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___a, bool ___quiet, double ___minVal, double ___maxVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::checkRange(OpenCVForUnity.Mat)
extern "C"  bool Core_checkRange_m1123181699 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::eigen(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool Core_eigen_m719833514 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___eigenvalues, Mat_t1174969555 * ___eigenvectors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::eigen(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool Core_eigen_m2029175265 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___eigenvalues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::solve(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  bool Core_solve_m250227706 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::solve(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool Core_solve_m1784681469 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::Mahalanobis(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Core_Mahalanobis_m1243897142 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___v1, Mat_t1174969555 * ___v2, Mat_t1174969555 * ___icovar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::PSNR(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Core_PSNR_m3126318917 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::determinant(OpenCVForUnity.Mat)
extern "C"  double Core_determinant_m3051951842 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mtx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::getTickFrequency()
extern "C"  double Core_getTickFrequency_m696795075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::invert(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  double Core_invert_m2965338817 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::invert(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Core_invert_m2882489814 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::kmeans(OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.TermCriteria,System.Int32,System.Int32,OpenCVForUnity.Mat)
extern "C"  double Core_kmeans_m3097352441 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, int32_t ___K, Mat_t1174969555 * ___bestLabels, TermCriteria_t3969392542 * ___criteria, int32_t ___attempts, int32_t ___flags, Mat_t1174969555 * ___centers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::kmeans(OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.TermCriteria,System.Int32,System.Int32)
extern "C"  double Core_kmeans_m1969147634 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, int32_t ___K, Mat_t1174969555 * ___bestLabels, TermCriteria_t3969392542 * ___criteria, int32_t ___attempts, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::norm(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  double Core_norm_m139232228 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, int32_t ___normType, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::norm(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  double Core_norm_m1508740583 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::norm(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Core_norm_m1573065968 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::norm(OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  double Core_norm_m1470096207 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, int32_t ___normType, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::norm(OpenCVForUnity.Mat,System.Int32)
extern "C"  double Core_norm_m3880708188 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::norm(OpenCVForUnity.Mat)
extern "C"  double Core_norm_m232185947 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::solvePoly(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  double Core_solvePoly_m982299012 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___coeffs, Mat_t1174969555 * ___roots, int32_t ___maxIters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::solvePoly(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Core_solvePoly_m320951859 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___coeffs, Mat_t1174969555 * ___roots, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Core::cubeRoot(System.Single)
extern "C"  float Core_cubeRoot_m1832235715 (Il2CppObject * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Core::fastAtan2(System.Single,System.Single)
extern "C"  float Core_fastAtan2_m4014374857 (Il2CppObject * __this /* static, unused */, float ___y, float ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::borderInterpolate(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Core_borderInterpolate_m2937377209 (Il2CppObject * __this /* static, unused */, int32_t ___p, int32_t ___len, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::countNonZero(OpenCVForUnity.Mat)
extern "C"  int32_t Core_countNonZero_m3006529242 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getNumThreads()
extern "C"  int32_t Core_getNumThreads_m159822924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getNumberOfCPUs()
extern "C"  int32_t Core_getNumberOfCPUs_m3947757044 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getOptimalDFTSize(System.Int32)
extern "C"  int32_t Core_getOptimalDFTSize_m1072053579 (Il2CppObject * __this /* static, unused */, int32_t ___vecsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::getThreadNum()
extern "C"  int32_t Core_getThreadNum_m1578233685 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::solveCubic(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t Core_solveCubic_m3713861036 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___coeffs, Mat_t1174969555 * ___roots, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Core::getCPUTickCount()
extern "C"  int64_t Core_getCPUTickCount_m3292369588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Core::getTickCount()
extern "C"  int64_t Core_getTickCount_m1054099210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::LUT(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_LUT_m419625205 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___lut, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::PCABackProject(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_PCABackProject_m1601459205 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, Mat_t1174969555 * ___mean, Mat_t1174969555 * ___eigenvectors, Mat_t1174969555 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::PCACompute(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_PCACompute_m614516583 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, Mat_t1174969555 * ___mean, Mat_t1174969555 * ___eigenvectors, double ___retainedVariance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::PCACompute(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_PCACompute_m4179841164 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, Mat_t1174969555 * ___mean, Mat_t1174969555 * ___eigenvectors, int32_t ___maxComponents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::PCACompute(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_PCACompute_m2483874347 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, Mat_t1174969555 * ___mean, Mat_t1174969555 * ___eigenvectors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::PCAProject(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_PCAProject_m183575934 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___data, Mat_t1174969555 * ___mean, Mat_t1174969555 * ___eigenvectors, Mat_t1174969555 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::SVBackSubst(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_SVBackSubst_m2361168961 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___w, Mat_t1174969555 * ___u, Mat_t1174969555 * ___vt, Mat_t1174969555 * ___rhs, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::SVDecomp(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_SVDecomp_m2090569185 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___w, Mat_t1174969555 * ___u, Mat_t1174969555 * ___vt, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::SVDecomp(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_SVDecomp_m942843574 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___w, Mat_t1174969555 * ___u, Mat_t1174969555 * ___vt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::absdiff(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_absdiff_m3320595329 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::absdiff(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_absdiff_m1555792943 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::add(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_add_m3480897463 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::add(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_add_m4277971232 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::add(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_add_m3393116715 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::add(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_add_m1939798737 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::add(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_add_m2305881030 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::add(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_add_m1671853381 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::addWeighted(OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,System.Double,System.Double,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_addWeighted_m3202532465 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, double ___alpha, Mat_t1174969555 * ___src2, double ___beta, double ___gamma, Mat_t1174969555 * ___dst, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::addWeighted(OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,System.Double,System.Double,OpenCVForUnity.Mat)
extern "C"  void Core_addWeighted_m128321062 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, double ___alpha, Mat_t1174969555 * ___src2, double ___beta, double ___gamma, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::batchDistance(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.Mat,System.Int32,System.Boolean)
extern "C"  void Core_batchDistance_m2401156708 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dist, int32_t ___dtype, Mat_t1174969555 * ___nidx, int32_t ___normType, int32_t ___K, Mat_t1174969555 * ___mask, int32_t ___update, bool ___crosscheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::batchDistance(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Core_batchDistance_m2219974253 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dist, int32_t ___dtype, Mat_t1174969555 * ___nidx, int32_t ___normType, int32_t ___K, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::batchDistance(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  void Core_batchDistance_m1485766477 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dist, int32_t ___dtype, Mat_t1174969555 * ___nidx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_and(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_and_m2684141304 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_and(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_and_m1771676499 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_not(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_not_m4076036431 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_not(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_not_m2577410652 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_or(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_or_m664885272 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_or(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_or_m978476595 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_xor(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_xor_m4128653044 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::bitwise_xor(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_bitwise_xor_m438308055 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::calcCovarMatrix(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Core_calcCovarMatrix_m1854003057 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___covar, Mat_t1174969555 * ___mean, int32_t ___flags, int32_t ___ctype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::calcCovarMatrix(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_calcCovarMatrix_m604246822 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___samples, Mat_t1174969555 * ___covar, Mat_t1174969555 * ___mean, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::cartToPolar(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  void Core_cartToPolar_m438952191 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, Mat_t1174969555 * ___magnitude, Mat_t1174969555 * ___angle, bool ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::cartToPolar(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_cartToPolar_m313614014 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, Mat_t1174969555 * ___magnitude, Mat_t1174969555 * ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::compare(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_compare_m538487240 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, int32_t ___cmpop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::compare(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_compare_m341015798 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, int32_t ___cmpop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::completeSymm(OpenCVForUnity.Mat,System.Boolean)
extern "C"  void Core_completeSymm_m2526666588 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mtx, bool ___lowerToUpper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::completeSymm(OpenCVForUnity.Mat)
extern "C"  void Core_completeSymm_m26350081 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mtx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::convertScaleAbs(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Core_convertScaleAbs_m4168868286 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___alpha, double ___beta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::convertScaleAbs(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_convertScaleAbs_m1707124422 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::copyMakeBorder(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Core_copyMakeBorder_m1990021336 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___top, int32_t ___bottom, int32_t ___left, int32_t ___right, int32_t ___borderType, Scalar_t3645537183 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::copyMakeBorder(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Core_copyMakeBorder_m889326717 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___top, int32_t ___bottom, int32_t ___left, int32_t ___right, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::dct(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_dct_m3992358667 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::dct(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_dct_m3405449548 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::dft(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Core_dft_m207162095 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, int32_t ___nonzeroRows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::dft(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_dft_m1893435983 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Core_divide_m2629740544 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_divide_m1360299575 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_divide_m2140919035 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Core_divide_m9066566 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_divide_m3539065905 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_divide_m3536701557 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(System.Double,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_divide_m1563814571 (Il2CppObject * __this /* static, unused */, double ___scale, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::divide(System.Double,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_divide_m969886124 (Il2CppObject * __this /* static, unused */, double ___scale, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::exp(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_exp_m4278977028 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::extractChannel(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_extractChannel_m2784790256 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___coi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::findNonZero(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_findNonZero_m1662754853 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::flip(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_flip_m3070713243 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flipCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::gemm(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_gemm_m1750262412 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, double ___alpha, Mat_t1174969555 * ___src3, double ___beta, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::gemm(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat)
extern "C"  void Core_gemm_m351803435 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, double ___alpha, Mat_t1174969555 * ___src3, double ___beta, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::hconcat(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void Core_hconcat_m189328543 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::idct(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_idct_m139295354 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::idct(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_idct_m1497314685 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::idft(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Core_idft_m1963092960 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, int32_t ___nonzeroRows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::idft(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_idft_m4280268416 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::inRange(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_inRange_m3699974131 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Scalar_t3645537183 * ___lowerb, Scalar_t3645537183 * ___upperb, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::insertChannel(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_insertChannel_m3583215040 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___coi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::log(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_log_m824277757 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::magnitude(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_magnitude_m3328604122 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, Mat_t1174969555 * ___magnitude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::max(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_max_m3286957358 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::max(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_max_m174378850 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::meanStdDev(OpenCVForUnity.Mat,OpenCVForUnity.MatOfDouble,OpenCVForUnity.MatOfDouble,OpenCVForUnity.Mat)
extern "C"  void Core_meanStdDev_m1982101106 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, MatOfDouble_t1782331771 * ___mean, MatOfDouble_t1782331771 * ___stddev, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::meanStdDev(OpenCVForUnity.Mat,OpenCVForUnity.MatOfDouble,OpenCVForUnity.MatOfDouble)
extern "C"  void Core_meanStdDev_m2342648345 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, MatOfDouble_t1782331771 * ___mean, MatOfDouble_t1782331771 * ___stddev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::merge(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void Core_merge_m3265211739 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___mv, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::min(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_min_m1290754204 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::min(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_min_m3698365748 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::mixChannels(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.MatOfInt)
extern "C"  void Core_mixChannels_m3109861522 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___src, List_1_t1971928524 * ___dst, MatOfInt_t1517897931 * ___fromTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::mulSpectrums(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Boolean)
extern "C"  void Core_mulSpectrums_m3957282918 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___a, Mat_t1174969555 * ___b, Mat_t1174969555 * ___c, int32_t ___flags, bool ___conjB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::mulSpectrums(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_mulSpectrums_m2639193655 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___a, Mat_t1174969555 * ___b, Mat_t1174969555 * ___c, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::mulTransposed(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Core_mulTransposed_m776366619 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, bool ___aTa, Mat_t1174969555 * ___delta, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::mulTransposed(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean,OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_mulTransposed_m1957983292 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, bool ___aTa, Mat_t1174969555 * ___delta, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::mulTransposed(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  void Core_mulTransposed_m1962821515 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, bool ___aTa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::multiply(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Core_multiply_m169270837 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::multiply(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_multiply_m1450663394 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::multiply(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_multiply_m3943998438 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::multiply(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Core_multiply_m2362866161 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::multiply(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_multiply_m2623103142 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::multiply(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_multiply_m1919225258 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::normalize(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Int32,OpenCVForUnity.Mat)
extern "C"  void Core_normalize_m2564921151 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___alpha, double ___beta, int32_t ___norm_type, int32_t ___dtype, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::normalize(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Core_normalize_m610359916 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___alpha, double ___beta, int32_t ___norm_type, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::normalize(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32)
extern "C"  void Core_normalize_m3747894347 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___alpha, double ___beta, int32_t ___norm_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::normalize(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_normalize_m3344523796 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::patchNaNs(OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_patchNaNs_m1526509926 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___a, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::patchNaNs(OpenCVForUnity.Mat)
extern "C"  void Core_patchNaNs_m2706419306 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::perspectiveTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_perspectiveTransform_m949582162 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::phase(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  void Core_phase_m1582216024 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, Mat_t1174969555 * ___angle, bool ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::phase(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_phase_m2342995333 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, Mat_t1174969555 * ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::polarToCart(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  void Core_polarToCart_m1469666005 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___magnitude, Mat_t1174969555 * ___angle, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, bool ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::polarToCart(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_polarToCart_m3475192744 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___magnitude, Mat_t1174969555 * ___angle, Mat_t1174969555 * ___x, Mat_t1174969555 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::pow(OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat)
extern "C"  void Core_pow_m2517297901 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, double ___power, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::randShuffle(OpenCVForUnity.Mat,System.Double)
extern "C"  void Core_randShuffle_m2426987322 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___dst, double ___iterFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::randShuffle(OpenCVForUnity.Mat)
extern "C"  void Core_randShuffle_m1962140478 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::randn(OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Core_randn_m2071709963 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___dst, double ___mean, double ___stddev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::randu(OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Core_randu_m2017394450 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___dst, double ___low, double ___high, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::reduce(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Core_reduce_m4029087092 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___dim, int32_t ___rtype, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::reduce(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Core_reduce_m4278871107 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___dim, int32_t ___rtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::repeat(OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.Mat)
extern "C"  void Core_repeat_m3230622638 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, int32_t ___ny, int32_t ___nx, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::scaleAdd(OpenCVForUnity.Mat,System.Double,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_scaleAdd_m1007424181 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, double ___alpha, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::setErrorVerbosity(System.Boolean)
extern "C"  void Core_setErrorVerbosity_m2267950433 (Il2CppObject * __this /* static, unused */, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::setIdentity(OpenCVForUnity.Mat,OpenCVForUnity.Scalar)
extern "C"  void Core_setIdentity_m2275588613 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mtx, Scalar_t3645537183 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::setIdentity(OpenCVForUnity.Mat)
extern "C"  void Core_setIdentity_m548574570 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___mtx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::setNumThreads(System.Int32)
extern "C"  void Core_setNumThreads_m945525403 (Il2CppObject * __this /* static, unused */, int32_t ___nthreads, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::sort(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_sort_m1655229516 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::sortIdx(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_sortIdx_m2304844917 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::split(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void Core_split_m364010923 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___m, List_1_t1971928524 * ___mv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::sqrt(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_sqrt_m3948134569 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::subtract(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_subtract_m2467565154 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::subtract(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_subtract_m1791912085 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::subtract(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_subtract_m939920598 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Mat_t1174969555 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::subtract(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Core_subtract_m3082104902 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::subtract(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_subtract_m2533884977 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::subtract(OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  void Core_subtract_m1669840570 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src1, Scalar_t3645537183 * ___src2, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::transform(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_transform_m3870221878 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::transpose(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Core_transpose_m1775972456 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::vconcat(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void Core_vconcat_m1374396589 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Core/MinMaxLocResult OpenCVForUnity.Core::minMaxLoc(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  MinMaxLocResult_t2054552011 * Core_minMaxLoc_m241271744 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Core/MinMaxLocResult OpenCVForUnity.Core::minMaxLoc(OpenCVForUnity.Mat)
extern "C"  MinMaxLocResult_t2054552011 * Core_minMaxLoc_m4205298571 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mean_10(System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void Core_core_Core_mean_10_m3969861054 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mean_11(System.IntPtr,System.Double[])
extern "C"  void Core_core_Core_mean_11_m4091351695 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_sumElems_10(System.IntPtr,System.Double[])
extern "C"  void Core_core_Core_sumElems_10_m1306682148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_trace_10(System.IntPtr,System.Double[])
extern "C"  void Core_core_Core_trace_10_m1404964216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mtx_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Core::core_Core_getBuildInformation_10()
extern "C"  IntPtr_t Core_core_Core_getBuildInformation_10_m3545977970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::core_Core_checkRange_10(System.IntPtr,System.Boolean,System.Double,System.Double)
extern "C"  bool Core_core_Core_checkRange_10_m1486711683 (Il2CppObject * __this /* static, unused */, IntPtr_t ___a_nativeObj, bool ___quiet, double ___minVal, double ___maxVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::core_Core_checkRange_11(System.IntPtr)
extern "C"  bool Core_core_Core_checkRange_11_m2603060497 (Il2CppObject * __this /* static, unused */, IntPtr_t ___a_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::core_Core_eigen_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool Core_core_Core_eigen_10_m1400720085 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___eigenvalues_nativeObj, IntPtr_t ___eigenvectors_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::core_Core_eigen_11(System.IntPtr,System.IntPtr)
extern "C"  bool Core_core_Core_eigen_11_m1096745254 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___eigenvalues_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::core_Core_solve_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  bool Core_core_Core_solve_10_m2821182511 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Core::core_Core_solve_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool Core_core_Core_solve_11_m618177287 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_Mahalanobis_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double Core_core_Core_Mahalanobis_10_m1452931489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___v1_nativeObj, IntPtr_t ___v2_nativeObj, IntPtr_t ___icovar_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_PSNR_10(System.IntPtr,System.IntPtr)
extern "C"  double Core_core_Core_PSNR_10_m3392714531 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_determinant_10(System.IntPtr)
extern "C"  double Core_core_Core_determinant_10_m617731793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mtx_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_getTickFrequency_10()
extern "C"  double Core_core_Core_getTickFrequency_10_m1376317853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_invert_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  double Core_core_Core_invert_10_m904758373 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_invert_11(System.IntPtr,System.IntPtr)
extern "C"  double Core_core_Core_invert_11_m3062568273 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_kmeans_10(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Double,System.Int32,System.Int32,System.IntPtr)
extern "C"  double Core_core_Core_kmeans_10_m2621000318 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, int32_t ___K, IntPtr_t ___bestLabels_nativeObj, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, int32_t ___attempts, int32_t ___flags, IntPtr_t ___centers_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_kmeans_11(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Double,System.Int32,System.Int32)
extern "C"  double Core_core_Core_kmeans_11_m2793618289 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, int32_t ___K, IntPtr_t ___bestLabels_nativeObj, int32_t ___criteria_type, int32_t ___criteria_maxCount, double ___criteria_epsilon, int32_t ___attempts, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_norm_10(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  double Core_core_Core_norm_10_m709798733 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, int32_t ___normType, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_norm_11(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  double Core_core_Core_norm_11_m716363456 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_norm_12(System.IntPtr,System.IntPtr)
extern "C"  double Core_core_Core_norm_12_m2296908566 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_norm_13(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  double Core_core_Core_norm_13_m3832632414 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, int32_t ___normType, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_norm_14(System.IntPtr,System.Int32)
extern "C"  double Core_core_Core_norm_14_m1044625233 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_norm_15(System.IntPtr)
extern "C"  double Core_core_Core_norm_15_m3034957093 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_solvePoly_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  double Core_core_Core_solvePoly_10_m1921785922 (Il2CppObject * __this /* static, unused */, IntPtr_t ___coeffs_nativeObj, IntPtr_t ___roots_nativeObj, int32_t ___maxIters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Core::core_Core_solvePoly_11(System.IntPtr,System.IntPtr)
extern "C"  double Core_core_Core_solvePoly_11_m2230023764 (Il2CppObject * __this /* static, unused */, IntPtr_t ___coeffs_nativeObj, IntPtr_t ___roots_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Core::core_Core_cubeRoot_10(System.Single)
extern "C"  float Core_core_Core_cubeRoot_10_m2000866451 (Il2CppObject * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Core::core_Core_fastAtan2_10(System.Single,System.Single)
extern "C"  float Core_core_Core_fastAtan2_10_m3645041527 (Il2CppObject * __this /* static, unused */, float ___y, float ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_borderInterpolate_10(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Core_core_Core_borderInterpolate_10_m986164073 (Il2CppObject * __this /* static, unused */, int32_t ___p, int32_t ___len, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_countNonZero_10(System.IntPtr)
extern "C"  int32_t Core_core_Core_countNonZero_10_m240759753 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_getNumThreads_10()
extern "C"  int32_t Core_core_Core_getNumThreads_10_m2508901236 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_getNumberOfCPUs_10()
extern "C"  int32_t Core_core_Core_getNumberOfCPUs_10_m4161153228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_getOptimalDFTSize_10(System.Int32)
extern "C"  int32_t Core_core_Core_getOptimalDFTSize_10_m2248791639 (Il2CppObject * __this /* static, unused */, int32_t ___vecsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_getThreadNum_10()
extern "C"  int32_t Core_core_Core_getThreadNum_10_m1727719179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Core::core_Core_solveCubic_10(System.IntPtr,System.IntPtr)
extern "C"  int32_t Core_core_Core_solveCubic_10_m2331211868 (Il2CppObject * __this /* static, unused */, IntPtr_t ___coeffs_nativeObj, IntPtr_t ___roots_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Core::core_Core_getCPUTickCount_10()
extern "C"  int64_t Core_core_Core_getCPUTickCount_10_m1574248780 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Core::core_Core_getTickCount_10()
extern "C"  int64_t Core_core_Core_getTickCount_10_m951040502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_LUT_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_LUT_10_m3257133984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___lut_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_PCABackProject_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_PCABackProject_10_m2801573151 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, IntPtr_t ___mean_nativeObj, IntPtr_t ___eigenvectors_nativeObj, IntPtr_t ___result_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_PCACompute_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Core_core_Core_PCACompute_10_m3795499410 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, IntPtr_t ___mean_nativeObj, IntPtr_t ___eigenvectors_nativeObj, double ___retainedVariance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_PCACompute_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_PCACompute_11_m340850178 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, IntPtr_t ___mean_nativeObj, IntPtr_t ___eigenvectors_nativeObj, int32_t ___maxComponents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_PCACompute_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_PCACompute_12_m3783132756 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, IntPtr_t ___mean_nativeObj, IntPtr_t ___eigenvectors_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_PCAProject_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_PCAProject_10_m3511703174 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data_nativeObj, IntPtr_t ___mean_nativeObj, IntPtr_t ___eigenvectors_nativeObj, IntPtr_t ___result_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_SVBackSubst_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_SVBackSubst_10_m3331438632 (Il2CppObject * __this /* static, unused */, IntPtr_t ___w_nativeObj, IntPtr_t ___u_nativeObj, IntPtr_t ___vt_nativeObj, IntPtr_t ___rhs_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_SVDecomp_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_SVDecomp_10_m3672978761 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___w_nativeObj, IntPtr_t ___u_nativeObj, IntPtr_t ___vt_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_SVDecomp_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_SVDecomp_11_m2368351597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___w_nativeObj, IntPtr_t ___u_nativeObj, IntPtr_t ___vt_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_absdiff_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_absdiff_10_m3020494892 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_absdiff_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_absdiff_11_m1141621165 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_add_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_add_10_m829162099 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_add_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_add_11_m814957571 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_add_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_add_12_m4173873300 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_add_13(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_add_13_m279058644 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_add_14(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_add_14_m139660610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_add_15(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_add_15_m288386387 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_addWeighted_10(System.IntPtr,System.Double,System.IntPtr,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_addWeighted_10_m4129448054 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___alpha, IntPtr_t ___src2_nativeObj, double ___beta, double ___gamma, IntPtr_t ___dst_nativeObj, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_addWeighted_11(System.IntPtr,System.Double,System.IntPtr,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_addWeighted_11_m3315697824 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___alpha, IntPtr_t ___src2_nativeObj, double ___beta, double ___gamma, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_batchDistance_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Boolean)
extern "C"  void Core_core_Core_batchDistance_10_m1747215829 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dist_nativeObj, int32_t ___dtype, IntPtr_t ___nidx_nativeObj, int32_t ___normType, int32_t ___K, IntPtr_t ___mask_nativeObj, int32_t ___update, bool ___crosscheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_batchDistance_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Core_core_Core_batchDistance_11_m3475054786 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dist_nativeObj, int32_t ___dtype, IntPtr_t ___nidx_nativeObj, int32_t ___normType, int32_t ___K, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_batchDistance_12(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void Core_core_Core_batchDistance_12_m3374937379 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dist_nativeObj, int32_t ___dtype, IntPtr_t ___nidx_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1and_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1and_10_m3427222991 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1and_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1and_11_m3801225056 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1not_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1not_10_m2869921277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1not_11(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1not_11_m1940283982 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1or_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1or_10_m3259668105 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1or_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1or_11_m2378421658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1xor_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1xor_10_m1960402515 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_bitwise_1xor_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_bitwise_1xor_11_m2120722148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_calcCovarMatrix_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Core_core_Core_calcCovarMatrix_10_m1774253148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___samples_nativeObj, IntPtr_t ___covar_nativeObj, IntPtr_t ___mean_nativeObj, int32_t ___flags, int32_t ___ctype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_calcCovarMatrix_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_calcCovarMatrix_11_m3834994012 (Il2CppObject * __this /* static, unused */, IntPtr_t ___samples_nativeObj, IntPtr_t ___covar_nativeObj, IntPtr_t ___mean_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_cartToPolar_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void Core_core_Core_cartToPolar_10_m4189644599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, IntPtr_t ___magnitude_nativeObj, IntPtr_t ___angle_nativeObj, bool ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_cartToPolar_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_cartToPolar_11_m2413479589 (Il2CppObject * __this /* static, unused */, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, IntPtr_t ___magnitude_nativeObj, IntPtr_t ___angle_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_compare_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_compare_10_m3218615805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___cmpop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_compare_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_compare_11_m678320028 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, int32_t ___cmpop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_completeSymm_10(System.IntPtr,System.Boolean)
extern "C"  void Core_core_Core_completeSymm_10_m155210317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mtx_nativeObj, bool ___lowerToUpper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_completeSymm_11(System.IntPtr)
extern "C"  void Core_core_Core_completeSymm_11_m3582859535 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mtx_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_convertScaleAbs_10(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Core_core_Core_convertScaleAbs_10_m2238188090 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___alpha, double ___beta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_convertScaleAbs_11(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_convertScaleAbs_11_m1673645281 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_copyMakeBorder_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Core_core_Core_copyMakeBorder_10_m873451865 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___top, int32_t ___bottom, int32_t ___left, int32_t ___right, int32_t ___borderType, double ___value_val0, double ___value_val1, double ___value_val2, double ___value_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_copyMakeBorder_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Core_core_Core_copyMakeBorder_11_m3631121578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___top, int32_t ___bottom, int32_t ___left, int32_t ___right, int32_t ___borderType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_dct_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_dct_10_m354667739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_dct_11(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_dct_11_m2361017627 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_dft_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Core_core_Core_dft_10_m2454826489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, int32_t ___nonzeroRows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_dft_11(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_dft_11_m1142526328 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32)
extern "C"  void Core_core_Core_divide_10_m228109237 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Core_core_Core_divide_11_m3716331393 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_divide_12_m1629100324 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_13(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Double,System.Int32)
extern "C"  void Core_core_Core_divide_13_m2784949782 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_14(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Double)
extern "C"  void Core_core_Core_divide_14_m1305332928 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_15(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_divide_15_m2927792611 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_16(System.Double,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_divide_16_m3691933449 (Il2CppObject * __this /* static, unused */, double ___scale, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_divide_17(System.Double,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_divide_17_m3419237869 (Il2CppObject * __this /* static, unused */, double ___scale, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_exp_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_exp_10_m4280451012 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_extractChannel_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_extractChannel_10_m878100182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___coi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_findNonZero_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_findNonZero_10_m1205007555 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___idx_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_flip_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_flip_10_m1620617867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flipCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_gemm_10(System.IntPtr,System.IntPtr,System.Double,System.IntPtr,System.Double,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_gemm_10_m426640390 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, double ___alpha, IntPtr_t ___src3_nativeObj, double ___beta, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_gemm_11(System.IntPtr,System.IntPtr,System.Double,System.IntPtr,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_gemm_11_m610491152 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, double ___alpha, IntPtr_t ___src3_nativeObj, double ___beta, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_hconcat_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_hconcat_10_m3397087523 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_idct_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_idct_10_m3051469452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_idct_11(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_idct_11_m2966875082 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_idft_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Core_core_Core_idft_10_m1253394408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, int32_t ___nonzeroRows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_idft_11(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_idft_11_m1748383783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_inRange_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_inRange_10_m1403090079 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, double ___lowerb_val0, double ___lowerb_val1, double ___lowerb_val2, double ___lowerb_val3, double ___upperb_val0, double ___upperb_val1, double ___upperb_val2, double ___upperb_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_insertChannel_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_insertChannel_10_m1037840326 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___coi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_log_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_log_10_m1012677867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_magnitude_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_magnitude_10_m2241069573 (Il2CppObject * __this /* static, unused */, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, IntPtr_t ___magnitude_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_max_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_max_10_m3985489241 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_max_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_max_11_m3513949850 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_meanStdDev_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_meanStdDev_10_m2291809554 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mean_mat_nativeObj, IntPtr_t ___stddev_mat_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_meanStdDev_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_meanStdDev_11_m3175591907 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mean_mat_nativeObj, IntPtr_t ___stddev_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_merge_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_merge_10_m3254412511 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mv_mat_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_min_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_min_10_m622677447 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_min_11(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_min_11_m1990968712 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mixChannels_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_mixChannels_10_m844902465 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, IntPtr_t ___fromTo_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mulSpectrums_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Boolean)
extern "C"  void Core_core_Core_mulSpectrums_10_m757396177 (Il2CppObject * __this /* static, unused */, IntPtr_t ___a_nativeObj, IntPtr_t ___b_nativeObj, IntPtr_t ___c_nativeObj, int32_t ___flags, bool ___conjB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mulSpectrums_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_mulSpectrums_11_m3484888109 (Il2CppObject * __this /* static, unused */, IntPtr_t ___a_nativeObj, IntPtr_t ___b_nativeObj, IntPtr_t ___c_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mulTransposed_10(System.IntPtr,System.IntPtr,System.Boolean,System.IntPtr,System.Double,System.Int32)
extern "C"  void Core_core_Core_mulTransposed_10_m4197817990 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, bool ___aTa, IntPtr_t ___delta_nativeObj, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mulTransposed_11(System.IntPtr,System.IntPtr,System.Boolean,System.IntPtr,System.Double)
extern "C"  void Core_core_Core_mulTransposed_11_m2218611954 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, bool ___aTa, IntPtr_t ___delta_nativeObj, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_mulTransposed_12(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void Core_core_Core_mulTransposed_12_m957506025 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, bool ___aTa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_multiply_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32)
extern "C"  void Core_core_Core_multiply_10_m968524138 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_multiply_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Core_core_Core_multiply_11_m258916268 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_multiply_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_multiply_12_m1757608079 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_multiply_13(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Double,System.Int32)
extern "C"  void Core_core_Core_multiply_13_m2705971595 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, double ___scale, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_multiply_14(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Double)
extern "C"  void Core_core_Core_multiply_14_m3861737259 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_multiply_15(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_multiply_15_m1979579278 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_normalize_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.IntPtr)
extern "C"  void Core_core_Core_normalize_10_m1013539482 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___alpha, double ___beta, int32_t ___norm_type, int32_t ___dtype, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_normalize_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Core_core_Core_normalize_11_m3439237227 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___alpha, double ___beta, int32_t ___norm_type, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_normalize_12(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Core_core_Core_normalize_12_m938145581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___alpha, double ___beta, int32_t ___norm_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_normalize_13(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_normalize_13_m2733587601 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_patchNaNs_10(System.IntPtr,System.Double)
extern "C"  void Core_core_Core_patchNaNs_10_m3361262805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___a_nativeObj, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_patchNaNs_11(System.IntPtr)
extern "C"  void Core_core_Core_patchNaNs_11_m1058588152 (Il2CppObject * __this /* static, unused */, IntPtr_t ___a_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_perspectiveTransform_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_perspectiveTransform_10_m2825940285 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___m_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_phase_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void Core_core_Core_phase_10_m1910154573 (Il2CppObject * __this /* static, unused */, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, IntPtr_t ___angle_nativeObj, bool ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_phase_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_phase_11_m3578966415 (Il2CppObject * __this /* static, unused */, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, IntPtr_t ___angle_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_polarToCart_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void Core_core_Core_polarToCart_10_m1676736161 (Il2CppObject * __this /* static, unused */, IntPtr_t ___magnitude_nativeObj, IntPtr_t ___angle_nativeObj, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, bool ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_polarToCart_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_polarToCart_11_m106369147 (Il2CppObject * __this /* static, unused */, IntPtr_t ___magnitude_nativeObj, IntPtr_t ___angle_nativeObj, IntPtr_t ___x_nativeObj, IntPtr_t ___y_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_pow_10(System.IntPtr,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_pow_10_m4003421627 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, double ___power, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_randShuffle_10(System.IntPtr,System.Double)
extern "C"  void Core_core_Core_randShuffle_10_m318970793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dst_nativeObj, double ___iterFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_randShuffle_11(System.IntPtr)
extern "C"  void Core_core_Core_randShuffle_11_m1140905932 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_randn_10(System.IntPtr,System.Double,System.Double)
extern "C"  void Core_core_Core_randn_10_m4268203130 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dst_nativeObj, double ___mean, double ___stddev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_randu_10(System.IntPtr,System.Double,System.Double)
extern "C"  void Core_core_Core_randu_10_m884910145 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dst_nativeObj, double ___low, double ___high, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_reduce_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Core_core_Core_reduce_10_m477399058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___dim, int32_t ___rtype, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_reduce_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Core_core_Core_reduce_11_m3773842372 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___dim, int32_t ___rtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_repeat_10(System.IntPtr,System.Int32,System.Int32,System.IntPtr)
extern "C"  void Core_core_Core_repeat_10_m1142069850 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, int32_t ___ny, int32_t ___nx, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_scaleAdd_10(System.IntPtr,System.Double,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_scaleAdd_10_m3217470944 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___alpha, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_setErrorVerbosity_10(System.Boolean)
extern "C"  void Core_core_Core_setErrorVerbosity_10_m2382087949 (Il2CppObject * __this /* static, unused */, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_setIdentity_10(System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void Core_core_Core_setIdentity_10_m3591111689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mtx_nativeObj, double ___s_val0, double ___s_val1, double ___s_val2, double ___s_val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_setIdentity_11(System.IntPtr)
extern "C"  void Core_core_Core_setIdentity_11_m4057867512 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mtx_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_setNumThreads_10(System.Int32)
extern "C"  void Core_core_Core_setNumThreads_10_m1503446407 (Il2CppObject * __this /* static, unused */, int32_t ___nthreads, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_sort_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_sort_10_m253686010 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_sortIdx_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_sortIdx_10_m1755097777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_split_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_split_10_m2809123777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___m_nativeObj, IntPtr_t ___mv_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_sqrt_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_sqrt_10_m142651007 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_subtract_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_subtract_10_m3963272872 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_subtract_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_subtract_11_m3965572526 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_subtract_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_subtract_12_m1834371455 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, IntPtr_t ___src2_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_subtract_13(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Core_core_Core_subtract_13_m3989947081 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, int32_t ___dtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_subtract_14(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_subtract_14_m2584566061 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_subtract_15(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void Core_core_Core_subtract_15_m1925521534 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src1_nativeObj, double ___src2_val0, double ___src2_val1, double ___src2_val2, double ___src2_val3, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_transform_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_transform_10_m1462377057 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___m_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_transpose_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_transpose_10_m3930464736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_vconcat_10(System.IntPtr,System.IntPtr)
extern "C"  void Core_core_Core_vconcat_10_m3364419249 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Core::core_Core_n_1minMaxLocManual(System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void Core_core_Core_n_1minMaxLocManual_m794642379 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
