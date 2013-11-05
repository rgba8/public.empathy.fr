//-----------------------------------------------------------------------------
//
// File Name : emp_tt_try_remove_volatile.h
//
// Creation Date : Thu 25 Nov 2010 04:05:23 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:09:58 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_TRY_REMOVE_VOLATILE_H
#define EMP_TT_TRY_REMOVE_VOLATILE_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_is_volatile.h"
#include "emp_tt_remove_volatile.h"
#include "emp_tt_trait.h"
#include "emp_tt_try.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_TYPE(try_remove_volatile, typename EMP_PP_FORWARD_3(
                                            emp::tt::try_<T,
                                            emp::tt::is_volatile,
                                            emp::tt::remove_volatile>::type));

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

