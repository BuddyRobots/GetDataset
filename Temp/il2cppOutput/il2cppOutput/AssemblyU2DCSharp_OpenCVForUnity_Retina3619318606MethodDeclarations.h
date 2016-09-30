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

// OpenCVForUnity.Retina
struct Retina_t3619318606;
// OpenCVForUnity.Mat
struct Mat_t1174969555;
// OpenCVForUnity.Size
struct Size_t1177469876;
// System.String
struct String_t;
// System.Double[]
struct DoubleU5BU5D_t1048280995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat1174969555.h"
#include "mscorlib_System_String968488902.h"

// System.Void OpenCVForUnity.Retina::.ctor(System.IntPtr)
extern "C"  void Retina__ctor_m971416169 (Retina_t3619318606 * __this, IntPtr_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::Dispose(System.Boolean)
extern "C"  void Retina_Dispose_m2777891007 (Retina_t3619318606 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Retina::getMagnoRAW()
extern "C"  Mat_t1174969555 * Retina_getMagnoRAW_m1505011349 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Retina::getParvoRAW()
extern "C"  Mat_t1174969555 * Retina_getParvoRAW_m1416610191 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.Retina::getInputSize()
extern "C"  Size_t1177469876 * Retina_getInputSize_m3114254593 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.Retina::getOutputSize()
extern "C"  Size_t1177469876 * Retina_getOutputSize_m3115438062 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Retina::printSetup()
extern "C"  String_t* Retina_printSetup_m2113634502 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::activateContoursProcessing(System.Boolean)
extern "C"  void Retina_activateContoursProcessing_m1583966415 (Retina_t3619318606 * __this, bool ___activate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::activateMovingContoursProcessing(System.Boolean)
extern "C"  void Retina_activateMovingContoursProcessing_m2000950653 (Retina_t3619318606 * __this, bool ___activate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::applyFastToneMapping(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Retina_applyFastToneMapping_m4153296539 (Retina_t3619318606 * __this, Mat_t1174969555 * ___inputImage, Mat_t1174969555 * ___outputToneMappedImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::clearBuffers()
extern "C"  void Retina_clearBuffers_m3662660511 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::getMagno(OpenCVForUnity.Mat)
extern "C"  void Retina_getMagno_m3637238652 (Retina_t3619318606 * __this, Mat_t1174969555 * ___retinaOutput_magno, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::getMagnoRAW(OpenCVForUnity.Mat)
extern "C"  void Retina_getMagnoRAW_m731117208 (Retina_t3619318606 * __this, Mat_t1174969555 * ___retinaOutput_magno, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::getParvo(OpenCVForUnity.Mat)
extern "C"  void Retina_getParvo_m3383504194 (Retina_t3619318606 * __this, Mat_t1174969555 * ___retinaOutput_parvo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::getParvoRAW(OpenCVForUnity.Mat)
extern "C"  void Retina_getParvoRAW_m870319890 (Retina_t3619318606 * __this, Mat_t1174969555 * ___retinaOutput_parvo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::run(OpenCVForUnity.Mat)
extern "C"  void Retina_run_m2681651193 (Retina_t3619318606 * __this, Mat_t1174969555 * ___inputImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setColorSaturation(System.Boolean,System.Single)
extern "C"  void Retina_setColorSaturation_m2622868008 (Retina_t3619318606 * __this, bool ___saturateColors, float ___colorSaturationValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setColorSaturation()
extern "C"  void Retina_setColorSaturation_m1430269964 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setup(System.String,System.Boolean)
extern "C"  void Retina_setup_m3595021185 (Retina_t3619318606 * __this, String_t* ___retinaParameterFile, bool ___applyDefaultSetupOnFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setup()
extern "C"  void Retina_setup_m3387859014 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setupIPLMagnoChannel(System.Boolean,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Retina_setupIPLMagnoChannel_m4201322250 (Retina_t3619318606 * __this, bool ___normaliseOutput, float ___parasolCells_beta, float ___parasolCells_tau, float ___parasolCells_k, float ___amacrinCellsTemporalCutFrequency, float ___V0CompressionParameter, float ___localAdaptintegration_tau, float ___localAdaptintegration_k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setupIPLMagnoChannel()
extern "C"  void Retina_setupIPLMagnoChannel_m3248877264 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setupOPLandIPLParvoChannel(System.Boolean,System.Boolean,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Retina_setupOPLandIPLParvoChannel_m3399850443 (Retina_t3619318606 * __this, bool ___colorMode, bool ___normaliseOutput, float ___photoreceptorsLocalAdaptationSensitivity, float ___photoreceptorsTemporalConstant, float ___photoreceptorsSpatialConstant, float ___horizontalCellsGain, float ___HcellsTemporalConstant, float ___HcellsSpatialConstant, float ___ganglionCellsSensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::setupOPLandIPLParvoChannel()
extern "C"  void Retina_setupOPLandIPLParvoChannel_m317704862 (Retina_t3619318606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::write(System.String)
extern "C"  void Retina_write_m467096282 (Retina_t3619318606 * __this, String_t* ___fs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Retina::bioinspired_Retina_getMagnoRAW_10(System.IntPtr)
extern "C"  IntPtr_t Retina_bioinspired_Retina_getMagnoRAW_10_m3654731595 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Retina::bioinspired_Retina_getParvoRAW_10(System.IntPtr)
extern "C"  IntPtr_t Retina_bioinspired_Retina_getParvoRAW_10_m83930693 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_getInputSize_10(System.IntPtr,System.Double[])
extern "C"  void Retina_bioinspired_Retina_getInputSize_10_m4266068067 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_getOutputSize_10(System.IntPtr,System.Double[])
extern "C"  void Retina_bioinspired_Retina_getOutputSize_10_m4125142824 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, DoubleU5BU5D_t1048280995* ___vals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Retina::bioinspired_Retina_printSetup_10(System.IntPtr)
extern "C"  IntPtr_t Retina_bioinspired_Retina_printSetup_10_m1878202393 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_activateContoursProcessing_10(System.IntPtr,System.Boolean)
extern "C"  void Retina_bioinspired_Retina_activateContoursProcessing_10_m2795169578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, bool ___activate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_activateMovingContoursProcessing_10(System.IntPtr,System.Boolean)
extern "C"  void Retina_bioinspired_Retina_activateMovingContoursProcessing_10_m295849340 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, bool ___activate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_applyFastToneMapping_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_applyFastToneMapping_10_m3938357922 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___inputImage_nativeObj, IntPtr_t ___outputToneMappedImage_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_clearBuffers_10(System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_clearBuffers_10_m962138234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_getMagno_10(System.IntPtr,System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_getMagno_10_m539566976 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___retinaOutput_magno_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_getMagnoRAW_11(System.IntPtr,System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_getMagnoRAW_11_m400846221 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___retinaOutput_magno_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_getParvo_10(System.IntPtr,System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_getParvo_10_m2943286342 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___retinaOutput_parvo_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_getParvoRAW_11(System.IntPtr,System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_getParvoRAW_11_m3909719815 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___retinaOutput_parvo_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_run_10(System.IntPtr,System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_run_10_m3081669327 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, IntPtr_t ___inputImage_nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setColorSaturation_10(System.IntPtr,System.Boolean,System.Single)
extern "C"  void Retina_bioinspired_Retina_setColorSaturation_10_m3537795931 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, bool ___saturateColors, float ___colorSaturationValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setColorSaturation_11(System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_setColorSaturation_11_m3476715398 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setup_10(System.IntPtr,System.String,System.Boolean)
extern "C"  void Retina_bioinspired_Retina_setup_10_m2092953198 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___retinaParameterFile, bool ___applyDefaultSetupOnFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setup_11(System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_setup_11_m552668178 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setupIPLMagnoChannel_10(System.IntPtr,System.Boolean,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Retina_bioinspired_Retina_setupIPLMagnoChannel_10_m1709285749 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, bool ___normaliseOutput, float ___parasolCells_beta, float ___parasolCells_tau, float ___parasolCells_k, float ___amacrinCellsTemporalCutFrequency, float ___V0CompressionParameter, float ___localAdaptintegration_tau, float ___localAdaptintegration_k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setupIPLMagnoChannel_11(System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_setupIPLMagnoChannel_11_m2795782282 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setupOPLandIPLParvoChannel_10(System.IntPtr,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Retina_bioinspired_Retina_setupOPLandIPLParvoChannel_10_m3070537756 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, bool ___colorMode, bool ___normaliseOutput, float ___photoreceptorsLocalAdaptationSensitivity, float ___photoreceptorsTemporalConstant, float ___photoreceptorsSpatialConstant, float ___horizontalCellsGain, float ___HcellsTemporalConstant, float ___HcellsSpatialConstant, float ___ganglionCellsSensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_setupOPLandIPLParvoChannel_11(System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_setupOPLandIPLParvoChannel_11_m3494483736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_write_10(System.IntPtr,System.String)
extern "C"  void Retina_bioinspired_Retina_write_10_m4135982737 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, String_t* ___fs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Retina::bioinspired_Retina_delete(System.IntPtr)
extern "C"  void Retina_bioinspired_Retina_delete_m1245541033 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
