//-----------------------------------------------------------------------------
//
// File Name : emp_tt_is_real.h
//
// Creation Date : Mon 08 Nov 2010 03:08:23 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:08:23 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_IS_REAL_H
#define EMP_TT_IS_REAL_H

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
#ifndef EMP_PP_IF_H
#include "emp_pp_if.h"
#endif

#ifndef EMP_PP_NOT_H
#include "emp_pp_not.h"
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_TT_DECLARE_VALUE(is_real, emp::tt::false_);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define XTMP_TT_TYPE(x_Type, x_Name, x_Integral, x_Signedness, x_Distinct,\
                    x_Signed)\
EMP_PP_IF(EMP_PP_NOT(x_Integral),\
    EMP_TT_DECLARE_VALUE_SPECIAL_CV(is_real, x_Type, emp::tt::true_);)
EMP_TT_TYPES()
#undef XTMP_TT_TYPE

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } // tt // emp

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif
