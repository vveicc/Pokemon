#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanCameraZoom449823926.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanCameraZoomSmooth
struct  LeanCameraZoomSmooth_t3561131416  : public LeanCameraZoom_t449823926
{
public:
	// System.Single Lean.Touch.LeanCameraZoomSmooth::Dampening
	float ___Dampening_10;
	// System.Single Lean.Touch.LeanCameraZoomSmooth::currentZoom
	float ___currentZoom_11;

public:
	inline static int32_t get_offset_of_Dampening_10() { return static_cast<int32_t>(offsetof(LeanCameraZoomSmooth_t3561131416, ___Dampening_10)); }
	inline float get_Dampening_10() const { return ___Dampening_10; }
	inline float* get_address_of_Dampening_10() { return &___Dampening_10; }
	inline void set_Dampening_10(float value)
	{
		___Dampening_10 = value;
	}

	inline static int32_t get_offset_of_currentZoom_11() { return static_cast<int32_t>(offsetof(LeanCameraZoomSmooth_t3561131416, ___currentZoom_11)); }
	inline float get_currentZoom_11() const { return ___currentZoom_11; }
	inline float* get_address_of_currentZoom_11() { return &___currentZoom_11; }
	inline void set_currentZoom_11(float value)
	{
		___currentZoom_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
