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

// GraphUtil
struct GraphUtil_t830336592;
// System.String
struct String_t;
// System.Action`1<UnityEngine.Texture>
struct Action_1_t1918174889;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Object837106420.h"

// System.Void GraphUtil::.ctor()
extern "C"  void GraphUtil__ctor_m1180451099 (GraphUtil_t830336592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GraphUtil::GetPictureQuery(System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.Boolean)
extern "C"  String_t* GraphUtil_GetPictureQuery_m2437608875 (Object_t * __this /* static, unused */, String_t* ___facebookID, Nullable_1_t1438485399  ___width, Nullable_1_t1438485399  ___height, String_t* ___type, bool ___onlyURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GraphUtil::LoadImgFromURL(System.String,System.Action`1<UnityEngine.Texture>)
extern "C"  void GraphUtil_LoadImgFromURL_m1031304485 (Object_t * __this /* static, unused */, String_t* ___imgURL, Action_1_t1918174889 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GraphUtil::LoadImgEnumerator(System.String,System.Action`1<UnityEngine.Texture>)
extern "C"  Object_t * GraphUtil_LoadImgEnumerator_m3634134870 (Object_t * __this /* static, unused */, String_t* ___imgURL, Action_1_t1918174889 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GraphUtil::DeserializePictureURL(System.Object)
extern "C"  String_t* GraphUtil_DeserializePictureURL_m1884610824 (Object_t * __this /* static, unused */, Object_t * ___userObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GraphUtil::GetScoreFromEntry(System.Object)
extern "C"  int32_t GraphUtil_GetScoreFromEntry_m886342209 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
