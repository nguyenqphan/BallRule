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

// System.Collections.Generic.Dictionary`2/Transform`1<PaymentDialog/BombPackage,System.Int32,System.Collections.Generic.KeyValuePair`2<PaymentDialog/BombPackage,System.Int32>>
struct Transform_1_t4127187678;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21807673407.h"
#include "AssemblyU2DCSharp_PaymentDialog_BombPackage1732402980.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PaymentDialog/BombPackage,System.Int32,System.Collections.Generic.KeyValuePair`2<PaymentDialog/BombPackage,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3092745938_gshared (Transform_1_t4127187678 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3092745938(__this, ___object, ___method, method) ((  void (*) (Transform_1_t4127187678 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3092745938_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PaymentDialog/BombPackage,System.Int32,System.Collections.Generic.KeyValuePair`2<PaymentDialog/BombPackage,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1807673407  Transform_1_Invoke_m286270566_gshared (Transform_1_t4127187678 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m286270566(__this, ___key, ___value, method) ((  KeyValuePair_2_t1807673407  (*) (Transform_1_t4127187678 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m286270566_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PaymentDialog/BombPackage,System.Int32,System.Collections.Generic.KeyValuePair`2<PaymentDialog/BombPackage,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m562075537_gshared (Transform_1_t4127187678 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m562075537(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t4127187678 *, int32_t, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m562075537_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PaymentDialog/BombPackage,System.Int32,System.Collections.Generic.KeyValuePair`2<PaymentDialog/BombPackage,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1807673407  Transform_1_EndInvoke_m3148079204_gshared (Transform_1_t4127187678 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3148079204(__this, ___result, method) ((  KeyValuePair_2_t1807673407  (*) (Transform_1_t4127187678 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m3148079204_gshared)(__this, ___result, method)
