//-----------------------------------------------------------------------------
//
// File Name : emp_tt_try_remove_pointer.h
//
// Creation Date : Thu 25 Nov 2010 02:54:14 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:09:54 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_TRY_REMOVE_POINTER_H
#define EMP_TT_TRY_REMOVE_POINTER_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_POINTER_H
#include "emp_tt_is_pointer.h"
#endif

#ifndef EMP_TT_REMOVE_POINTER_H
#include "emp_tt_remove_pointer.h"
#endif

#ifndef EMP_TT_TRAIT_H
#include "emp_tt_trait.h"
#endif

#ifndef EMP_TT_TRY_H
#include "emp_tt_try.h"
#endif

#ifndef EMP_PP_FORWARD_H
#include "emp_pp_forward.h"
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_TYPE(try_remove_pointer, typename EMP_PP_FORWARD_3(
                                            emp::tt::try_<T,
                                            emp::tt::is_pointer,
                                            emp::tt::remove_pointer>::type));

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } // tt // emp

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

