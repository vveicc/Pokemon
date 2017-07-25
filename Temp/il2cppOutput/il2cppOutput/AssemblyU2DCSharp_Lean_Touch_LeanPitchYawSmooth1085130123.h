#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanPitchYaw3312846989.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanPitchYawSmooth
struct  LeanPitchYawSmooth_t1085130123  : public LeanPitchYaw_t3312846989
{
public:
	// System.Single Lean.Touch.LeanPitchYawSmooth::Dampening
	float ___Dampening_15;
	// System.Single Lean.Touch.LeanPitchYawSmooth::currentPitch
	float ___currentPitch_16;
	// System.Single Lean.Touch.LeanPitchYawSmooth::currentYaw
	float ___currentYaw_17;

public:
	inline static int32_t get_offset_of_Dampening_15() { return static_cast<int32_t>(offsetof(LeanPitchYawSmooth_t1085130123, ___Dampening_15)); }
	inline float get_Dampening_15() const { return ___Dampening_15; }
	inline float* get_address_of_Dampening_15() { return &___Dampening_15; }
	inline void set_Dampening_15(float value)
	{
		___Dampening_15 = value;
	}

	inline static int32_t get_offset_of_currentPitch_16() { return static_cast<int32_t>(offsetof(LeanPitchYawSmooth_t1085130123, ___currentPitch_16)); }
	inline float get_currentPitch_16() const { return ___currentPitch_16; }
	inline float* get_address_of_currentPitch_16() { return &___currentPitch_16; }
	inline void set_currentPitch_16(float value)
	{
		___currentPitch_16 = value;
	}

	inline static int32_t get_offset_of_currentYaw_17() { return static_cast<int32_t>(offsetof(LeanPitchYawSmooth_t1085130123, ___currentYaw_17)); }
	inline float get_currentYaw_17() const { return ___currentYaw_17; }
	inline float* get_address_of_currentYaw_17() { return &___currentYaw_17; }
	inline void set_currentYaw_17(float value)
	{
		___currentYaw_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
