#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OpenCVForUnity.Point
struct Point_t1252185347;
// OpenCVForUnity.Size
struct Size_t1177469876;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnity.RotatedRect
struct  RotatedRect_t415848288  : public Il2CppObject
{
public:
	// OpenCVForUnity.Point OpenCVForUnity.RotatedRect::center
	Point_t1252185347 * ___center_0;
	// OpenCVForUnity.Size OpenCVForUnity.RotatedRect::size
	Size_t1177469876 * ___size_1;
	// System.Double OpenCVForUnity.RotatedRect::angle
	double ___angle_2;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(RotatedRect_t415848288, ___center_0)); }
	inline Point_t1252185347 * get_center_0() const { return ___center_0; }
	inline Point_t1252185347 ** get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Point_t1252185347 * value)
	{
		___center_0 = value;
		Il2CppCodeGenWriteBarrier(&___center_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RotatedRect_t415848288, ___size_1)); }
	inline Size_t1177469876 * get_size_1() const { return ___size_1; }
	inline Size_t1177469876 ** get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Size_t1177469876 * value)
	{
		___size_1 = value;
		Il2CppCodeGenWriteBarrier(&___size_1, value);
	}

	inline static int32_t get_offset_of_angle_2() { return static_cast<int32_t>(offsetof(RotatedRect_t415848288, ___angle_2)); }
	inline double get_angle_2() const { return ___angle_2; }
	inline double* get_address_of_angle_2() { return &___angle_2; }
	inline void set_angle_2(double value)
	{
		___angle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
