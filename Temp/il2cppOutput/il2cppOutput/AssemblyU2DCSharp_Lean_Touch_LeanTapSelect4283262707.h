#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect3606489640.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanTapSelect
struct  LeanTapSelect_t4283262707  : public LeanSelect_t3606489640
{
public:
	// System.Boolean Lean.Touch.LeanTapSelect::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_8;
	// System.Int32 Lean.Touch.LeanTapSelect::RequiredTapCount
	int32_t ___RequiredTapCount_9;
	// System.Int32 Lean.Touch.LeanTapSelect::RequiredTapInterval
	int32_t ___RequiredTapInterval_10;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_8() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___IgnoreGuiFingers_8)); }
	inline bool get_IgnoreGuiFingers_8() const { return ___IgnoreGuiFingers_8; }
	inline bool* get_address_of_IgnoreGuiFingers_8() { return &___IgnoreGuiFingers_8; }
	inline void set_IgnoreGuiFingers_8(bool value)
	{
		___IgnoreGuiFingers_8 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_9() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___RequiredTapCount_9)); }
	inline int32_t get_RequiredTapCount_9() const { return ___RequiredTapCount_9; }
	inline int32_t* get_address_of_RequiredTapCount_9() { return &___RequiredTapCount_9; }
	inline void set_RequiredTapCount_9(int32_t value)
	{
		___RequiredTapCount_9 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_10() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___RequiredTapInterval_10)); }
	inline int32_t get_RequiredTapInterval_10() const { return ___RequiredTapInterval_10; }
	inline int32_t* get_address_of_RequiredTapInterval_10() { return &___RequiredTapInterval_10; }
	inline void set_RequiredTapInterval_10(int32_t value)
	{
		___RequiredTapInterval_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
