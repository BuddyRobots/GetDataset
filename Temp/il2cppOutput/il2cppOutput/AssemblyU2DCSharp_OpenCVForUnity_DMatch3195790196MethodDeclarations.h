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

// OpenCVForUnity.DMatch
struct DMatch_t3195790196;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_DMatch3195790196.h"

// System.Void OpenCVForUnity.DMatch::.ctor()
extern "C"  void DMatch__ctor_m1455461989 (DMatch_t3195790196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DMatch::.ctor(System.Int32,System.Int32,System.Single)
extern "C"  void DMatch__ctor_m1528960390 (DMatch_t3195790196 * __this, int32_t ____queryIdx, int32_t ____trainIdx, float ____distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DMatch::.ctor(System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  void DMatch__ctor_m2401724027 (DMatch_t3195790196 * __this, int32_t ____queryIdx, int32_t ____trainIdx, int32_t ____imgIdx, float ____distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DMatch::lessThan(OpenCVForUnity.DMatch)
extern "C"  bool DMatch_lessThan_m2550570375 (DMatch_t3195790196 * __this, DMatch_t3195790196 * ___it, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.DMatch::ToString()
extern "C"  String_t* DMatch_ToString_m3767018728 (DMatch_t3195790196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
