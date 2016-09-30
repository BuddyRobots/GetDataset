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

// OpenCVForUnity.RetinaFastToneMapping
struct RetinaFastToneMapping_t2044018520;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.RetinaFastToneMapping::.ctor(System.IntPtr)
extern "C"  void RetinaFastToneMapping__ctor_m1983936729 (RetinaFastToneMapping_t2044018520 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::Dispose(System.Boolean)
extern "C"  void RetinaFastToneMapping_Dispose_m3222574159 (RetinaFastToneMapping_t2044018520 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::applyFastToneMapping(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void RetinaFastToneMapping_applyFastToneMapping_m495522347 (RetinaFastToneMapping_t2044018520 * __this, Mat_t1174969555 * ___inputImage, Mat_t1174969555 * ___outputToneMappedImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::setup(System.Single,System.Single,System.Single)
extern "C"  void RetinaFastToneMapping_setup_m2561243423 (RetinaFastToneMapping_t2044018520 * __this, float ___photoreceptorsNeighborhoodRadius, float ___ganglioncellsNeighborhoodRadius, float ___meanLuminanceModulatorK, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::setup()
extern "C"  void RetinaFastToneMapping_setup_m3928560598 (RetinaFastToneMapping_t2044018520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_applyFastToneMapping_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_applyFastToneMapping_10_m854130610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___inputImage_nativeObj, IntPtr_t ___outputToneMappedImage_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_setup_10(System.IntPtr,System.Single,System.Single,System.Single)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_setup_10_m3589997010 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, float ___photoreceptorsNeighborhoodRadius, float ___ganglioncellsNeighborhoodRadius, float ___meanLuminanceModulatorK, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_setup_11(System.IntPtr)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_setup_11_m2436360450 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_delete(System.IntPtr)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_delete_m594987929 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
