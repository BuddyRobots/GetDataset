#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OpenCVForUnity.Point>
struct List_1_t2049144316;
// OpenCVForUnity.Mat
struct Mat_t1174969555;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicCircuit.RotateCamera
struct  RotateCamera_t3561981172  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<OpenCVForUnity.Point> MagicCircuit.RotateCamera::ptsBoard
	List_1_t2049144316 * ___ptsBoard_0;
	// System.Collections.Generic.List`1<OpenCVForUnity.Point> MagicCircuit.RotateCamera::ptsWindow
	List_1_t2049144316 * ___ptsWindow_1;
	// OpenCVForUnity.Mat MagicCircuit.RotateCamera::homo
	Mat_t1174969555 * ___homo_2;

public:
	inline static int32_t get_offset_of_ptsBoard_0() { return static_cast<int32_t>(offsetof(RotateCamera_t3561981172, ___ptsBoard_0)); }
	inline List_1_t2049144316 * get_ptsBoard_0() const { return ___ptsBoard_0; }
	inline List_1_t2049144316 ** get_address_of_ptsBoard_0() { return &___ptsBoard_0; }
	inline void set_ptsBoard_0(List_1_t2049144316 * value)
	{
		___ptsBoard_0 = value;
		Il2CppCodeGenWriteBarrier(&___ptsBoard_0, value);
	}

	inline static int32_t get_offset_of_ptsWindow_1() { return static_cast<int32_t>(offsetof(RotateCamera_t3561981172, ___ptsWindow_1)); }
	inline List_1_t2049144316 * get_ptsWindow_1() const { return ___ptsWindow_1; }
	inline List_1_t2049144316 ** get_address_of_ptsWindow_1() { return &___ptsWindow_1; }
	inline void set_ptsWindow_1(List_1_t2049144316 * value)
	{
		___ptsWindow_1 = value;
		Il2CppCodeGenWriteBarrier(&___ptsWindow_1, value);
	}

	inline static int32_t get_offset_of_homo_2() { return static_cast<int32_t>(offsetof(RotateCamera_t3561981172, ___homo_2)); }
	inline Mat_t1174969555 * get_homo_2() const { return ___homo_2; }
	inline Mat_t1174969555 ** get_address_of_homo_2() { return &___homo_2; }
	inline void set_homo_2(Mat_t1174969555 * value)
	{
		___homo_2 = value;
		Il2CppCodeGenWriteBarrier(&___homo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
