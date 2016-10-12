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

// OpenCVForUnitySample.HandPoseEstimationSample
struct HandPoseEstimationSample_t1958370454;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.Point
struct Point_t1252185347;
// OpenCVForUnity.Scalar
struct Scalar_t3645537183;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1252185347.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3645537183.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void OpenCVForUnitySample.HandPoseEstimationSample::.ctor()
extern "C"  void HandPoseEstimationSample__ctor_m3046904091 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::Start()
extern "C"  void HandPoseEstimationSample_Start_m1994041883 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnWebCamTextureToMatHelperInited()
extern "C"  void HandPoseEstimationSample_OnWebCamTextureToMatHelperInited_m85743082 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnWebCamTextureToMatHelperDisposed()
extern "C"  void HandPoseEstimationSample_OnWebCamTextureToMatHelperDisposed_m3519834720 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::Update()
extern "C"  void HandPoseEstimationSample_Update_m1691608402 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnDisable()
extern "C"  void HandPoseEstimationSample_OnDisable_m2259640322 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnBackButton()
extern "C"  void HandPoseEstimationSample_OnBackButton_m1073579265 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnPlayButton()
extern "C"  void HandPoseEstimationSample_OnPlayButton_m1152609870 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnPauseButton()
extern "C"  void HandPoseEstimationSample_OnPauseButton_m2917857634 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnStopButton()
extern "C"  void HandPoseEstimationSample_OnStopButton_m680148252 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::OnChangeCameraButton()
extern "C"  void HandPoseEstimationSample_OnChangeCameraButton_m2497157647 (HandPoseEstimationSample_t1958370454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::handPoseEstimationProcess(OpenCVForUnity.Mat)
extern "C"  void HandPoseEstimationSample_handPoseEstimationProcess_m4079328354 (HandPoseEstimationSample_t1958370454 * __this, Mat_t1174969555 * ___rgbaMat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.HandPoseEstimationSample::onTouch(OpenCVForUnity.Mat,OpenCVForUnity.Point)
extern "C"  void HandPoseEstimationSample_onTouch_m98434653 (HandPoseEstimationSample_t1958370454 * __this, Mat_t1174969555 * ___rgbaMat, Point_t1252185347 * ___touchPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Scalar OpenCVForUnitySample.HandPoseEstimationSample::converScalarHsv2Rgba(OpenCVForUnity.Scalar)
extern "C"  Scalar_t3645537183 * HandPoseEstimationSample_converScalarHsv2Rgba_m3997144690 (HandPoseEstimationSample_t1958370454 * __this, Scalar_t3645537183 * ___hsvColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnitySample.HandPoseEstimationSample::convertScreenPoint(OpenCVForUnity.Point,UnityEngine.GameObject,UnityEngine.Camera)
extern "C"  Point_t1252185347 * HandPoseEstimationSample_convertScreenPoint_m45008489 (Il2CppObject * __this /* static, unused */, Point_t1252185347 * ___screenPoint, GameObject_t4012695102 * ___quad, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
