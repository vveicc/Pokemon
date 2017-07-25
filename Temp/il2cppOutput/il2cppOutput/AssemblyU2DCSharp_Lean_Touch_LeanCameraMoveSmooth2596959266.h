#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanCameraMove3286370368.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanCameraMoveSmooth
struct  LeanCameraMoveSmooth_t2596959266  : public LeanCameraMove_t3286370368
{
public:
	// System.Single Lean.Touch.LeanCameraMoveSmooth::Dampening
	float ___Dampening_7;
	// UnityEngine.Vector3 Lean.Touch.LeanCameraMoveSmooth::remainingDelta
	Vector3_t2243707580  ___remainingDelta_8;

public:
	inline static int32_t get_offset_of_Dampening_7() { return static_cast<int32_t>(offsetof(LeanCameraMoveSmooth_t2596959266, ___Dampening_7)); }
	inline float get_Dampening_7() const { return ___Dampening_7; }
	inline float* get_address_of_Dampening_7() { return &___Dampening_7; }
	inline void set_Dampening_7(float value)
	{
		___Dampening_7 = value;
	}

	inline static int32_t get_offset_of_remainingDelta_8() { return static_cast<int32_t>(offsetof(LeanCameraMoveSmooth_t2596959266, ___remainingDelta_8)); }
	inline Vector3_t2243707580  get_remainingDelta_8() const { return ___remainingDelta_8; }
	inline Vector3_t2243707580 * get_address_of_remainingDelta_8() { return &___remainingDelta_8; }
	inline void set_remainingDelta_8(Vector3_t2243707580  value)
	{
		___remainingDelta_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
