#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MainCube
struct MainCube_t55713198;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void MainCube::.ctor()
extern "C"  void MainCube__ctor_m4247397549 (MainCube_t55713198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainCube::Start()
extern "C"  void MainCube_Start_m3194535341 (MainCube_t55713198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainCube::RotateCube(System.Single)
extern "C"  void MainCube_RotateCube_m2728080996 (MainCube_t55713198 * __this, float ___dirToRotate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainCube::StartToRotate(System.Single)
extern "C"  Object_t * MainCube_StartToRotate_m271908560 (MainCube_t55713198 * __this, float ___dirToRotate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainCube::MoveCube(UnityEngine.Vector3)
extern "C"  void MainCube_MoveCube_m719983260 (MainCube_t55713198 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainCube::StartToMove(UnityEngine.Vector3)
extern "C"  Object_t * MainCube_StartToMove_m2971734216 (MainCube_t55713198 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
