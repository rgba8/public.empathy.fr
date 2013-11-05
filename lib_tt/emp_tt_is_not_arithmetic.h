//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_not_arithmetic.h
//
// Creation Date : Thu 25 Nov 2010 04:24:06 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:07:52 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_NOT_ARITHMETIC_H
#define EMP_TT_IS_NOT_ARITHMETIC_H

//-----------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------
#include "emp_tt_is_arithmetic.h"
#include "emp_tt_not.h"
#include "emp_tt_trait.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(   is_not_arthmetic,
                        emp::tt::not_<emp::tt::is_arithmetic<T>::value>);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

