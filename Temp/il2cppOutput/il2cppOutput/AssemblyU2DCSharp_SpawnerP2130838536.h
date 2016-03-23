#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MainCube
struct MainCube_t55713198;
// Cube
struct Cube_t2111573;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// SpawnerP
struct  SpawnerP_t2130838536 
{
	// System.Int32 SpawnerP::pooledAmount
	int32_t ___pooledAmount_0;
	// System.Int32 SpawnerP::ballAmount
	int32_t ___ballAmount_1;
	// System.Int32 SpawnerP::diamondAmount
	int32_t ___diamondAmount_2;
	// System.Int32 SpawnerP::indexSwitch
	int32_t ___indexSwitch_3;
	// UnityEngine.Vector3 SpawnerP::position
	Vector3_t3525329789  ___position_4;
	// System.Single SpawnerP::fixedY
	float ___fixedY_5;
	// System.Single SpawnerP::fixedX
	float ___fixedX_6;
	// System.Single SpawnerP::speedTime
	float ___speedTime_7;
	// System.Boolean SpawnerP::firstSpawn
	bool ___firstSpawn_8;
	// System.Int32 SpawnerP::spawnNumber
	int32_t ___spawnNumber_9;
	// MainCube SpawnerP::mainCube
	MainCube_t55713198 * ___mainCube_10;
	// Cube SpawnerP::cube
	Cube_t2111573 * ___cube_11;
};
