//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_fundamental.h
//
// Creation Date : Mon 08 Nov 2010 03:16:45 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:07:48 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_FUNDAMENTAL_H
#define EMP_TT_IS_FUNDAMENTAL_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_is_arithmetic.h"
#include "emp_tt_is_void.h"
#include "emp_tt_or.h"
#include "emp_tt_trait.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(is_fundamental,
    emp::tt::or<is_arithmetic<T>::value EMP_PP_COMMA() is_void<T>::value>);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif
