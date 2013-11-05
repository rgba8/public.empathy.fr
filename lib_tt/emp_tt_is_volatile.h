//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_volatile.h
//
// Creation Date : Mon 08 Nov 2010 03:39:15 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:08:30 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_VOLATILE_H
#define EMP_TT_IS_VOLATILE_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#ifndef EMP_TT_BOOL_H
#include "emp_tt_bool.h"
#endif

#ifndef EMP_TT_TRAIT_H
#include "emp_tt_trait.h"
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(is_volatile, false_);
EMP_TT_DECLARE_VALUE_PARTIAL(is_volatile, T volatile, true_);
EMP_TT_DECLARE_VALUE_PARTIAL(is_volatile, T const volatile, true_);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } // tt // emp

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

