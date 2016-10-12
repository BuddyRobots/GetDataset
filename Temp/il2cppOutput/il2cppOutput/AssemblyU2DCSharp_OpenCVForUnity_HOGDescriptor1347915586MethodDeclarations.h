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

// OpenCVForUnity.HOGDescriptor
struct HOGDescriptor_t1347915586;
// OpenCVForUnity.Size
struct Size_t1177469876;
// System.String
struct String_t;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t87860472;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.MatOfPoint
struct MatOfPoint_t97179692;
// OpenCVForUnity.MatOfDouble
struct MatOfDouble_t1782331771;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3218387278;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size1177469876.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat87860472.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint97179692.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDouble1782331771.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfRect3218387278.h"

// System.Void OpenCVForUnity.HOGDescriptor::.ctor(System.IntPtr)
extern "C"  void HOGDescriptor__ctor_m2187161667 (HOGDescriptor_t1347915586 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor(OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Int32,System.Int32,System.Double,System.Int32,System.Double,System.Boolean,System.Int32,System.Boolean)
extern "C"  void HOGDescriptor__ctor_m2489335545 (HOGDescriptor_t1347915586 * __this, Size_t1177469876 * ____winSize, Size_t1177469876 * ____blockSize, Size_t1177469876 * ____blockStride, Size_t1177469876 * ____cellSize, int32_t ____nbins, int32_t ____derivAperture, double ____winSigma, int32_t ____histogramNormType, double ____L2HysThreshold, bool ____gammaCorrection, int32_t ____nlevels, bool ____signedGradient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor(OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Int32)
extern "C"  void HOGDescriptor__ctor_m883436010 (HOGDescriptor_t1347915586 * __this, Size_t1177469876 * ____winSize, Size_t1177469876 * ____blockSize, Size_t1177469876 * ____blockStride, Size_t1177469876 * ____cellSize, int32_t ____nbins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor(System.String)
extern "C"  void HOGDescriptor__ctor_m2642930417 (HOGDescriptor_t1347915586 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor()
extern "C"  void HOGDescriptor__ctor_m293731249 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::Dispose(System.Boolean)
extern "C"  void HOGDescriptor_Dispose_m1592814757 (HOGDescriptor_t1347915586 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::checkDetectorSize()
extern "C"  bool HOGDescriptor_checkDetectorSize_m3747394058 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::load(System.String,System.String)
extern "C"  bool HOGDescriptor_load_m3960917041 (HOGDescriptor_t1347915586 * __this, String_t* ___filename, String_t* ___objname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::load(System.String)
extern "C"  bool HOGDescriptor_load_m1882358965 (HOGDescriptor_t1347915586 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::getWinSigma()
extern "C"  double HOGDescriptor_getWinSigma_m1171595659 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.HOGDescriptor::getDescriptorSize()
extern "C"  int64_t HOGDescriptor_getDescriptorSize_m1799228870 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfFloat OpenCVForUnity.HOGDescriptor::getDaimlerPeopleDetector()
extern "C"  MatOfFloat_t87860472 * HOGDescriptor_getDaimlerPeopleDetector_m1651637843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfFloat OpenCVForUnity.HOGDescriptor::getDefaultPeopleDetector()
extern "C"  MatOfFloat_t87860472 * HOGDescriptor_getDefaultPeopleDetector_m3077985916 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::compute(OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.MatOfPoint)
extern "C"  void HOGDescriptor_compute_m2420131047 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, MatOfFloat_t87860472 * ___descriptors, Size_t1177469876 * ___winStride, Size_t1177469876 * ___padding, MatOfPoint_t97179692 * ___locations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::compute(OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat)
extern "C"  void HOGDescriptor_compute_m2348130221 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, MatOfFloat_t87860472 * ___descriptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::computeGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Size)
extern "C"  void HOGDescriptor_computeGradient_m2265335559 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, Mat_t1174969555 * ___grad, Mat_t1174969555 * ___angleOfs, Size_t1177469876 * ___paddingTL, Size_t1177469876 * ___paddingBR, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::computeGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void HOGDescriptor_computeGradient_m2749630651 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, Mat_t1174969555 * ___grad, Mat_t1174969555 * ___angleOfs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detect(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfDouble,System.Double,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.MatOfPoint)
extern "C"  void HOGDescriptor_detect_m2085023760 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, MatOfPoint_t97179692 * ___foundLocations, MatOfDouble_t1782331771 * ___weights, double ___hitThreshold, Size_t1177469876 * ___winStride, Size_t1177469876 * ___padding, MatOfPoint_t97179692 * ___searchLocations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detect(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfDouble)
extern "C"  void HOGDescriptor_detect_m2221472282 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, MatOfPoint_t97179692 * ___foundLocations, MatOfDouble_t1782331771 * ___weights, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfDouble,System.Double,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Double,System.Double,System.Boolean)
extern "C"  void HOGDescriptor_detectMultiScale_m2489913438 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, MatOfRect_t3218387278 * ___foundLocations, MatOfDouble_t1782331771 * ___foundWeights, double ___hitThreshold, Size_t1177469876 * ___winStride, Size_t1177469876 * ___padding, double ___scale, double ___finalThreshold, bool ___useMeanshiftGrouping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfDouble)
extern "C"  void HOGDescriptor_detectMultiScale_m1424700735 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ___img, MatOfRect_t3218387278 * ___foundLocations, MatOfDouble_t1782331771 * ___foundWeights, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::save(System.String,System.String)
extern "C"  void HOGDescriptor_save_m3525279790 (HOGDescriptor_t1347915586 * __this, String_t* ___filename, String_t* ___objname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::save(System.String)
extern "C"  void HOGDescriptor_save_m2067351410 (HOGDescriptor_t1347915586 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::setSVMDetector(OpenCVForUnity.Mat)
extern "C"  void HOGDescriptor_setSVMDetector_m1836124102 (HOGDescriptor_t1347915586 * __this, Mat_t1174969555 * ____svmdetector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_winSize()
extern "C"  Size_t1177469876 * HOGDescriptor_get_winSize_m1211536214 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_blockSize()
extern "C"  Size_t1177469876 * HOGDescriptor_get_blockSize_m4109237575 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_blockStride()
extern "C"  Size_t1177469876 * HOGDescriptor_get_blockStride_m2851477727 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_cellSize()
extern "C"  Size_t1177469876 * HOGDescriptor_get_cellSize_m2350315564 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_nbins()
extern "C"  int32_t HOGDescriptor_get_nbins_m2151964402 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_derivAperture()
extern "C"  int32_t HOGDescriptor_get_derivAperture_m3031154662 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::get_winSigma()
extern "C"  double HOGDescriptor_get_winSigma_m4273257768 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_histogramNormType()
extern "C"  int32_t HOGDescriptor_get_histogramNormType_m1683113298 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::get_L2HysThreshold()
extern "C"  double HOGDescriptor_get_L2HysThreshold_m710812430 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::get_gammaCorrection()
extern "C"  bool HOGDescriptor_get_gammaCorrection_m679788983 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfFloat OpenCVForUnity.HOGDescriptor::get_svmDetector()
extern "C"  MatOfFloat_t87860472 * HOGDescriptor_get_svmDetector_m3652546221 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_nlevels()
extern "C"  int32_t HOGDescriptor_get_nlevels_m3369909781 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::get_signedGradient()
extern "C"  bool HOGDescriptor_get_signedGradient_m3062995644 (HOGDescriptor_t1347915586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_10(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Int32,System.Double,System.Boolean,System.Int32,System.Boolean)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_10_m1730292294 (Il2CppObject * __this /* static, unused */, double ____winSize_width, double ____winSize_height, double ____blockSize_width, double ____blockSize_height, double ____blockStride_width, double ____blockStride_height, double ____cellSize_width, double ____cellSize_height, int32_t ____nbins, int32_t ____derivAperture, double ____winSigma, int32_t ____histogramNormType, double ____L2HysThreshold, bool ____gammaCorrection, int32_t ____nlevels, bool ____signedGradient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_11(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_11_m1937588542 (Il2CppObject * __this /* static, unused */, double ____winSize_width, double ____winSize_height, double ____blockSize_width, double ____blockSize_height, double ____blockStride_width, double ____blockStride_height, double ____cellSize_width, double ____cellSize_height, int32_t ____nbins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_12(System.String)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_12_m3165506740 (Il2CppObject * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_13()
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_13_m3921771727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_checkDetectorSize_10(System.IntPtr)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_checkDetectorSize_10_m2110140489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_load_10(System.IntPtr,System.String,System.String)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_load_10_m2831979182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, String_t* ___objname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_load_11(System.IntPtr,System.String)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_load_11_m265119121 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getWinSigma_10(System.IntPtr)
extern "C"  double HOGDescriptor_objdetect_HOGDescriptor_getWinSigma_10_m2341908234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getDescriptorSize_10(System.IntPtr)
extern "C"  int64_t HOGDescriptor_objdetect_HOGDescriptor_getDescriptorSize_10_m3754726661 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getDaimlerPeopleDetector_10()
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_getDaimlerPeopleDetector_10_m3217640844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getDefaultPeopleDetector_10()
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_getDefaultPeopleDetector_10_m1146656963 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_compute_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_compute_10_m3865117119 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___descriptors_mat_nativeObj, double ___winStride_width, double ___winStride_height, double ___padding_width, double ___padding_height, IntPtr_t ___locations_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_compute_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_compute_11_m3032060512 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___descriptors_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_computeGradient_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_computeGradient_10_m3056207631 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___grad_nativeObj, IntPtr_t ___angleOfs_nativeObj, double ___paddingTL_width, double ___paddingTL_height, double ___paddingBR_width, double ___paddingBR_height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_computeGradient_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_computeGradient_11_m548023102 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___grad_nativeObj, IntPtr_t ___angleOfs_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detect_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detect_10_m2118812963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___foundLocations_mat_nativeObj, IntPtr_t ___weights_mat_nativeObj, double ___hitThreshold, double ___winStride_width, double ___winStride_height, double ___padding_width, double ___padding_height, IntPtr_t ___searchLocations_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detect_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detect_11_m3940095432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___foundLocations_mat_nativeObj, IntPtr_t ___weights_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detectMultiScale_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detectMultiScale_10_m2796238207 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___foundLocations_mat_nativeObj, IntPtr_t ___foundWeights_mat_nativeObj, double ___hitThreshold, double ___winStride_width, double ___winStride_height, double ___padding_width, double ___padding_height, double ___scale, double ___finalThreshold, bool ___useMeanshiftGrouping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detectMultiScale_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detectMultiScale_11_m1725429113 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___img_nativeObj, IntPtr_t ___foundLocations_mat_nativeObj, IntPtr_t ___foundWeights_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_save_10(System.IntPtr,System.String,System.String)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_save_10_m2858980433 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, String_t* ___objname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_save_11(System.IntPtr,System.String)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_save_11_m3852710004 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_setSVMDetector_10(System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_setSVMDetector_10_m1948964472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ____svmdetector_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1winSize_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1winSize_10_m2854112235 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1blockSize_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1blockSize_10_m2184096796 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1blockStride_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1blockStride_10_m770822644 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1cellSize_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1cellSize_10_m2086600851 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1nbins_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1nbins_10_m3159969308 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1derivAperture_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1derivAperture_10_m729035024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1winSigma_10(System.IntPtr)
extern "C"  double HOGDescriptor_objdetect_HOGDescriptor_get_1winSigma_10_m913633564 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1histogramNormType_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1histogramNormType_10_m1630311292 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1L2HysThreshold_10(System.IntPtr)
extern "C"  double HOGDescriptor_objdetect_HOGDescriptor_get_1L2HysThreshold_10_m1044015874 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1gammaCorrection_10(System.IntPtr)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_get_1gammaCorrection_10_m1941850477 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1svmDetector_10(System.IntPtr)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_get_1svmDetector_10_m3310985689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1nlevels_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1nlevels_10_m1195438527 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1signedGradient_10(System.IntPtr)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_get_1signedGradient_10_m1953057710 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_delete(System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_delete_m3275727201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
