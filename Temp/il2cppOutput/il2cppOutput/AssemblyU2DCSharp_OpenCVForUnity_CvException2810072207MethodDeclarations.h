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

// OpenCVForUnity.CvException
struct CvException_t2810072207;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void OpenCVForUnity.CvException::.ctor()
extern "C"  void CvException__ctor_m859848772 (CvException_t2810072207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CvException::.ctor(System.String)
extern "C"  void CvException__ctor_m1551035710 (CvException_t2810072207 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CvException::.ctor(System.String,System.Object[])
extern "C"  void CvException__ctor_m2372683690 (CvException_t2810072207 * __this, String_t* ___messageFormat, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CvException::.ctor(System.String,System.Exception)
extern "C"  void CvException__ctor_m2452437944 (CvException_t2810072207 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
