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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Vector3
struct Vector3_t2243707580;
struct Vector3_t2243707580_marshaled_pinvoke;
struct Vector3_t2243707580_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m2720820983 (Vector3_t2243707580 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m1754570744 (Vector3_t2243707580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m2692262876 (Vector3_t2243707580 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m3857189970 (Vector3_t2243707580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t2243707580  Vector3_get_zero_m1527993324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t2243707580  Vector3_get_back_m4246539215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector3_t2243707580;
struct Vector3_t2243707580_marshaled_pinvoke;

extern "C" void Vector3_t2243707580_marshal_pinvoke(const Vector3_t2243707580& unmarshaled, Vector3_t2243707580_marshaled_pinvoke& marshaled);
extern "C" void Vector3_t2243707580_marshal_pinvoke_back(const Vector3_t2243707580_marshaled_pinvoke& marshaled, Vector3_t2243707580& unmarshaled);
extern "C" void Vector3_t2243707580_marshal_pinvoke_cleanup(Vector3_t2243707580_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector3_t2243707580;
struct Vector3_t2243707580_marshaled_com;

extern "C" void Vector3_t2243707580_marshal_com(const Vector3_t2243707580& unmarshaled, Vector3_t2243707580_marshaled_com& marshaled);
extern "C" void Vector3_t2243707580_marshal_com_back(const Vector3_t2243707580_marshaled_com& marshaled, Vector3_t2243707580& unmarshaled);
extern "C" void Vector3_t2243707580_marshal_com_cleanup(Vector3_t2243707580_marshaled_com& marshaled);
