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

// System.Comparison`1<System.Double>
struct Comparison_1_t3238191490;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m102240225_gshared (Comparison_1_t3238191490 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m102240225(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3238191490 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m102240225_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Double>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m415795839_gshared (Comparison_1_t3238191490 * __this, double ___x, double ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m415795839(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3238191490 *, double, double, const MethodInfo*))Comparison_1_Invoke_m415795839_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Double>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2431244536_gshared (Comparison_1_t3238191490 * __this, double ___x, double ___y, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2431244536(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t3238191490 *, double, double, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2431244536_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m4181180301_gshared (Comparison_1_t3238191490 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m4181180301(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3238191490 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m4181180301_gshared)(__this, ___result, method)
