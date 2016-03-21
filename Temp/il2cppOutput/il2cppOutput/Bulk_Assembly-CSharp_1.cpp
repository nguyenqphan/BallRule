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

// WaterMaterials
struct WaterMaterials_t3313381621;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// System.Object
struct Object_t;
// WeatherDetecter
struct WeatherDetecter_t2833725060;
// WeatherMan
struct WeatherMan_t2413190374;
// UnityEngine.Collider
struct Collider_t955670625;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_WaterMaterials3313381621.h"
#include "AssemblyU2DCSharp_WaterMaterials3313381621MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "AssemblyU2DCSharp_GameStateManager648042254MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "AssemblyU2DCSharp_GameStateManager648042254.h"
#include "mscorlib_System_Int322847414787.h"
#include "AssemblyU2DCSharp_WeatherDetecter2833725060.h"
#include "AssemblyU2DCSharp_WeatherDetecter2833725060MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_WeatherMan2413190374.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "mscorlib_System_Boolean211005341.h"
#include "AssemblyU2DCSharp_WeatherMan2413190374MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen514686775MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen514686775.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Object_t * Component_GetComponent_TisObject_t_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m267839954(__this, method) ((  Object_t * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisObject_t_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t1092684080_m2901511552(__this, method) ((  Renderer_t1092684080 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisObject_t_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Object_t * GameObject_GetComponent_TisObject_t_m2447772384_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2447772384(__this, method) ((  Object_t * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<WeatherMan>()
#define GameObject_GetComponent_TisWeatherMan_t2413190374_m3028007607(__this, method) ((  WeatherMan_t2413190374 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WaterMaterials::.ctor()
extern "C"  void WaterMaterials__ctor_m2111233862 (WaterMaterials_t3313381621 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WaterMaterials::Awake()
extern const MethodInfo* Component_GetComponent_TisRenderer_t1092684080_m2901511552_MethodInfo_var;
extern const uint32_t WaterMaterials_Awake_m2348839081_MetadataUsageId;
extern "C"  void WaterMaterials_Awake_m2348839081 (WaterMaterials_t3313381621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WaterMaterials_Awake_m2348839081_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t1092684080 * L_0 = Component_GetComponent_TisRenderer_t1092684080_m2901511552(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m2901511552_MethodInfo_var);
		__this->___renderMaterial_3 = L_0;
		return;
	}
}
// System.Void WaterMaterials::Start()
extern TypeInfo* GameStateManager_t648042254_il2cpp_TypeInfo_var;
extern const uint32_t WaterMaterials_Start_m1058371654_MetadataUsageId;
extern "C"  void WaterMaterials_Start_m1058371654 (WaterMaterials_t3313381621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WaterMaterials_Start_m1058371654_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t1092684080 * L_0 = (__this->___renderMaterial_3);
		MaterialU5BU5D_t3353847197* L_1 = (__this->___materials_2);
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t648042254_il2cpp_TypeInfo_var);
		GameStateManager_t648042254 * L_2 = GameStateManager_get_Instance_m2805704868(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameStateManager_get_TestIndex_m1084442132(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_0);
		Renderer_set_material_m1012580896(L_0, (*(Material_t1886596500 **)(Material_t1886596500 **)SZArrayLdElema(L_1, L_4, sizeof(Material_t1886596500 *))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeatherDetecter::.ctor()
extern "C"  void WeatherDetecter__ctor_m2967184743 (WeatherDetecter_t2833725060 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeatherDetecter::Awake()
extern const MethodInfo* GameObject_GetComponent_TisWeatherMan_t2413190374_m3028007607_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3718549634;
extern const uint32_t WeatherDetecter_Awake_m3204789962_MetadataUsageId;
extern "C"  void WeatherDetecter_Awake_m3204789962 (WeatherDetecter_t2833725060 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WeatherDetecter_Awake_m3204789962_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t4012695102 * L_0 = GameObject_Find_m332785498(NULL /*static, unused*/, _stringLiteral3718549634, /*hidden argument*/NULL);
		NullCheck(L_0);
		WeatherMan_t2413190374 * L_1 = GameObject_GetComponent_TisWeatherMan_t2413190374_m3028007607(L_0, /*hidden argument*/GameObject_GetComponent_TisWeatherMan_t2413190374_m3028007607_MethodInfo_var);
		__this->___weatherMan_2 = L_1;
		return;
	}
}
// System.Void WeatherDetecter::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern const uint32_t WeatherDetecter_OnTriggerEnter_m3602346865_MetadataUsageId;
extern "C"  void WeatherDetecter_OnTriggerEnter_m3602346865 (WeatherDetecter_t2833725060 * __this, Collider_t955670625 * ___collider, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WeatherDetecter_OnTriggerEnter_m3602346865_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t955670625 * L_0 = ___collider;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral2393081601, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		WeatherDetecter_ChooseWeather_m3394495778(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void WeatherDetecter::ChooseWeather()
extern TypeInfo* GameStateManager_t648042254_il2cpp_TypeInfo_var;
extern const uint32_t WeatherDetecter_ChooseWeather_m3394495778_MetadataUsageId;
extern "C"  void WeatherDetecter_ChooseWeather_m3394495778 (WeatherDetecter_t2833725060 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WeatherDetecter_ChooseWeather_m3394495778_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t648042254_il2cpp_TypeInfo_var);
		GameStateManager_t648042254 * L_0 = GameStateManager_get_Instance_m2805704868(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameStateManager_get_TestIndex_m1084442132(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_003a;
		}
		if (L_2 == 1)
		{
			goto IL_004a;
		}
		if (L_2 == 2)
		{
			goto IL_005a;
		}
		if (L_2 == 3)
		{
			goto IL_006a;
		}
		if (L_2 == 4)
		{
			goto IL_007a;
		}
		if (L_2 == 5)
		{
			goto IL_008a;
		}
		if (L_2 == 6)
		{
			goto IL_009a;
		}
		if (L_2 == 7)
		{
			goto IL_00aa;
		}
		if (L_2 == 8)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00ca;
	}

IL_003a:
	{
		WeatherMan_t2413190374 * L_3 = (__this->___weatherMan_2);
		NullCheck(L_3);
		WeatherMan_NoSnowRain_m1894917191(L_3, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_004a:
	{
		WeatherMan_t2413190374 * L_4 = (__this->___weatherMan_2);
		NullCheck(L_4);
		WeatherMan_TurnOnRain_m3642701471(L_4, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_005a:
	{
		WeatherMan_t2413190374 * L_5 = (__this->___weatherMan_2);
		NullCheck(L_5);
		WeatherMan_NoSnowRain_m1894917191(L_5, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_006a:
	{
		WeatherMan_t2413190374 * L_6 = (__this->___weatherMan_2);
		NullCheck(L_6);
		WeatherMan_TurnOnSnow_m3683523790(L_6, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_007a:
	{
		WeatherMan_t2413190374 * L_7 = (__this->___weatherMan_2);
		NullCheck(L_7);
		WeatherMan_NoSnowRain_m1894917191(L_7, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_008a:
	{
		WeatherMan_t2413190374 * L_8 = (__this->___weatherMan_2);
		NullCheck(L_8);
		WeatherMan_TurnOnRain_m3642701471(L_8, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_009a:
	{
		WeatherMan_t2413190374 * L_9 = (__this->___weatherMan_2);
		NullCheck(L_9);
		WeatherMan_NoSnowRain_m1894917191(L_9, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00aa:
	{
		WeatherMan_t2413190374 * L_10 = (__this->___weatherMan_2);
		NullCheck(L_10);
		WeatherMan_TurnOnSnow_m3683523790(L_10, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00ba:
	{
		WeatherMan_t2413190374 * L_11 = (__this->___weatherMan_2);
		NullCheck(L_11);
		WeatherMan_TurnOnRain_m3642701471(L_11, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00ca:
	{
		WeatherMan_t2413190374 * L_12 = (__this->___weatherMan_2);
		NullCheck(L_12);
		WeatherMan_NoSnowRain_m1894917191(L_12, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00da:
	{
		return;
	}
}
// System.Void WeatherMan::.ctor()
extern "C"  void WeatherMan__ctor_m1532518005 (WeatherMan_t2413190374 * __this, const MethodInfo* method)
{
	{
		__this->___amount_6 = 2;
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeatherMan::Start()
extern TypeInfo* List_1_t514686775_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t4012695102_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2397334390_MethodInfo_var;
extern const uint32_t WeatherMan_Start_m479655797_MetadataUsageId;
extern "C"  void WeatherMan_Start_m479655797 (WeatherMan_t2413190374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WeatherMan_Start_m479655797_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t4012695102 * V_1 = {0};
	GameObject_t4012695102 * V_2 = {0};
	{
		List_1_t514686775 * L_0 = (List_1_t514686775 *)il2cpp_codegen_object_new(List_1_t514686775_il2cpp_TypeInfo_var);
		List_1__ctor_m2397334390(L_0, /*hidden argument*/List_1__ctor_m2397334390_MethodInfo_var);
		__this->___rainList_4 = L_0;
		List_1_t514686775 * L_1 = (List_1_t514686775 *)il2cpp_codegen_object_new(List_1_t514686775_il2cpp_TypeInfo_var);
		List_1__ctor_m2397334390(L_1, /*hidden argument*/List_1__ctor_m2397334390_MethodInfo_var);
		__this->___snowList_5 = L_1;
		V_0 = 0;
		goto IL_00f6;
	}

IL_001d:
	{
		GameObject_t4012695102 * L_2 = (__this->___rainToInstantiate_2);
		Transform_t284553113 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3525329789  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t3525329789  L_5 = {0};
		Vector3__ctor_m2926210380(&L_5, (0.0f), (0.0f), (12.0f), /*hidden argument*/NULL);
		Vector3_t3525329789  L_6 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_7 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t3878351788 * L_8 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_6, L_7, /*hidden argument*/NULL);
		V_1 = ((GameObject_t4012695102 *)IsInstSealed(L_8, GameObject_t4012695102_il2cpp_TypeInfo_var));
		GameObject_t4012695102 * L_9 = (__this->___snowToInstantiate_3);
		Transform_t284553113 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3525329789  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		Vector3_t3525329789  L_12 = {0};
		Vector3__ctor_m2926210380(&L_12, (0.0f), (0.0f), (12.0f), /*hidden argument*/NULL);
		Vector3_t3525329789  L_13 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_14 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Object_t3878351788 * L_15 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_9, L_13, L_14, /*hidden argument*/NULL);
		V_2 = ((GameObject_t4012695102 *)IsInstSealed(L_15, GameObject_t4012695102_il2cpp_TypeInfo_var));
		GameObject_t4012695102 * L_16 = V_1;
		NullCheck(L_16);
		Transform_t284553113 * L_17 = GameObject_get_transform_m1278640159(L_16, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_18 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t284553113 * L_19 = GameObject_get_transform_m1278640159(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_SetParent_m3449663462(L_17, L_19, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_20 = V_2;
		NullCheck(L_20);
		Transform_t284553113 * L_21 = GameObject_get_transform_m1278640159(L_20, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_22 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_t284553113 * L_23 = GameObject_get_transform_m1278640159(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_SetParent_m3449663462(L_21, L_23, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_24 = V_1;
		NullCheck(L_24);
		GameObject_SetActive_m3538205401(L_24, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_25 = V_2;
		NullCheck(L_25);
		GameObject_SetActive_m3538205401(L_25, (bool)0, /*hidden argument*/NULL);
		List_1_t514686775 * L_26 = (__this->___rainList_4);
		GameObject_t4012695102 * L_27 = V_1;
		NullCheck(L_26);
		VirtActionInvoker1< GameObject_t4012695102 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_26, L_27);
		List_1_t514686775 * L_28 = (__this->___snowList_5);
		GameObject_t4012695102 * L_29 = V_2;
		NullCheck(L_28);
		VirtActionInvoker1< GameObject_t4012695102 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_28, L_29);
		int32_t L_30 = V_0;
		V_0 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00f6:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = (__this->___amount_6);
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void WeatherMan::TurnOnSnow()
extern "C"  void WeatherMan_TurnOnSnow_m3683523790 (WeatherMan_t2413190374 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0007:
	{
		List_1_t514686775 * L_0 = (__this->___snowList_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_2 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeInHierarchy_m612450965(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		List_1_t514686775 * L_4 = (__this->___snowList_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t4012695102 * L_6 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_6);
		GameObject_SetActive_m3538205401(L_6, (bool)1, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0034:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0038:
	{
		int32_t L_8 = V_0;
		List_1_t514686775 * L_9 = (__this->___snowList_5);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}

IL_0049:
	{
		V_1 = 0;
		goto IL_007c;
	}

IL_0050:
	{
		List_1_t514686775 * L_11 = (__this->___rainList_4);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		GameObject_t4012695102 * L_13 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_11, L_12);
		NullCheck(L_13);
		bool L_14 = GameObject_get_activeInHierarchy_m612450965(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		List_1_t514686775 * L_15 = (__this->___rainList_4);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		GameObject_t4012695102 * L_17 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_15, L_16);
		NullCheck(L_17);
		GameObject_SetActive_m3538205401(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_19 = V_1;
		List_1_t514686775 * L_20 = (__this->___rainList_4);
		NullCheck(L_20);
		int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0050;
		}
	}
	{
		return;
	}
}
// System.Void WeatherMan::TurnOnRain()
extern "C"  void WeatherMan_TurnOnRain_m3642701471 (WeatherMan_t2413190374 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0007:
	{
		List_1_t514686775 * L_0 = (__this->___snowList_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_2 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeInHierarchy_m612450965(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		List_1_t514686775 * L_4 = (__this->___snowList_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t4012695102 * L_6 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_6);
		GameObject_SetActive_m3538205401(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		List_1_t514686775 * L_9 = (__this->___snowList_5);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_007c;
	}

IL_004b:
	{
		List_1_t514686775 * L_11 = (__this->___rainList_4);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		GameObject_t4012695102 * L_13 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_11, L_12);
		NullCheck(L_13);
		bool L_14 = GameObject_get_activeInHierarchy_m612450965(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0078;
		}
	}
	{
		List_1_t514686775 * L_15 = (__this->___rainList_4);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		GameObject_t4012695102 * L_17 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_15, L_16);
		NullCheck(L_17);
		GameObject_SetActive_m3538205401(L_17, (bool)1, /*hidden argument*/NULL);
		goto IL_008d;
	}

IL_0078:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_19 = V_1;
		List_1_t514686775 * L_20 = (__this->___rainList_4);
		NullCheck(L_20);
		int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}

IL_008d:
	{
		return;
	}
}
// System.Void WeatherMan::NoSnowRain()
extern "C"  void WeatherMan_NoSnowRain_m1894917191 (WeatherMan_t2413190374 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0007:
	{
		List_1_t514686775 * L_0 = (__this->___snowList_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_2 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeInHierarchy_m612450965(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		List_1_t514686775 * L_4 = (__this->___snowList_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t4012695102 * L_6 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_6);
		GameObject_SetActive_m3538205401(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		List_1_t514686775 * L_9 = (__this->___snowList_5);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_0077;
	}

IL_004b:
	{
		List_1_t514686775 * L_11 = (__this->___rainList_4);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		GameObject_t4012695102 * L_13 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_11, L_12);
		NullCheck(L_13);
		bool L_14 = GameObject_get_activeInHierarchy_m612450965(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		List_1_t514686775 * L_15 = (__this->___rainList_4);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		GameObject_t4012695102 * L_17 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_15, L_16);
		NullCheck(L_17);
		GameObject_SetActive_m3538205401(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_0073:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_19 = V_1;
		List_1_t514686775 * L_20 = (__this->___rainList_4);
		NullCheck(L_20);
		int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
