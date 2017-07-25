#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFingerTap/LeanFingerEvent
struct LeanFingerEvent_t1916295887;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTap
struct  LeanFingerTap_t2593896000  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerTap::IgnoreIfOverGui
	bool ___IgnoreIfOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerTap::IgnoreIfStartedOverGui
	bool ___IgnoreIfStartedOverGui_3;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapCount
	int32_t ___RequiredTapCount_4;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapInterval
	int32_t ___RequiredTapInterval_5;
	// Lean.Touch.LeanFingerTap/LeanFingerEvent Lean.Touch.LeanFingerTap::OnFingerTap
	LeanFingerEvent_t1916295887 * ___OnFingerTap_6;

public:
	inline static int32_t get_offset_of_IgnoreIfOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___IgnoreIfOverGui_2)); }
	inline bool get_IgnoreIfOverGui_2() const { return ___IgnoreIfOverGui_2; }
	inline bool* get_address_of_IgnoreIfOverGui_2() { return &___IgnoreIfOverGui_2; }
	inline void set_IgnoreIfOverGui_2(bool value)
	{
		___IgnoreIfOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIfStartedOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___IgnoreIfStartedOverGui_3)); }
	inline bool get_IgnoreIfStartedOverGui_3() const { return ___IgnoreIfStartedOverGui_3; }
	inline bool* get_address_of_IgnoreIfStartedOverGui_3() { return &___IgnoreIfStartedOverGui_3; }
	inline void set_IgnoreIfStartedOverGui_3(bool value)
	{
		___IgnoreIfStartedOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_4() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredTapCount_4)); }
	inline int32_t get_RequiredTapCount_4() const { return ___RequiredTapCount_4; }
	inline int32_t* get_address_of_RequiredTapCount_4() { return &___RequiredTapCount_4; }
	inline void set_RequiredTapCount_4(int32_t value)
	{
		___RequiredTapCount_4 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_5() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredTapInterval_5)); }
	inline int32_t get_RequiredTapInterval_5() const { return ___RequiredTapInterval_5; }
	inline int32_t* get_address_of_RequiredTapInterval_5() { return &___RequiredTapInterval_5; }
	inline void set_RequiredTapInterval_5(int32_t value)
	{
		___RequiredTapInterval_5 = value;
	}

	inline static int32_t get_offset_of_OnFingerTap_6() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___OnFingerTap_6)); }
	inline LeanFingerEvent_t1916295887 * get_OnFingerTap_6() const { return ___OnFingerTap_6; }
	inline LeanFingerEvent_t1916295887 ** get_address_of_OnFingerTap_6() { return &___OnFingerTap_6; }
	inline void set_OnFingerTap_6(LeanFingerEvent_t1916295887 * value)
	{
		___OnFingerTap_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerTap_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
