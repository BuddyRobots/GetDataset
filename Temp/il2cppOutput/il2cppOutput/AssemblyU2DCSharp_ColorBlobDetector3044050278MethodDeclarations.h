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

// ColorBlobDetector
struct ColorBlobDetector_t3044050278;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>
struct List_1_t894138661;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3645537183.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"

// System.Void ColorBlobDetector::.ctor()
extern "C"  void ColorBlobDetector__ctor_m2104220357 (ColorBlobDetector_t3044050278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorBlobDetector::.cctor()
extern "C"  void ColorBlobDetector__cctor_m324225416 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorBlobDetector::setColorRadius(OpenCVForUnity.Scalar)
extern "C"  void ColorBlobDetector_setColorRadius_m1730984079 (ColorBlobDetector_t3044050278 * __this, Scalar_t3645537183 * ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorBlobDetector::setHsvColor(OpenCVForUnity.Scalar)
extern "C"  void ColorBlobDetector_setHsvColor_m1094081828 (ColorBlobDetector_t3044050278 * __this, Scalar_t3645537183 * ___hsvColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat ColorBlobDetector::getSpectrum()
extern "C"  Mat_t1174969555 * ColorBlobDetector_getSpectrum_m2391539308 (ColorBlobDetector_t3044050278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorBlobDetector::setMinContourArea(System.Double)
extern "C"  void ColorBlobDetector_setMinContourArea_m2431936616 (ColorBlobDetector_t3044050278 * __this, double ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorBlobDetector::process(OpenCVForUnity.Mat)
extern "C"  void ColorBlobDetector_process_m852515799 (ColorBlobDetector_t3044050278 * __this, Mat_t1174969555 * ___rgbaImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint> ColorBlobDetector::getContours()
extern "C"  List_1_t894138661 * ColorBlobDetector_getContours_m2244208721 (ColorBlobDetector_t3044050278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
