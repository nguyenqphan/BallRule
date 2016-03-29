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
// Diamond
struct Diamond_t3319707956;
// Ball
struct Ball_t2062879;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// SpawnerP
struct  SpawnerP_t2130838536 
{
	// System.Int32 SpawnerP::smallestNum
	int32_t ___smallestNum_0;
	// System.Boolean SpawnerP::matchSmallestNum
	bool ___matchSmallestNum_1;
	// System.Int32 SpawnerP::pooledAmount
	int32_t ___pooledAmount_2;
	// System.Int32 SpawnerP::ballAmount
	int32_t ___ballAmount_3;
	// System.Int32 SpawnerP::diamondAmount
	int32_t ___diamondAmount_4;
	// System.Int32 SpawnerP::randomCubeNum
	int32_t ___randomCubeNum_5;
	// System.Int32 SpawnerP::indexSwitch
	int32_t ___indexSwitch_6;
	// UnityEngine.Vector3 SpawnerP::position
	Vector3_t3525329789  ___position_7;
	// System.Single SpawnerP::fixedY
	float ___fixedY_8;
	// System.Single SpawnerP::fixedX
	float ___fixedX_9;
	// System.Single SpawnerP::speedTime
	float ___speedTime_10;
	// System.Boolean SpawnerP::firstSpawn
	bool ___firstSpawn_11;
	// System.Int32 SpawnerP::spawnNumber
	int32_t ___spawnNumber_12;
	// System.Boolean SpawnerP::matchNum
	bool ___matchNum_13;
	// MainCube SpawnerP::mainCube
	MainCube_t55713198 * ___mainCube_14;
	// Cube SpawnerP::cube
	Cube_t2111573 * ___cube_15;
	// Diamond SpawnerP::diamondScript
	Diamond_t3319707956 * ___diamondScript_16;
	// Ball SpawnerP::ballScript
	Ball_t2062879 * ___ballScript_17;
};
