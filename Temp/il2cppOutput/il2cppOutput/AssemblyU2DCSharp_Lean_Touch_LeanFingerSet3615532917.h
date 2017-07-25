#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFingerSet/LeanFingerEvent
struct LeanFingerEvent_t1533711172;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerSet
struct  LeanFingerSet_t3615532917  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerSet::IgnoreIfOverGui
	bool ___IgnoreIfOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerSet::IgnoreIfStartedOverGui
	bool ___IgnoreIfStartedOverGui_3;
	// Lean.Touch.LeanFingerSet/LeanFingerEvent Lean.Touch.LeanFingerSet::OnFingerSet
	LeanFingerEvent_t1533711172 * ___OnFingerSet_4;

public:
	inline static int32_t get_offset_of_IgnoreIfOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerSet_t3615532917, ___IgnoreIfOverGui_2)); }
	inline bool get_IgnoreIfOverGui_2() const { return ___IgnoreIfOverGui_2; }
	inline bool* get_address_of_IgnoreIfOverGui_2() { return &___IgnoreIfOverGui_2; }
	inline void set_IgnoreIfOverGui_2(bool value)
	{
		___IgnoreIfOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIfStartedOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerSet_t3615532917, ___IgnoreIfStartedOverGui_3)); }
	inline bool get_IgnoreIfStartedOverGui_3() const { return ___IgnoreIfStartedOverGui_3; }
	inline bool* get_address_of_IgnoreIfStartedOverGui_3() { return &___IgnoreIfStartedOverGui_3; }
	inline void set_IgnoreIfStartedOverGui_3(bool value)
	{
		___IgnoreIfStartedOverGui_3 = value;
	}

	inline static int32_t get_offset_of_OnFingerSet_4() { return static_cast<int32_t>(offsetof(LeanFingerSet_t3615532917, ___OnFingerSet_4)); }
	inline LeanFingerEvent_t1533711172 * get_OnFingerSet_4() const { return ___OnFingerSet_4; }
	inline LeanFingerEvent_t1533711172 ** get_address_of_OnFingerSet_4() { return &___OnFingerSet_4; }
	inline void set_OnFingerSet_4(LeanFingerEvent_t1533711172 * value)
	{
		___OnFingerSet_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerSet_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
