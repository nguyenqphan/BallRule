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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void FBAppEvents::.cctor()
extern "C"  void FBAppEvents__cctor_m3505872224 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppEvents::LaunchEvent()
extern "C"  void FBAppEvents_LaunchEvent_m2944092786 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppEvents::GameComplete(System.Int32)
extern "C"  void FBAppEvents_GameComplete_m4263675027 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppEvents::SpentCoins(System.Int32,System.String)
extern "C"  void FBAppEvents_SpentCoins_m2043024760 (Object_t * __this /* static, unused */, int32_t ___coins, String_t* ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
