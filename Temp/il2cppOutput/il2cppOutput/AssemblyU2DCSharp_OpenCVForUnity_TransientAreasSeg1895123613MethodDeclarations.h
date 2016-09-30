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

// OpenCVForUnity.TransientAreasSegmentationModule
struct TransientAreasSegmentationModule_t1895123613;
// OpenCVForUnity.Size
struct Size_t1177469876;
// System.String
struct String_t;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "mscorlib_System_String968488902.h"

// System.Void OpenCVForUnity.TransientAreasSegmentationModule::.ctor(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule__ctor_m3621816888 (TransientAreasSegmentationModule_t1895123613 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::Dispose(System.Boolean)
extern "C"  void TransientAreasSegmentationModule_Dispose_m2186941072 (TransientAreasSegmentationModule_t1895123613 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.TransientAreasSegmentationModule::getSize()
extern "C"  Size_t1177469876 * TransientAreasSegmentationModule_getSize_m17383710 (TransientAreasSegmentationModule_t1895123613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.TransientAreasSegmentationModule::printSetup()
extern "C"  String_t* TransientAreasSegmentationModule_printSetup_m3765351765 (TransientAreasSegmentationModule_t1895123613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::clearAllBuffers()
extern "C"  void TransientAreasSegmentationModule_clearAllBuffers_m2628454233 (TransientAreasSegmentationModule_t1895123613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::getSegmentationPicture(OpenCVForUnity.Mat)
extern "C"  void TransientAreasSegmentationModule_getSegmentationPicture_m3022297907 (TransientAreasSegmentationModule_t1895123613 * __this, Mat_t1174969555 * ___transientAreas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::run(OpenCVForUnity.Mat,System.Int32)
extern "C"  void TransientAreasSegmentationModule_run_m1910129485 (TransientAreasSegmentationModule_t1895123613 * __this, Mat_t1174969555 * ___inputToSegment, int32_t ___channelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::run(OpenCVForUnity.Mat)
extern "C"  void TransientAreasSegmentationModule_run_m2090701258 (TransientAreasSegmentationModule_t1895123613 * __this, Mat_t1174969555 * ___inputToSegment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::setup(System.String,System.Boolean)
extern "C"  void TransientAreasSegmentationModule_setup_m1800752082 (TransientAreasSegmentationModule_t1895123613 * __this, String_t* ___segmentationParameterFile, bool ___applyDefaultSetupOnFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::setup()
extern "C"  void TransientAreasSegmentationModule_setup_m1032664087 (TransientAreasSegmentationModule_t1895123613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::write(System.String)
extern "C"  void TransientAreasSegmentationModule_write_m3117497001 (TransientAreasSegmentationModule_t1895123613 * __this, String_t* ___fs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_getSize_10(System.IntPtr,System.Double[])
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_getSize_10_m2627608677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_printSetup_10(System.IntPtr)
extern "C"  IntPtr_t TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_printSetup_10_m1484992123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_clearAllBuffers_10(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_clearAllBuffers_10_m3735318995 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_10(System.IntPtr,System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_10_m3324839114 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___transientAreas_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_run_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_run_10_m3028069450 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___inputToSegment_nativeObj, int32_t ___channelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_run_11(System.IntPtr,System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_run_11_m1440742732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___inputToSegment_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_setup_10(System.IntPtr,System.String,System.Boolean)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_setup_10_m1663172432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___segmentationParameterFile, bool ___applyDefaultSetupOnFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_setup_11(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_setup_11_m3576868848 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_write_10(System.IntPtr,System.String)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_write_10_m1173659119 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___fs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_delete(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_delete_m2276619783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
