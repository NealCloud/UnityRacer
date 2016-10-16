#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipBehavior
struct  ShipBehavior_t1471019008  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Quaternion ShipBehavior::stabalize
	Quaternion_t4030073918  ___stabalize_2;

public:
	inline static int32_t get_offset_of_stabalize_2() { return static_cast<int32_t>(offsetof(ShipBehavior_t1471019008, ___stabalize_2)); }
	inline Quaternion_t4030073918  get_stabalize_2() const { return ___stabalize_2; }
	inline Quaternion_t4030073918 * get_address_of_stabalize_2() { return &___stabalize_2; }
	inline void set_stabalize_2(Quaternion_t4030073918  value)
	{
		___stabalize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
