//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_not_null.h
//
// Creation Date : Mon 08 Nov 2010 03:53:11 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:08:02 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_NOT_NULL_H
#define EMP_TT_IS_NOT_NULL_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_is_null.h"
#include "emp_tt_not.h"
#include "emp_tt_trait.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(is_not_null, emp::tt::not_<is_null<T>::value>);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

