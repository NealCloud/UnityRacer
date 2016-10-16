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
// System.Object
struct Il2CppObject;
// UnityEngine.Quaternion
struct Quaternion_t4030073918;
struct Quaternion_t4030073918_marshaled_pinvoke;
struct Quaternion_t4030073918_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m3196903881 (Quaternion_t4030073918 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m2638853272 (Quaternion_t4030073918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t4030073918  Quaternion_Euler_m2887458175 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_Internal_FromEulerRad_m1121344272 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1113788132 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___euler0, Quaternion_t4030073918 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m2270520528 (Quaternion_t4030073918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3730391696 (Quaternion_t4030073918 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Quaternion_op_Multiply_m2426727589 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___lhs0, Quaternion_t4030073918  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t4030073918;
struct Quaternion_t4030073918_marshaled_pinvoke;

extern "C" void Quaternion_t4030073918_marshal_pinvoke(const Quaternion_t4030073918& unmarshaled, Quaternion_t4030073918_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t4030073918_marshal_pinvoke_back(const Quaternion_t4030073918_marshaled_pinvoke& marshaled, Quaternion_t4030073918& unmarshaled);
extern "C" void Quaternion_t4030073918_marshal_pinvoke_cleanup(Quaternion_t4030073918_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t4030073918;
struct Quaternion_t4030073918_marshaled_com;

extern "C" void Quaternion_t4030073918_marshal_com(const Quaternion_t4030073918& unmarshaled, Quaternion_t4030073918_marshaled_com& marshaled);
extern "C" void Quaternion_t4030073918_marshal_com_back(const Quaternion_t4030073918_marshaled_com& marshaled, Quaternion_t4030073918& unmarshaled);
extern "C" void Quaternion_t4030073918_marshal_com_cleanup(Quaternion_t4030073918_marshaled_com& marshaled);
