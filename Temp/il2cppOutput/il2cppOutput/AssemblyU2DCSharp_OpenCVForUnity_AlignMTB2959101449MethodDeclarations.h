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

// OpenCVForUnity.AlignMTB
struct AlignMTB_t2959101449;
// OpenCVForUnity.Point
struct Point_t1252185347;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1252185347.h"

// System.Void OpenCVForUnity.AlignMTB::.ctor(System.IntPtr)
extern "C"  void AlignMTB__ctor_m3979860900 (AlignMTB_t2959101449 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::Dispose(System.Boolean)
extern "C"  void AlignMTB_Dispose_m4272306596 (AlignMTB_t2959101449 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.AlignMTB::calculateShift(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Point_t1252185347 * AlignMTB_calculateShift_m2182031016 (AlignMTB_t2959101449 * __this, Mat_t1174969555 * ___img0, Mat_t1174969555 * ___img1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.AlignMTB::getCut()
extern "C"  bool AlignMTB_getCut_m3086797708 (AlignMTB_t2959101449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::getExcludeRange()
extern "C"  int32_t AlignMTB_getExcludeRange_m2090802165 (AlignMTB_t2959101449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::getMaxBits()
extern "C"  int32_t AlignMTB_getMaxBits_m631895098 (AlignMTB_t2959101449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::computeBitmaps(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void AlignMTB_computeBitmaps_m2165837798 (AlignMTB_t2959101449 * __this, Mat_t1174969555 * ___img, Mat_t1174969555 * ___tb, Mat_t1174969555 * ___eb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void AlignMTB_process_m1997131063 (AlignMTB_t2959101449 * __this, List_1_t1971928524 * ___src, List_1_t1971928524 * ___dst, Mat_t1174969555 * ___times, Mat_t1174969555 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void AlignMTB_process_m659776599 (AlignMTB_t2959101449 * __this, List_1_t1971928524 * ___src, List_1_t1971928524 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::setCut(System.Boolean)
extern "C"  void AlignMTB_setCut_m2076244139 (AlignMTB_t2959101449 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::setExcludeRange(System.Int32)
extern "C"  void AlignMTB_setExcludeRange_m3419272260 (AlignMTB_t2959101449 * __this, int32_t ___exclude_range, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::setMaxBits(System.Int32)
extern "C"  void AlignMTB_setMaxBits_m1895276877 (AlignMTB_t2959101449 * __this, int32_t ___max_bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::shiftMat(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point)
extern "C"  void AlignMTB_shiftMat_m695016903 (AlignMTB_t2959101449 * __this, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Point_t1252185347 * ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_calculateShift_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void AlignMTB_photo_AlignMTB_calculateShift_10_m3836591408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img0_nativeObj, IntPtr_t ___img1_nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.AlignMTB::photo_AlignMTB_getCut_10(System.IntPtr)
extern "C"  bool AlignMTB_photo_AlignMTB_getCut_10_m2451151614 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::photo_AlignMTB_getExcludeRange_10(System.IntPtr)
extern "C"  int32_t AlignMTB_photo_AlignMTB_getExcludeRange_10_m764340791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::photo_AlignMTB_getMaxBits_10(System.IntPtr)
extern "C"  int32_t AlignMTB_photo_AlignMTB_getMaxBits_10_m2207280672 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_computeBitmaps_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_computeBitmaps_10_m4099896405 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___tb_nativeObj, IntPtr_t ___eb_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_process_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_process_10_m3239030963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, IntPtr_t ___times_nativeObj, IntPtr_t ___response_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_process_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_process_11_m2933245942 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_mat_nativeObj, IntPtr_t ___dst_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_setCut_10(System.IntPtr,System.Boolean)
extern "C"  void AlignMTB_photo_AlignMTB_setCut_10_m37568767 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_setExcludeRange_10(System.IntPtr,System.Int32)
extern "C"  void AlignMTB_photo_AlignMTB_setExcludeRange_10_m460379110 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___exclude_range, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_setMaxBits_10(System.IntPtr,System.Int32)
extern "C"  void AlignMTB_photo_AlignMTB_setMaxBits_10_m3645356817 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___max_bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_shiftMat_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void AlignMTB_photo_AlignMTB_shiftMat_10_m1423331472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, double ___shift_x, double ___shift_y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_delete(System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_delete_m3019987647 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
