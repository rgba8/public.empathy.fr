//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_not_signed.h
//
// Creation Date : Thu 25 Nov 2010 04:34:36 PM CET
//
// Modification Date : mar. 26 nov. 2013 18:10:47 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_NOT_SIGNED_H
#define EMP_TT_IS_NOT_SIGNED_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_is_signed.h"
#include "emp_tt_not.h"
#include "emp_tt_trait.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(   is_not_signed,
                        emp::tt::not_<emp::tt::is_signed<T>::value>);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

