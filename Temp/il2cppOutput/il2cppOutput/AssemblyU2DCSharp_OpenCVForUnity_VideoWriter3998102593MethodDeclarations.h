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

// OpenCVForUnity.VideoWriter
struct VideoWriter_t3998102593;
// System.String
struct String_t;
// OpenCVForUnity.Size
struct Size_t1177469876;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void OpenCVForUnity.VideoWriter::.ctor(System.IntPtr)
extern "C"  void VideoWriter__ctor_m1251846338 (VideoWriter_t3998102593 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::.ctor(System.String,System.Int32,System.Double,OpenCVForUnity.Size,System.Boolean)
extern "C"  void VideoWriter__ctor_m3279634964 (VideoWriter_t3998102593 * __this, String_t* ___filename, int32_t ___fourcc, double ___fps, Size_t1177469876 * ___frameSize, bool ___isColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::.ctor(System.String,System.Int32,System.Double,OpenCVForUnity.Size)
extern "C"  void VideoWriter__ctor_m3265173065 (VideoWriter_t3998102593 * __this, String_t* ___filename, int32_t ___fourcc, double ___fps, Size_t1177469876 * ___frameSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::.ctor()
extern "C"  void VideoWriter__ctor_m1165287634 (VideoWriter_t3998102593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::Dispose(System.Boolean)
extern "C"  void VideoWriter_Dispose_m3361664966 (VideoWriter_t3998102593 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::isOpened()
extern "C"  bool VideoWriter_isOpened_m3859992249 (VideoWriter_t3998102593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::open(System.String,System.Int32,System.Double,OpenCVForUnity.Size,System.Boolean)
extern "C"  bool VideoWriter_open_m3578729622 (VideoWriter_t3998102593 * __this, String_t* ___filename, int32_t ___fourcc, double ___fps, Size_t1177469876 * ___frameSize, bool ___isColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::open(System.String,System.Int32,System.Double,OpenCVForUnity.Size)
extern "C"  bool VideoWriter_open_m902057991 (VideoWriter_t3998102593 * __this, String_t* ___filename, int32_t ___fourcc, double ___fps, Size_t1177469876 * ___frameSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::set(System.Int32,System.Double)
extern "C"  bool VideoWriter_set_m1998823435 (VideoWriter_t3998102593 * __this, int32_t ___propId, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.VideoWriter::get(System.Int32)
extern "C"  double VideoWriter_get_m1418302068 (VideoWriter_t3998102593 * __this, int32_t ___propId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.VideoWriter::fourcc(System.Char,System.Char,System.Char,System.Char)
extern "C"  int32_t VideoWriter_fourcc_m4022694012 (Il2CppObject * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, uint16_t ___c3, uint16_t ___c4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::release()
extern "C"  void VideoWriter_release_m882960535 (VideoWriter_t3998102593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::write(OpenCVForUnity.Mat)
extern "C"  void VideoWriter_write_m476353172 (VideoWriter_t3998102593 * __this, Mat_t1174969555 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoWriter::videoio_VideoWriter_VideoWriter_10(System.String,System.Int32,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t VideoWriter_videoio_VideoWriter_VideoWriter_10_m2467352622 (Il2CppObject * __this /* static, unused */, String_t* ___filename, int32_t ___fourcc, double ___fps, double ___frameSize_width, double ___frameSize_height, bool ___isColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoWriter::videoio_VideoWriter_VideoWriter_11(System.String,System.Int32,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t VideoWriter_videoio_VideoWriter_VideoWriter_11_m2622589616 (Il2CppObject * __this /* static, unused */, String_t* ___filename, int32_t ___fourcc, double ___fps, double ___frameSize_width, double ___frameSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoWriter::videoio_VideoWriter_VideoWriter_12()
extern "C"  IntPtr_t VideoWriter_videoio_VideoWriter_VideoWriter_12_m1623595176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_isOpened_10(System.IntPtr)
extern "C"  bool VideoWriter_videoio_VideoWriter_isOpened_10_m3234811132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_open_10(System.IntPtr,System.String,System.Int32,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  bool VideoWriter_videoio_VideoWriter_open_10_m564859041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, int32_t ___fourcc, double ___fps, double ___frameSize_width, double ___frameSize_height, bool ___isColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_open_11(System.IntPtr,System.String,System.Int32,System.Double,System.Double,System.Double)
extern "C"  bool VideoWriter_videoio_VideoWriter_open_11_m3186330845 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, int32_t ___fourcc, double ___fps, double ___frameSize_width, double ___frameSize_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_set_10(System.IntPtr,System.Int32,System.Double)
extern "C"  bool VideoWriter_videoio_VideoWriter_set_10_m189871216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___propId, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.VideoWriter::videoio_VideoWriter_get_10(System.IntPtr,System.Int32)
extern "C"  double VideoWriter_videoio_VideoWriter_get_10_m39123823 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, int32_t ___propId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.VideoWriter::videoio_VideoWriter_fourcc_10(System.Char,System.Char,System.Char,System.Char)
extern "C"  int32_t VideoWriter_videoio_VideoWriter_fourcc_10_m1220018551 (Il2CppObject * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, uint16_t ___c3, uint16_t ___c4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::videoio_VideoWriter_release_10(System.IntPtr)
extern "C"  void VideoWriter_videoio_VideoWriter_release_10_m2063671644 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::videoio_VideoWriter_write_10(System.IntPtr,System.IntPtr)
extern "C"  void VideoWriter_videoio_VideoWriter_write_10_m997340610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___image_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::videoio_VideoWriter_delete(System.IntPtr)
extern "C"  void VideoWriter_videoio_VideoWriter_delete_m1068083848 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
