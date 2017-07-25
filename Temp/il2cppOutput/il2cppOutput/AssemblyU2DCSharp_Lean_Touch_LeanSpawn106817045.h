#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSpawn
struct  LeanSpawn_t106817045  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Lean.Touch.LeanSpawn::Prefab
	Transform_t3275118058 * ___Prefab_2;
	// System.Single Lean.Touch.LeanSpawn::Distance
	float ___Distance_3;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(LeanSpawn_t106817045, ___Prefab_2)); }
	inline Transform_t3275118058 * get_Prefab_2() const { return ___Prefab_2; }
	inline Transform_t3275118058 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(Transform_t3275118058 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_Distance_3() { return static_cast<int32_t>(offsetof(LeanSpawn_t106817045, ___Distance_3)); }
	inline float get_Distance_3() const { return ___Distance_3; }
	inline float* get_address_of_Distance_3() { return &___Distance_3; }
	inline void set_Distance_3(float value)
	{
		___Distance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
