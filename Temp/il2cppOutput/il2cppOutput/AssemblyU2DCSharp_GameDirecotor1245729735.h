#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameDirecotor
struct  GameDirecotor_t1245729735  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameDirecotor::car
	GameObject_t1756533147 * ___car_2;
	// UnityEngine.GameObject GameDirecotor::flag
	GameObject_t1756533147 * ___flag_3;
	// UnityEngine.GameObject GameDirecotor::distance
	GameObject_t1756533147 * ___distance_4;

public:
	inline static int32_t get_offset_of_car_2() { return static_cast<int32_t>(offsetof(GameDirecotor_t1245729735, ___car_2)); }
	inline GameObject_t1756533147 * get_car_2() const { return ___car_2; }
	inline GameObject_t1756533147 ** get_address_of_car_2() { return &___car_2; }
	inline void set_car_2(GameObject_t1756533147 * value)
	{
		___car_2 = value;
		Il2CppCodeGenWriteBarrier(&___car_2, value);
	}

	inline static int32_t get_offset_of_flag_3() { return static_cast<int32_t>(offsetof(GameDirecotor_t1245729735, ___flag_3)); }
	inline GameObject_t1756533147 * get_flag_3() const { return ___flag_3; }
	inline GameObject_t1756533147 ** get_address_of_flag_3() { return &___flag_3; }
	inline void set_flag_3(GameObject_t1756533147 * value)
	{
		___flag_3 = value;
		Il2CppCodeGenWriteBarrier(&___flag_3, value);
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(GameDirecotor_t1245729735, ___distance_4)); }
	inline GameObject_t1756533147 * get_distance_4() const { return ___distance_4; }
	inline GameObject_t1756533147 ** get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(GameObject_t1756533147 * value)
	{
		___distance_4 = value;
		Il2CppCodeGenWriteBarrier(&___distance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
