//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_null.h
//
// Creation Date : Mon 08 Nov 2010 03:51:42 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:08:17 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_NULL_H
#define EMP_TT_IS_NULL_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_are_equal.h"
#include "emp_tt_null.h"
#include "emp_tt_trait.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(is_null, EMP_PP_FORWARD(are_equal<T, emp::tt::null>));

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

