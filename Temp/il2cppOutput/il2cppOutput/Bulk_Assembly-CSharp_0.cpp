#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_CarController979143650.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_GameDirecotor1245729735.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"

// CarController
struct CarController_t979143650;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Object
struct Il2CppObject;
// UnityEngine.Transform
struct Transform_t3275118058;
// GameDirecotor
struct GameDirecotor_t1245729735;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t CarController_Update_m448765004_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral696029512;
extern Il2CppCodeGenString* _stringLiteral1232676424;
extern Il2CppCodeGenString* _stringLiteral3560472239;
extern const uint32_t GameDirecotor_Start_m3273546978_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3386962752;
extern Il2CppCodeGenString* _stringLiteral3231012726;
extern Il2CppCodeGenString* _stringLiteral372029377;
extern Il2CppCodeGenString* _stringLiteral3173110272;
extern const uint32_t GameDirecotor_Update_m360825867_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m1275967966 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3577349508 (Transform_t3275118058 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t356221433_m1217399699(__this, method) ((  Text_t356221433 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.String System.Single::ToString(System.String)
extern "C"  String_t* Single_ToString_m2359963436 (float* __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m612901809 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarController::.ctor()
extern "C"  void CarController__ctor_m193361711 (CarController_t979143650 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CarController::Start()
extern "C"  void CarController_Start_m946505939 (CarController_t979143650 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CarController::Update()
extern "C"  void CarController_Update_m448765004 (CarController_t979143650 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CarController_Update_m448765004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_1 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579  L_2 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_startPos_3(L_2);
		goto IL_0062;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButtonUp_m1275967966(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_4 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579  L_5 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = (&V_0)->get_x_0();
		Vector2_t2243707579 * L_7 = __this->get_address_of_startPos_3();
		float L_8 = L_7->get_x_0();
		V_1 = ((float)((float)L_6-(float)L_8));
		float L_9 = V_1;
		__this->set_speed_2(((float)((float)L_9/(float)(500.0f))));
		AudioSource_t1135106623 * L_10 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		NullCheck(L_10);
		AudioSource_Play_m353744792(L_10, /*hidden argument*/NULL);
	}

IL_0062:
	{
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_12 = __this->get_speed_2();
		NullCheck(L_11);
		Transform_Translate_m3577349508(L_11, L_12, (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_13 = __this->get_speed_2();
		__this->set_speed_2(((float)((float)L_13*(float)(0.98f))));
		return;
	}
}
// System.Void GameDirecotor::.ctor()
extern "C"  void GameDirecotor__ctor_m4026723254 (GameDirecotor_t1245729735 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameDirecotor::Start()
extern "C"  void GameDirecotor_Start_m3273546978 (GameDirecotor_t1245729735 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDirecotor_Start_m3273546978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral696029512, /*hidden argument*/NULL);
		__this->set_car_2(L_0);
		GameObject_t1756533147 * L_1 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1232676424, /*hidden argument*/NULL);
		__this->set_flag_3(L_1);
		GameObject_t1756533147 * L_2 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral3560472239, /*hidden argument*/NULL);
		__this->set_distance_4(L_2);
		return;
	}
}
// System.Void GameDirecotor::Update()
extern "C"  void GameDirecotor_Update_m360825867 (GameDirecotor_t1245729735 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDirecotor_Update_m360825867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameObject_t1756533147 * L_0 = __this->get_flag_3();
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_1();
		GameObject_t1756533147 * L_4 = __this->get_car_2();
		NullCheck(L_4);
		Transform_t3275118058 * L_5 = GameObject_get_transform_m909382139(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_1();
		V_0 = ((float)((float)L_3-(float)L_7));
		float L_8 = V_0;
		if ((!(((float)L_8) >= ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		GameObject_t1756533147 * L_9 = __this->get_distance_4();
		NullCheck(L_9);
		Text_t356221433 * L_10 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_9, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_11 = Single_ToString_m2359963436((&V_0), _stringLiteral3231012726, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m612901809(NULL /*static, unused*/, _stringLiteral3386962752, L_11, _stringLiteral372029377, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		goto IL_0082;
	}

IL_006d:
	{
		GameObject_t1756533147 * L_13 = __this->get_distance_4();
		NullCheck(L_13);
		Text_t356221433 * L_14 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_13, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral3173110272);
	}

IL_0082:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
