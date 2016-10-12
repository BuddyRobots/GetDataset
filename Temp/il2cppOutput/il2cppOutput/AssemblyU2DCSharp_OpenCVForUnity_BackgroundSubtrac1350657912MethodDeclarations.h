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

// OpenCVForUnity.BackgroundSubtractor
struct BackgroundSubtractor_t1350657912;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.BackgroundSubtractor::.ctor(System.IntPtr)
extern "C"  void BackgroundSubtractor__ctor_m2994148435 (BackgroundSubtractor_t1350657912 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::Dispose(System.Boolean)
extern "C"  void BackgroundSubtractor_Dispose_m3603664533 (BackgroundSubtractor_t1350657912 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::apply(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void BackgroundSubtractor_apply_m2769687797 (BackgroundSubtractor_t1350657912 * __this, Mat_t1174969555 * ___image, Mat_t1174969555 * ___fgmask, double ___learningRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::apply(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void BackgroundSubtractor_apply_m2329339961 (BackgroundSubtractor_t1350657912 * __this, Mat_t1174969555 * ___image, Mat_t1174969555 * ___fgmask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::getBackgroundImage(OpenCVForUnity.Mat)
extern "C"  void BackgroundSubtractor_getBackgroundImage_m479775839 (BackgroundSubtractor_t1350657912 * __this, Mat_t1174969555 * ___backgroundImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_apply_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_apply_10_m3680817159 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___fgmask_nativeObj, double ___learningRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_apply_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_apply_11_m3925013546 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, IntPtr_t ___fgmask_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_getBackgroundImage_10(System.IntPtr,System.IntPtr)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_getBackgroundImage_10_m1006526478 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___backgroundImage_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_delete(System.IntPtr)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_delete_m3573430580 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
