#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraRotation
struct  CameraRotation_t896647131  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera CameraRotation::MainCam
	Camera_t189460977 * ___MainCam_2;

public:
	inline static int32_t get_offset_of_MainCam_2() { return static_cast<int32_t>(offsetof(CameraRotation_t896647131, ___MainCam_2)); }
	inline Camera_t189460977 * get_MainCam_2() const { return ___MainCam_2; }
	inline Camera_t189460977 ** get_address_of_MainCam_2() { return &___MainCam_2; }
	inline void set_MainCam_2(Camera_t189460977 * value)
	{
		___MainCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCam_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
