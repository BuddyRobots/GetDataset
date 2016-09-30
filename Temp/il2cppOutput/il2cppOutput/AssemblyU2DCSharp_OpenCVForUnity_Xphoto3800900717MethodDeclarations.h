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

// OpenCVForUnity.Xphoto
struct Xphoto_t3800900717;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Xphoto::.ctor()
extern "C"  void Xphoto__ctor_m763780492 (Xphoto_t3800900717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::autowbGrayworld(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single)
extern "C"  void Xphoto_autowbGrayworld_m808357676 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, float ___thresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::autowbGrayworld(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Xphoto_autowbGrayworld_m3282566279 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::balanceWhite(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Xphoto_balanceWhite_m2167914506 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___algorithmType, float ___inputMin, float ___inputMax, float ___outputMin, float ___outputMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::balanceWhite(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Xphoto_balanceWhite_m921070326 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___algorithmType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::dctDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Xphoto_dctDenoising_m408595310 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sigma, int32_t ___psize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::dctDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void Xphoto_dctDenoising_m642877449 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, double ___sigma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::inpaint(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Xphoto_inpaint_m3958647215 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, int32_t ___algorithmType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_autowbGrayworld_10(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void Xphoto_xphoto_Xphoto_autowbGrayworld_10_m3212838054 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, float ___thresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_autowbGrayworld_11(System.IntPtr,System.IntPtr)
extern "C"  void Xphoto_xphoto_Xphoto_autowbGrayworld_11_m1205852960 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_balanceWhite_10(System.IntPtr,System.IntPtr,System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Xphoto_xphoto_Xphoto_balanceWhite_10_m728228228 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___algorithmType, float ___inputMin, float ___inputMax, float ___outputMin, float ___outputMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_balanceWhite_11(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Xphoto_xphoto_Xphoto_balanceWhite_11_m3594301745 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___algorithmType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_dctDenoising_10(System.IntPtr,System.IntPtr,System.Double,System.Int32)
extern "C"  void Xphoto_xphoto_Xphoto_dctDenoising_10_m296529024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sigma, int32_t ___psize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_dctDenoising_11(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Xphoto_xphoto_Xphoto_dctDenoising_11_m1311087382 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___sigma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_inpaint_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Xphoto_xphoto_Xphoto_inpaint_10_m3667281796 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___algorithmType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
