#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.Object
struct Object_t;
// Spawner
struct Spawner_t3948062024;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// Spawner/<SpawnTarget>c__Iterator6
struct  U3CSpawnTargetU3Ec__Iterator6_t2540667763  : public Object_t
{
	// UnityEngine.GameObject Spawner/<SpawnTarget>c__Iterator6::<curr>__0
	GameObject_t4012695102 * ___U3CcurrU3E__0_0;
	// UnityEngine.Vector3 Spawner/<SpawnTarget>c__Iterator6::<force>__1
	Vector3_t3525329789  ___U3CforceU3E__1_1;
	// UnityEngine.Rigidbody Spawner/<SpawnTarget>c__Iterator6::<rb>__2
	Rigidbody_t1972007546 * ___U3CrbU3E__2_2;
	// System.Int32 Spawner/<SpawnTarget>c__Iterator6::$PC
	int32_t ___U24PC_3;
	// System.Object Spawner/<SpawnTarget>c__Iterator6::$current
	Object_t * ___U24current_4;
	// Spawner Spawner/<SpawnTarget>c__Iterator6::<>f__this
	Spawner_t3948062024 * ___U3CU3Ef__this_5;
};
