#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFingerSwipe/FingerEvent
struct FingerEvent_t1048019214;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerSwipe
struct  LeanFingerSwipe_t3716445899  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerSwipe::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// Lean.Touch.LeanFingerSwipe/FingerEvent Lean.Touch.LeanFingerSwipe::OnFingerSwipe
	FingerEvent_t1048019214 * ___OnFingerSwipe_3;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3716445899, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_OnFingerSwipe_3() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3716445899, ___OnFingerSwipe_3)); }
	inline FingerEvent_t1048019214 * get_OnFingerSwipe_3() const { return ___OnFingerSwipe_3; }
	inline FingerEvent_t1048019214 ** get_address_of_OnFingerSwipe_3() { return &___OnFingerSwipe_3; }
	inline void set_OnFingerSwipe_3(FingerEvent_t1048019214 * value)
	{
		___OnFingerSwipe_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerSwipe_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
