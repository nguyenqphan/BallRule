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

// CoroutinerInstance
struct CoroutinerInstance_t3509523311;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"

// System.Void CoroutinerInstance::.ctor()
extern "C"  void CoroutinerInstance__ctor_m1259624972 (CoroutinerInstance_t3509523311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CoroutinerInstance::Awake()
extern "C"  void CoroutinerInstance_Awake_m1497230191 (CoroutinerInstance_t3509523311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine CoroutinerInstance::ProcessWork(System.Collections.IEnumerator)
extern "C"  Coroutine_t2246592261 * CoroutinerInstance_ProcessWork_m3843767651 (CoroutinerInstance_t3509523311 * __this, Object_t * ___iterationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CoroutinerInstance::DestroyWhenComplete(System.Collections.IEnumerator)
extern "C"  Object_t * CoroutinerInstance_DestroyWhenComplete_m3813210 (CoroutinerInstance_t3509523311 * __this, Object_t * ___iterationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
