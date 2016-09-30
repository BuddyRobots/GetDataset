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

// OpenCVForUnity.Bioinspired
struct Bioinspired_t1168831813;
// OpenCVForUnity.Retina
struct Retina_t3619318606;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.RetinaFastToneMapping
struct RetinaFastToneMapping_t2044018520;
// OpenCVForUnity.TransientAreasSegmentationModule
struct TransientAreasSegmentationModule_t1895123613;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Bioinspired::.ctor()
extern "C"  void Bioinspired__ctor_m2768700494 (Bioinspired_t1168831813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Retina OpenCVForUnity.Bioinspired::createRetina(OpenCVForUnity.Size,System.Boolean,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  Retina_t3619318606 * Bioinspired_createRetina_m2044332257 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___inputSize, bool ___colorMode, int32_t ___colorSamplingMethod, bool ___useRetinaLogSampling, float ___reductionFactor, float ___samplingStrenght, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Retina OpenCVForUnity.Bioinspired::createRetina(OpenCVForUnity.Size,System.Boolean)
extern "C"  Retina_t3619318606 * Bioinspired_createRetina_m2212857361 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___inputSize, bool ___colorMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Retina OpenCVForUnity.Bioinspired::createRetina(OpenCVForUnity.Size)
extern "C"  Retina_t3619318606 * Bioinspired_createRetina_m1966503916 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___inputSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RetinaFastToneMapping OpenCVForUnity.Bioinspired::createRetinaFastToneMapping(OpenCVForUnity.Size)
extern "C"  RetinaFastToneMapping_t2044018520 * Bioinspired_createRetinaFastToneMapping_m2960146804 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___inputSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TransientAreasSegmentationModule OpenCVForUnity.Bioinspired::createTransientAreasSegmentationModule(OpenCVForUnity.Size)
extern "C"  TransientAreasSegmentationModule_t1895123613 * Bioinspired_createTransientAreasSegmentationModule_m2882193100 (Il2CppObject * __this /* static, unused */, Size_t1177469876 * ___inputSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetina_10(System.Double,System.Double,System.Boolean,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetina_10_m2133181107 (Il2CppObject * __this /* static, unused */, double ___inputSize_width, double ___inputSize_height, bool ___colorMode, int32_t ___colorSamplingMethod, bool ___useRetinaLogSampling, float ___reductionFactor, float ___samplingStrenght, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetina_11(System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetina_11_m3428032612 (Il2CppObject * __this /* static, unused */, double ___inputSize_width, double ___inputSize_height, bool ___colorMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetina_12(System.Double,System.Double)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetina_12_m1839992216 (Il2CppObject * __this /* static, unused */, double ___inputSize_width, double ___inputSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetinaFastToneMapping_10(System.Double,System.Double)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetinaFastToneMapping_10_m287723108 (Il2CppObject * __this /* static, unused */, double ___inputSize_width, double ___inputSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createTransientAreasSegmentationModule_10(System.Double,System.Double)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createTransientAreasSegmentationModule_10_m1858345385 (Il2CppObject * __this /* static, unused */, double ___inputSize_width, double ___inputSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
