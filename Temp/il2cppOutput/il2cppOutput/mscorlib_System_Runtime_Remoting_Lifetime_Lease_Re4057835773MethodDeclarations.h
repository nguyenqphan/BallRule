﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t4057835773;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t1722317174;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RenewalDelegate__ctor_m3640898857 (RenewalDelegate_t4057835773 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C"  TimeSpan_t763862892  RenewalDelegate_Invoke_m2399620050 (RenewalDelegate_t4057835773 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" TimeSpan_t763862892  pinvoke_delegate_wrapper_RenewalDelegate_t4057835773(Il2CppObject* delegate, Object_t * ___lease);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C"  Object_t * RenewalDelegate_BeginInvoke_m3159291988 (RenewalDelegate_t4057835773 * __this, Object_t * ___lease, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  TimeSpan_t763862892  RenewalDelegate_EndInvoke_m331344822 (RenewalDelegate_t4057835773 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;