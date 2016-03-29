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

// Facebook.Unity.IShareResult
struct IShareResult_t747644594;
// System.Action
struct Action_t437523947;
// Facebook.Unity.IResult
struct IResult_t1032425381;
// Facebook.Unity.IGraphResult
struct IGraphResult_t2342947041;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"

// System.Void FBShare::ShareBrag()
extern "C"  void FBShare_ShareBrag_m2294311067 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBShare::ShareCallback(Facebook.Unity.IShareResult)
extern "C"  void FBShare_ShareCallback_m557221044 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBShare::PostScore(System.Int32,System.Action)
extern "C"  void FBShare_PostScore_m2060077696 (Object_t * __this /* static, unused */, int32_t ___score, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBShare::PostScore1()
extern "C"  void FBShare_PostScore1_m1607740059 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBShare::AuthCallback(Facebook.Unity.IResult)
extern "C"  void FBShare_AuthCallback_m2364714820 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBShare::APICallback(Facebook.Unity.IResult)
extern "C"  void FBShare_APICallback_m3565927648 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBShare::<PostScore>m__D(Facebook.Unity.IGraphResult)
extern "C"  void FBShare_U3CPostScoreU3Em__D_m1687393738 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
