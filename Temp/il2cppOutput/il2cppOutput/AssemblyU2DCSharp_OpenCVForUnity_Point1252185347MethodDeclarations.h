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

// OpenCVForUnity.Point
struct Point_t1252185347;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Object
struct Il2CppObject;
// OpenCVForUnity.Rect
struct Rect_t1177435543;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1252185347.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect1177435543.h"

// System.Void OpenCVForUnity.Point::.ctor(System.Double,System.Double)
extern "C"  void Point__ctor_m2715659822 (Point_t1252185347 * __this, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Point::.ctor()
extern "C"  void Point__ctor_m555412496 (Point_t1252185347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Point::.ctor(System.Double[])
extern "C"  void Point__ctor_m2030005200 (Point_t1252185347 * __this, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Point::set(System.Double[])
extern "C"  void Point_set_m1308882800 (Point_t1252185347 * __this, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Point::clone()
extern "C"  Point_t1252185347 * Point_clone_m3363800313 (Point_t1252185347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Point::dot(OpenCVForUnity.Point)
extern "C"  double Point_dot_m3861534281 (Point_t1252185347 * __this, Point_t1252185347 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Point::GetHashCode()
extern "C"  int32_t Point_GetHashCode_m861943793 (Point_t1252185347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Point::Equals(System.Object)
extern "C"  bool Point_Equals_m427111117 (Point_t1252185347 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Point::inside(OpenCVForUnity.Rect)
extern "C"  bool Point_inside_m2643812709 (Point_t1252185347 * __this, Rect_t1177435543 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Point::ToString()
extern "C"  String_t* Point_ToString_m3945431875 (Point_t1252185347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
