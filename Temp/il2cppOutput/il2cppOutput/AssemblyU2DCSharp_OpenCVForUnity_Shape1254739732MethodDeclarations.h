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

// OpenCVForUnity.Shape
struct Shape_t1254739732;
// OpenCVForUnity.AffineTransformer
struct AffineTransformer_t2219391917;
// OpenCVForUnity.HausdorffDistanceExtractor
struct HausdorffDistanceExtractor_t2195603954;
// OpenCVForUnity.HistogramCostExtractor
struct HistogramCostExtractor_t2652725638;
// OpenCVForUnity.ShapeContextDistanceExtractor
struct ShapeContextDistanceExtractor_t1627194356;
// OpenCVForUnity.ShapeTransformer
struct ShapeTransformer_t3441621611;
// OpenCVForUnity.ThinPlateSplineShapeTransformer
struct ThinPlateSplineShapeTransformer_t368782457;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_HistogramCostExtr2652725638.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_ShapeTransformer3441621611.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void OpenCVForUnity.Shape::.ctor()
extern "C"  void Shape__ctor_m3708663071 (Shape_t1254739732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AffineTransformer OpenCVForUnity.Shape::createAffineTransformer(System.Boolean)
extern "C"  AffineTransformer_t2219391917 * Shape_createAffineTransformer_m1532246634 (Il2CppObject * __this /* static, unused */, bool ___fullAffine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HausdorffDistanceExtractor OpenCVForUnity.Shape::createHausdorffDistanceExtractor(System.Int32,System.Single)
extern "C"  HausdorffDistanceExtractor_t2195603954 * Shape_createHausdorffDistanceExtractor_m3569216389 (Il2CppObject * __this /* static, unused */, int32_t ___distanceFlag, float ___rankProp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HausdorffDistanceExtractor OpenCVForUnity.Shape::createHausdorffDistanceExtractor()
extern "C"  HausdorffDistanceExtractor_t2195603954 * Shape_createHausdorffDistanceExtractor_m1206682063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createChiHistogramCostExtractor(System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createChiHistogramCostExtractor_m1773727603 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createChiHistogramCostExtractor()
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createChiHistogramCostExtractor_m3543503677 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDHistogramCostExtractor(System.Int32,System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createEMDHistogramCostExtractor_m3686051478 (Il2CppObject * __this /* static, unused */, int32_t ___flag, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDHistogramCostExtractor()
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createEMDHistogramCostExtractor_m4176531285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDL1HistogramCostExtractor(System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createEMDL1HistogramCostExtractor_m2358529904 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDL1HistogramCostExtractor()
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createEMDL1HistogramCostExtractor_m1828091258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createNormHistogramCostExtractor(System.Int32,System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createNormHistogramCostExtractor_m3815506688 (Il2CppObject * __this /* static, unused */, int32_t ___flag, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createNormHistogramCostExtractor()
extern "C"  HistogramCostExtractor_t2652725638 * Shape_createNormHistogramCostExtractor_m3749582379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ShapeContextDistanceExtractor OpenCVForUnity.Shape::createShapeContextDistanceExtractor(System.Int32,System.Int32,System.Single,System.Single,System.Int32,OpenCVForUnity.HistogramCostExtractor,OpenCVForUnity.ShapeTransformer)
extern "C"  ShapeContextDistanceExtractor_t1627194356 * Shape_createShapeContextDistanceExtractor_m1322892619 (Il2CppObject * __this /* static, unused */, int32_t ___nAngularBins, int32_t ___nRadialBins, float ___innerRadius, float ___outerRadius, int32_t ___iterations, HistogramCostExtractor_t2652725638 * ___comparer, ShapeTransformer_t3441621611 * ___transformer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ShapeContextDistanceExtractor OpenCVForUnity.Shape::createShapeContextDistanceExtractor()
extern "C"  ShapeContextDistanceExtractor_t1627194356 * Shape_createShapeContextDistanceExtractor_m3666133889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ThinPlateSplineShapeTransformer OpenCVForUnity.Shape::createThinPlateSplineShapeTransformer(System.Double)
extern "C"  ThinPlateSplineShapeTransformer_t368782457 * Shape_createThinPlateSplineShapeTransformer_m999623127 (Il2CppObject * __this /* static, unused */, double ___regularizationParameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ThinPlateSplineShapeTransformer OpenCVForUnity.Shape::createThinPlateSplineShapeTransformer()
extern "C"  ThinPlateSplineShapeTransformer_t368782457 * Shape_createThinPlateSplineShapeTransformer_m1823531851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createAffineTransformer_10(System.Boolean)
extern "C"  IntPtr_t Shape_shape_Shape_createAffineTransformer_10_m2902729613 (Il2CppObject * __this /* static, unused */, bool ___fullAffine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createHausdorffDistanceExtractor_10(System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createHausdorffDistanceExtractor_10_m534684133 (Il2CppObject * __this /* static, unused */, int32_t ___distanceFlag, float ___rankProp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createHausdorffDistanceExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createHausdorffDistanceExtractor_11_m3654579184 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createChiHistogramCostExtractor_10(System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createChiHistogramCostExtractor_10_m566639503 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createChiHistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createChiHistogramCostExtractor_11_m1800130074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDHistogramCostExtractor_10(System.Int32,System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createEMDHistogramCostExtractor_10_m802141482 (Il2CppObject * __this /* static, unused */, int32_t ___flag, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDHistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createEMDHistogramCostExtractor_11_m1124203266 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDL1HistogramCostExtractor_10(System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createEMDL1HistogramCostExtractor_10_m480264434 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDL1HistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createEMDL1HistogramCostExtractor_11_m1392789821 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createNormHistogramCostExtractor_10(System.Int32,System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createNormHistogramCostExtractor_10_m4258265836 (Il2CppObject * __this /* static, unused */, int32_t ___flag, int32_t ___nDummies, float ___defaultCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createNormHistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createNormHistogramCostExtractor_11_m1763525504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createShapeContextDistanceExtractor_10(System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Shape_shape_Shape_createShapeContextDistanceExtractor_10_m3580512434 (Il2CppObject * __this /* static, unused */, int32_t ___nAngularBins, int32_t ___nRadialBins, float ___innerRadius, float ___outerRadius, int32_t ___iterations, IntPtr_t ___comparer_nativeObj, IntPtr_t ___transformer_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createShapeContextDistanceExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createShapeContextDistanceExtractor_11_m2530196208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createThinPlateSplineShapeTransformer_10(System.Double)
extern "C"  IntPtr_t Shape_shape_Shape_createThinPlateSplineShapeTransformer_10_m4006550008 (Il2CppObject * __this /* static, unused */, double ___regularizationParameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createThinPlateSplineShapeTransformer_11()
extern "C"  IntPtr_t Shape_shape_Shape_createThinPlateSplineShapeTransformer_11_m2501522763 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
