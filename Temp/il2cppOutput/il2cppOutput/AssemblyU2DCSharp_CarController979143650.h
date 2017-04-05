#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarController
struct  CarController_t979143650  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CarController::speed
	float ___speed_2;
	// UnityEngine.Vector2 CarController::startPos
	Vector2_t2243707579  ___startPos_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_startPos_3() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___startPos_3)); }
	inline Vector2_t2243707579  get_startPos_3() const { return ___startPos_3; }
	inline Vector2_t2243707579 * get_address_of_startPos_3() { return &___startPos_3; }
	inline void set_startPos_3(Vector2_t2243707579  value)
	{
		___startPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
