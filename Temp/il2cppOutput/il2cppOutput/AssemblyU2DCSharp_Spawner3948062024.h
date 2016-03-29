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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// Spawner
struct  Spawner_t3948062024  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject Spawner::Target
	GameObject_t4012695102 * ___Target_2;
	// UnityEngine.Vector3 Spawner::forceScale
	Vector3_t3525329789  ___forceScale_3;
	// System.Single Spawner::minSpawnTime
	float ___minSpawnTime_4;
	// System.Single Spawner::maxSpawnTime
	float ___maxSpawnTime_5;
	// System.Single Spawner::minYForceFraction
	float ___minYForceFraction_6;
	// System.Single Spawner::maxYForceFraction
	float ___maxYForceFraction_7;
	// System.Single Spawner::minXForceFraction
	float ___minXForceFraction_8;
	// System.Single Spawner::maxXForceFraction
	float ___maxXForceFraction_9;
};
