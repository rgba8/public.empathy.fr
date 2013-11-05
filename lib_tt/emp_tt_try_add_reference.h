//-----------------------------------------------------------------------------
//
// File Name : emp_tt_try_add_reference.h
//
// Creation Date : Thu 25 Nov 2010 04:15:02 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:09:48 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_TRY_ADD_REFERENCE_H
#define EMP_TT_TRY_ADD_REFERENCE_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_is_not_reference.h"
#include "emp_tt_add_reference.h"
#include "emp_tt_trait.h"
#include "emp_tt_try.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_TYPE(try_add_reference, typename EMP_PP_FORWARD_3(
                                            emp::tt::try_<T,
                                            emp::tt::is_not_reference,
                                            emp::tt::add_reference>::type));

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

