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

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat2239483167.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m1883511258 (Texture2D_t2509538522 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m3705883154 (Texture2D_t2509538522 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D_Internal_Create_m457592211 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C"  int32_t Texture2D_get_format_m863889216 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C"  Texture2D_t2509538522 * Texture2D_get_whiteTexture_m1214146742 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C"  Color_t1588175760  Texture2D_GetPixelBilinear_m2169326019 (Texture2D_t2509538522 * __this, float ___u, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixelBilinear_m2056702809 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___self, float ___u, float ___v, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C"  void Texture2D_SetAllPixels32_m2090735797 (Texture2D_t2509538522 * __this, Color32U5BU5D_t1677970742* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C"  void Texture2D_SetPixels32_m1350049485 (Texture2D_t2509538522 * __this, Color32U5BU5D_t1677970742* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C"  void Texture2D_SetPixels32_m4259722026 (Texture2D_t2509538522 * __this, Color32U5BU5D_t1677970742* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::LoadRawTextureData_ImplPointer(System.IntPtr,System.Int32)
extern "C"  void Texture2D_LoadRawTextureData_ImplPointer_m1356963836 (Texture2D_t2509538522 * __this, IntPtr_t ___data, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.IntPtr,System.Int32)
extern "C"  void Texture2D_LoadRawTextureData_m4253014494 (Texture2D_t2509538522 * __this, IntPtr_t ___data, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
extern "C"  ByteU5BU5D_t58506160* Texture2D_GetRawTextureData_m1990240615 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C"  Color32U5BU5D_t1677970742* Texture2D_GetPixels32_m327121251 (Texture2D_t2509538522 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t1677970742* Texture2D_GetPixels32_m4076457746 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture2D_Apply_m2754532430 (Texture2D_t2509538522 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m1364130776 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
extern "C"  bool Texture2D_Resize_m3471718048 (Texture2D_t2509538522 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Internal_ResizeWH(System.Int32,System.Int32)
extern "C"  bool Texture2D_Internal_ResizeWH_m3271797007 (Texture2D_t2509538522 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToJPG(System.Int32)
extern "C"  ByteU5BU5D_t58506160* Texture2D_EncodeToJPG_m1915683733 (Texture2D_t2509538522 * __this, int32_t ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToJPG()
extern "C"  ByteU5BU5D_t58506160* Texture2D_EncodeToJPG_m2459014212 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
