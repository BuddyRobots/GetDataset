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

// OpenCVForUnity.Rect
struct Rect_t1177435543;
// OpenCVForUnity.Point
struct Point_t1252185347;
// OpenCVForUnity.Size
struct Size_t1177469876;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1252185347.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "mscorlib_System_Object837106420.h"

// System.Void OpenCVForUnity.Rect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Rect__ctor_m2580757860 (Rect_t1177435543 * __this, int32_t ___x, int32_t ___y, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Rect::.ctor()
extern "C"  void Rect__ctor_m2734211170 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Rect::.ctor(OpenCVForUnity.Point,OpenCVForUnity.Point)
extern "C"  void Rect__ctor_m1277440644 (Rect_t1177435543 * __this, Point_t1252185347 * ___p1, Point_t1252185347 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Rect::.ctor(OpenCVForUnity.Point,OpenCVForUnity.Size)
extern "C"  void Rect__ctor_m3923140861 (Rect_t1177435543 * __this, Point_t1252185347 * ___p, Size_t1177469876 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Rect::.ctor(System.Double[])
extern "C"  void Rect__ctor_m1844980030 (Rect_t1177435543 * __this, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Rect::set(System.Double[])
extern "C"  void Rect_set_m2135504990 (Rect_t1177435543 * __this, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnity.Rect::clone()
extern "C"  Rect_t1177435543 * Rect_clone_m1060419911 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Rect::tl()
extern "C"  Point_t1252185347 * Rect_tl_m2991485384 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Rect::br()
extern "C"  Point_t1252185347 * Rect_br_m2990954912 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.Rect::size()
extern "C"  Size_t1177469876 * Rect_size_m4155584022 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Rect::area()
extern "C"  double Rect_area_m573985164 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Rect::contains(OpenCVForUnity.Point)
extern "C"  bool Rect_contains_m3703870882 (Rect_t1177435543 * __this, Point_t1252185347 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Rect::GetHashCode()
extern "C"  int32_t Rect_GetHashCode_m3033821727 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Rect::Equals(System.Object)
extern "C"  bool Rect_Equals_m778237063 (Rect_t1177435543 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Rect::ToString()
extern "C"  String_t* Rect_ToString_m2421213451 (Rect_t1177435543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
