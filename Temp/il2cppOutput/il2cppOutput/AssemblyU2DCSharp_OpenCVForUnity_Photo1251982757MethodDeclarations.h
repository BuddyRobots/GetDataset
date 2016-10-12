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

// OpenCVForUnity.Photo
struct Photo_t1251982757;
// OpenCVForUnity.AlignMTB
struct AlignMTB_t2959101449;
// OpenCVForUnity.CalibrateDebevec
struct CalibrateDebevec_t843196284;
// OpenCVForUnity.CalibrateRobertson
struct CalibrateRobertson_t952918396;
// OpenCVForUnity.MergeDebevec
struct MergeDebevec_t2145015019;
// OpenCVForUnity.MergeMertens
struct MergeMertens_t1557820715;
// OpenCVForUnity.MergeRobertson
struct MergeRobertson_t2165239595;
// OpenCVForUnity.Tonemap
struct Tonemap_t1698330141;
// OpenCVForUnity.TonemapDrago
struct TonemapDrago_t3677911268;
// OpenCVForUnity.TonemapDurand
struct TonemapDurand_t1462336243;
// OpenCVForUnity.TonemapMantiuk
struct TonemapMantiuk_t317599182;
// OpenCVForUnity.TonemapReinhard
struct TonemapReinhard_t3894001600;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t1971928524;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t87860472;
// OpenCVForUnity.Point
struct Point_t1252185347;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat87860472.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1252185347.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Photo::.ctor()
extern "C"  void Photo__ctor_m2174523822 (Photo_t1251982757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AlignMTB OpenCVForUnity.Photo::createAlignMTB(System.Int32,System.Int32,System.Boolean)
extern "C"  AlignMTB_t2959101449 * Photo_createAlignMTB_m2969730903 (Il2CppObject * __this /* static, unused */, int32_t ___max_bits, int32_t ___exclude_range, bool ___cut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AlignMTB OpenCVForUnity.Photo::createAlignMTB()
extern "C"  AlignMTB_t2959101449 * Photo_createAlignMTB_m2450960320 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.CalibrateDebevec OpenCVForUnity.Photo::createCalibrateDebevec(System.Int32,System.Single,System.Boolean)
extern "C"  CalibrateDebevec_t843196284 * Photo_createCalibrateDebevec_m1251845799 (Il2CppObject * __this /* static, unused */, int32_t ___samples, float ___lambda, bool ___random, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.CalibrateDebevec OpenCVForUnity.Photo::createCalibrateDebevec()
extern "C"  CalibrateDebevec_t843196284 * Photo_createCalibrateDebevec_m2422482848 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.CalibrateRobertson OpenCVForUnity.Photo::createCalibrateRobertson(System.Int32,System.Single)
extern "C"  CalibrateRobertson_t952918396 * Photo_createCalibrateRobertson_m3644881686 (Il2CppObject * __this /* static, unused */, int32_t ___max_iter, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.CalibrateRobertson OpenCVForUnity.Photo::createCalibrateRobertson()
extern "C"  CalibrateRobertson_t952918396 * Photo_createCalibrateRobertson_m3377915040 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MergeDebevec OpenCVForUnity.Photo::createMergeDebevec()
extern "C"  MergeDebevec_t2145015019 * Photo_createMergeDebevec_m3643317888 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MergeMertens OpenCVForUnity.Photo::createMergeMertens(System.Single,System.Single,System.Single)
extern "C"  MergeMertens_t1557820715 * Photo_createMergeMertens_m4252249525 (Il2CppObject * __this /* static, unused */, float ___contrast_weight, float ___saturation_weight, float ___exposure_weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MergeMertens OpenCVForUnity.Photo::createMergeMertens()
extern "C"  MergeMertens_t1557820715 * Photo_createMergeMertens_m3253200512 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MergeRobertson OpenCVForUnity.Photo::createMergeRobertson()
extern "C"  MergeRobertson_t2165239595 * Photo_createMergeRobertson_m2292951872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Tonemap OpenCVForUnity.Photo::createTonemap(System.Single)
extern "C"  Tonemap_t1698330141 * Photo_createTonemap_m1461998281 (Il2CppObject * __this /* static, unused */, float ___gamma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Tonemap OpenCVForUnity.Photo::createTonemap()
extern "C"  Tonemap_t1698330141 * Photo_createTonemap_m2015049250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapDrago OpenCVForUnity.Photo::createTonemapDrago(System.Single,System.Single,System.Single)
extern "C"  TonemapDrago_t3677911268 * Photo_createTonemapDrago_m1961629077 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___saturation, float ___bias, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapDrago OpenCVForUnity.Photo::createTonemapDrago()
extern "C"  TonemapDrago_t3677911268 * Photo_createTonemapDrago_m902439584 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapDurand OpenCVForUnity.Photo::createTonemapDurand(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  TonemapDurand_t1462336243 * Photo_createTonemapDurand_m1512847601 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___contrast, float ___saturation, float ___sigma_space, float ___sigma_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapDurand OpenCVForUnity.Photo::createTonemapDurand()
extern "C"  TonemapDurand_t1462336243 * Photo_createTonemapDurand_m3787846542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapMantiuk OpenCVForUnity.Photo::createTonemapMantiuk(System.Single,System.Single,System.Single)
extern "C"  TonemapMantiuk_t317599182 * Photo_createTonemapMantiuk_m1547605205 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___scale, float ___saturation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapMantiuk OpenCVForUnity.Photo::createTonemapMantiuk()
extern "C"  TonemapMantiuk_t317599182 * Photo_createTonemapMantiuk_m2544008032 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapReinhard OpenCVForUnity.Photo::createTonemapReinhard(System.Single,System.Single,System.Single,System.Single)
extern "C"  TonemapReinhard_t3894001600 * Photo_createTonemapReinhard_m959409906 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___intensity, float ___light_adapt, float ___color_adapt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TonemapReinhard OpenCVForUnity.Photo::createTonemapReinhard()
extern "C"  TonemapReinhard_t3894001600 * Photo_createTonemapReinhard_m3707652712 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::colorChange(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single,System.Single)
extern "C"  void Photo_colorChange_m2051396563 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, float ___red_mul, float ___green_mul, float ___blue_mul, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::colorChange(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_colorChange_m3251863140 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::decolor(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_decolor_m1760452019 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___grayscale, Mat_t1174969555 * ___color_boost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::denoise_TVL1(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Photo_denoise_TVL1_m2050578490 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___observations, Mat_t1174969555 * ___result, double ___lambda, int32_t ___niters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::denoise_TVL1(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void Photo_denoise_TVL1_m3660173569 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___observations, Mat_t1174969555 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::detailEnhance(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single)
extern "C"  void Photo_detailEnhance_m1746331207 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, float ___sigma_s, float ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::detailEnhance(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_detailEnhance_m3452474045 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::edgePreservingFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Single,System.Single)
extern "C"  void Photo_edgePreservingFilter_m1629889327 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, int32_t ___flags, float ___sigma_s, float ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::edgePreservingFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_edgePreservingFilter_m1583770226 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoising_m97274579 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, float ___h, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_fastNlMeansDenoising_m2627065038 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat,System.Int32,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoising_m3240729415 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, MatOfFloat_t87860472 * ___h, int32_t ___templateWindowSize, int32_t ___searchWindowSize, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat)
extern "C"  void Photo_fastNlMeansDenoising_m2832880176 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, MatOfFloat_t87860472 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingColored(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoisingColored_m3384367396 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, float ___h, float ___hColor, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingColored(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_fastNlMeansDenoisingColored_m225970874 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingColoredMulti(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoisingColoredMulti_m2637597751 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___srcImgs, Mat_t1174969555 * ___dst, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, float ___h, float ___hColor, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingColoredMulti(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoisingColoredMulti_m2922306061 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___srcImgs, Mat_t1174969555 * ___dst, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingMulti(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoisingMulti_m1458714150 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___srcImgs, Mat_t1174969555 * ___dst, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, float ___h, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingMulti(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoisingMulti_m1490013985 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___srcImgs, Mat_t1174969555 * ___dst, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingMulti(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.MatOfFloat,System.Int32,System.Int32,System.Int32)
extern "C"  void Photo_fastNlMeansDenoisingMulti_m2892497748 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___srcImgs, Mat_t1174969555 * ___dst, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, MatOfFloat_t87860472 * ___h, int32_t ___templateWindowSize, int32_t ___searchWindowSize, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::fastNlMeansDenoisingMulti(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.MatOfFloat)
extern "C"  void Photo_fastNlMeansDenoisingMulti_m3749198531 (Il2CppObject * __this /* static, unused */, List_1_t1971928524 * ___srcImgs, Mat_t1174969555 * ___dst, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, MatOfFloat_t87860472 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::illuminationChange(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single)
extern "C"  void Photo_illuminationChange_m3042809636 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, float ___alpha, float ___beta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::illuminationChange(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_illuminationChange_m1866088730 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::inpaint(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Photo_inpaint_m2483851729 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___inpaintMask, Mat_t1174969555 * ___dst, double ___inpaintRadius, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::pencilSketch(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single,System.Single)
extern "C"  void Photo_pencilSketch_m134745731 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst1, Mat_t1174969555 * ___dst2, float ___sigma_s, float ___sigma_r, float ___shade_factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::pencilSketch(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_pencilSketch_m3572831508 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst1, Mat_t1174969555 * ___dst2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::seamlessClone(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Photo_seamlessClone_m3164009584 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, Mat_t1174969555 * ___mask, Point_t1252185347 * ___p, Mat_t1174969555 * ___blend, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::stylization(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single)
extern "C"  void Photo_stylization_m282969876 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, float ___sigma_s, float ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::stylization(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_stylization_m1939650826 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::textureFlattening(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single,System.Single,System.Int32)
extern "C"  void Photo_textureFlattening_m2989268675 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, float ___low_threshold, float ___high_threshold, int32_t ___kernel_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::textureFlattening(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Photo_textureFlattening_m3254452362 (Il2CppObject * __this /* static, unused */, Mat_t1174969555 * ___src, Mat_t1174969555 * ___mask, Mat_t1174969555 * ___dst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createAlignMTB_10(System.Int32,System.Int32,System.Boolean)
extern "C"  IntPtr_t Photo_photo_Photo_createAlignMTB_10_m2741946816 (Il2CppObject * __this /* static, unused */, int32_t ___max_bits, int32_t ___exclude_range, bool ___cut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createAlignMTB_11()
extern "C"  IntPtr_t Photo_photo_Photo_createAlignMTB_11_m1271159530 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createCalibrateDebevec_10(System.Int32,System.Single,System.Boolean)
extern "C"  IntPtr_t Photo_photo_Photo_createCalibrateDebevec_10_m2223943025 (Il2CppObject * __this /* static, unused */, int32_t ___samples, float ___lambda, bool ___random, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createCalibrateDebevec_11()
extern "C"  IntPtr_t Photo_photo_Photo_createCalibrateDebevec_11_m1670500695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createCalibrateRobertson_10(System.Int32,System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createCalibrateRobertson_10_m3954023052 (Il2CppObject * __this /* static, unused */, int32_t ___max_iter, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createCalibrateRobertson_11()
extern "C"  IntPtr_t Photo_photo_Photo_createCalibrateRobertson_11_m2274979671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createMergeDebevec_10()
extern "C"  IntPtr_t Photo_photo_Photo_createMergeDebevec_10_m4109008263 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createMergeMertens_10(System.Single,System.Single,System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createMergeMertens_10_m991795918 (Il2CppObject * __this /* static, unused */, float ___contrast_weight, float ___saturation_weight, float ___exposure_weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createMergeMertens_11()
extern "C"  IntPtr_t Photo_photo_Photo_createMergeMertens_11_m1077184776 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createMergeRobertson_10()
extern "C"  IntPtr_t Photo_photo_Photo_createMergeRobertson_10_m629531463 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemap_10(System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createTonemap_10_m3154350966 (Il2CppObject * __this /* static, unused */, float ___gamma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemap_11()
extern "C"  IntPtr_t Photo_photo_Photo_createTonemap_11_m1744790550 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapDrago_10(System.Single,System.Single,System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapDrago_10_m2561934023 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___saturation, float ___bias, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapDrago_11()
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapDrago_11_m1724969199 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapDurand_10(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapDurand_10_m3602772448 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___contrast, float ___saturation, float ___sigma_space, float ___sigma_color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapDurand_11()
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapDurand_11_m2409114880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapMantiuk_10(System.Single,System.Single,System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapMantiuk_10_m1947670065 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___scale, float ___saturation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapMantiuk_11()
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapMantiuk_11_m3382924869 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapReinhard_10(System.Single,System.Single,System.Single,System.Single)
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapReinhard_10_m3604532616 (Il2CppObject * __this /* static, unused */, float ___gamma, float ___intensity, float ___light_adapt, float ___color_adapt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Photo::photo_Photo_createTonemapReinhard_11()
extern "C"  IntPtr_t Photo_photo_Photo_createTonemapReinhard_11_m1533888595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_colorChange_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single,System.Single)
extern "C"  void Photo_photo_Photo_colorChange_10_m835480100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, float ___red_mul, float ___green_mul, float ___blue_mul, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_colorChange_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_colorChange_11_m103318356 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_decolor_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_decolor_10_m551545540 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___grayscale_nativeObj, IntPtr_t ___color_boost_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_denoise_1TVL1_10(System.IntPtr,System.IntPtr,System.Double,System.Int32)
extern "C"  void Photo_photo_Photo_denoise_1TVL1_10_m2624252949 (Il2CppObject * __this /* static, unused */, IntPtr_t ___observations_mat_nativeObj, IntPtr_t ___result_nativeObj, double ___lambda, int32_t ___niters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_denoise_1TVL1_11(System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_denoise_1TVL1_11_m2150329765 (Il2CppObject * __this /* static, unused */, IntPtr_t ___observations_mat_nativeObj, IntPtr_t ___result_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_detailEnhance_10(System.IntPtr,System.IntPtr,System.Single,System.Single)
extern "C"  void Photo_photo_Photo_detailEnhance_10_m1441154587 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, float ___sigma_s, float ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_detailEnhance_11(System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_detailEnhance_11_m2085938224 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_edgePreservingFilter_10(System.IntPtr,System.IntPtr,System.Int32,System.Single,System.Single)
extern "C"  void Photo_photo_Photo_edgePreservingFilter_10_m2323474609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___flags, float ___sigma_s, float ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_edgePreservingFilter_11(System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_edgePreservingFilter_11_m881438287 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoising_10(System.IntPtr,System.IntPtr,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoising_10_m2035859417 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, float ___h, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoising_11(System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoising_11_m1404892019 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoising_12(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoising_12_m3231578711 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___h_mat_nativeObj, int32_t ___templateWindowSize, int32_t ___searchWindowSize, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoising_13(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoising_13_m961539711 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___h_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingColored_10(System.IntPtr,System.IntPtr,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingColored_10_m809041822 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, float ___h, float ___hColor, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingColored_11(System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingColored_11_m3648445523 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingColoredMulti_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingColoredMulti_10_m2522774229 (Il2CppObject * __this /* static, unused */, IntPtr_t ___srcImgs_mat_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, float ___h, float ___hColor, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingColoredMulti_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingColoredMulti_11_m1220140554 (Il2CppObject * __this /* static, unused */, IntPtr_t ___srcImgs_mat_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingMulti_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Single,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingMulti_10_m789333264 (Il2CppObject * __this /* static, unused */, IntPtr_t ___srcImgs_mat_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, float ___h, int32_t ___templateWindowSize, int32_t ___searchWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingMulti_11(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingMulti_11_m1635312362 (Il2CppObject * __this /* static, unused */, IntPtr_t ___srcImgs_mat_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingMulti_12(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingMulti_12_m1498523648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___srcImgs_mat_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, IntPtr_t ___h_mat_nativeObj, int32_t ___templateWindowSize, int32_t ___searchWindowSize, int32_t ___normType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_fastNlMeansDenoisingMulti_13(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.IntPtr)
extern "C"  void Photo_photo_Photo_fastNlMeansDenoisingMulti_13_m2900619318 (Il2CppObject * __this /* static, unused */, IntPtr_t ___srcImgs_mat_nativeObj, IntPtr_t ___dst_nativeObj, int32_t ___imgToDenoiseIndex, int32_t ___temporalWindowSize, IntPtr_t ___h_mat_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_illuminationChange_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single)
extern "C"  void Photo_photo_Photo_illuminationChange_10_m2747518057 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, float ___alpha, float ___beta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_illuminationChange_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_illuminationChange_11_m1848314174 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_inpaint_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32)
extern "C"  void Photo_photo_Photo_inpaint_10_m2509875104 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___inpaintMask_nativeObj, IntPtr_t ___dst_nativeObj, double ___inpaintRadius, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_pencilSketch_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single,System.Single)
extern "C"  void Photo_photo_Photo_pencilSketch_10_m512459144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst1_nativeObj, IntPtr_t ___dst2_nativeObj, float ___sigma_s, float ___sigma_r, float ___shade_factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_pencilSketch_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_pencilSketch_11_m2342606776 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst1_nativeObj, IntPtr_t ___dst2_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_seamlessClone_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Photo_photo_Photo_seamlessClone_10_m3900198793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, IntPtr_t ___mask_nativeObj, double ___p_x, double ___p_y, IntPtr_t ___blend_nativeObj, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_stylization_10(System.IntPtr,System.IntPtr,System.Single,System.Single)
extern "C"  void Photo_photo_Photo_stylization_10_m2850663278 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, float ___sigma_s, float ___sigma_r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_stylization_11(System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_stylization_11_m131822595 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_textureFlattening_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single,System.Int32)
extern "C"  void Photo_photo_Photo_textureFlattening_10_m280673746 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, float ___low_threshold, float ___high_threshold, int32_t ___kernel_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Photo::photo_Photo_textureFlattening_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Photo_photo_Photo_textureFlattening_11_m545706490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj, IntPtr_t ___mask_nativeObj, IntPtr_t ___dst_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
