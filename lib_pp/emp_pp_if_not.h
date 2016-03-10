//-----------------------------------------------------------------------------
// emp_pp_if_not.h - @rgba8.org
//-----------------------------------------------------------------------------
#ifndef EMP_PP_IF_NOT_H
#define EMP_PP_IF_NOT_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_pp_bool.h"
#include "emp_pp_cat.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_PP_IF_NOT_IMP(x_Condition, x_Then) EMP_PP_CAT(EMP_PP_IF_NOT_IMP_, EMP_PP_BOOL(x_Condition))(x_Then)
#define EMP_PP_IF_NOT(x_Condition,x_Then) EMP_PP_IF_NOT_IMP(x_Condition,x_Then)

#define EMP_PP_IF_NOT_IMP_0(x_Then) x_Then
#define EMP_PP_IF_NOT_IMP_1(x_Then)

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

