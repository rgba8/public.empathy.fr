//-----------------------------------------------------------------------------
// emp_tt_enum.h - @rgba8.org
//-----------------------------------------------------------------------------
#ifndef EMP_TT_ENUM_H
#define EMP_TT_ENUM_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_limit.h"
#include "emp_tt_literal.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_pp_cat.h"
#include "emp_pp_solve.h"
#include "emp_pp_string.h"

#include "emp_xx_vaargs.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define enum_value_impl(x_Call, x_Params) x_Call x_Params
#define enum_params(...) (__VA_ARGS__)
#define enum_value(...) EMP_PP_CAT(enum_value_, EMP_VAARGS_COUNT(__VA_ARGS__))(__VA_ARGS__)
#define enum_value_ex(...) EMP_PP_CAT(enum_value_ex_, EMP_VAARGS_COUNT(__VA_ARGS__))(__VA_ARGS__)
#define enum_class EMP_PP_CAT(enum_name, num)
#define enum_type_alias(x_Type) emp::tt::remove_reference<decltype(enum_alias<void>(emp::ast::cast<x_Type>(0)))>
#define enum_value_alias(x_Value) enum_type_alias(decltype(x_Value))
#define enum_count(x_Type) enum_type_alias(x_Type)::count
#define enum_array_of(x_Type, x_Enum) emp::cnt::array<x_Type, enum_count(x_Enum)>
#define enum_array(x_Enum) enum_array_of(x_Enum, x_Enum)

#define enum_to_(x_Value) enum_value_alias(x_Value)::to<x_Value>()
#define enum_to__(x_Value) enum_value_alias(x_Value)::to_t<x_Value>::value
#define enum_to_type_(x_Value, x_Type) enum_value_alias(x_Value)::to<x_Value, x_Type>()
#define enum_to(x_Value) enum_value_alias(x_Value)::to(x_Value)
#define enum_to_type(x_Value, x_Type) enum_value_alias(x_Value)::to<x_Type>(x_Value)

#define enum_from_(x_Type, x_Value) enum_type_alias(x_Type)::from<x_Value>()
//#define enum_from_(x_Type, x_Value) enum_type_alias(x_Type)::from_t<x_Value>::value
#define enum_from_type(x_Type, x_Value, x_From) enum_type_alias(x_Type)::from<x_Value, x_From>();
#define enum_from(x_Type, x_Value) enum_type_alias(x_Type)::from(x_Value)
#define enum_to_cstr(x_Value) enum_value_alias(x_Value)::name(x_Value)

#define enum_is_valid(x_Value) enum_value_alias(x_Value)::is_valid(x_Value)

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

