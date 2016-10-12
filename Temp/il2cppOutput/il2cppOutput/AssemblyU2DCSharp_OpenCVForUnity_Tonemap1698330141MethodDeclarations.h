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

// OpenCVForUnity.Tonemap
struct Tonemap_t1698330141;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.Tonemap::.ctor(System.IntPtr)
extern "C"  void Tonemap__ctor_m1984251678 (Tonemap_t1698330141 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::Dispose(System.Boolean)
extern "C"  void Tonemap_Dispose_m4015285226 (Tonemap_t1698330141 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Tonemap::getGamma()
extern "C"  float Tonemap_getGamma_m3001563755 (Tonemap_t1698330141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::process(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Tonemap_process_m4209977507 (Tonemap_t1698330141 * __this, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::setGamma(System.Single)
extern "C"  void Tonemap_setGamma_m3753450104 (Tonemap_t1698330141 * __this, float ___gamma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Tonemap::photo_Tonemap_getGamma_10(System.IntPtr)
extern "C"  float Tonemap_photo_Tonemap_getGamma_10_m2820918305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::photo_Tonemap_process_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Tonemap_photo_Tonemap_process_10_m501353777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::photo_Tonemap_setGamma_10(System.IntPtr,System.Single)
extern "C"  void Tonemap_photo_Tonemap_setGamma_10_m3754879982 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, float ___gamma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::photo_Tonemap_delete(System.IntPtr)
extern "C"  void Tonemap_photo_Tonemap_delete_m772469081 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
