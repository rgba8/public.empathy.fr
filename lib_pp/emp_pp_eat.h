//-----------------------------------------------------------------------------
//
// File Name : emp_pp_eat.h
//
// Creation Date : Tue 12 Oct 2010 08:36:12 AM CEST
//
// Modification Date : mar. 26 nov. 2013 18:05:43 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_PP_EAT_H
#define EMP_PP_EAT_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_pp_token.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_PP_EAT(x_Count) EMP_PP_TOKEN(EMP_PP_EAT_, x_Count)

#define EMP_PP_EAT_0()
#define EMP_PP_EAT_1(a)
#define EMP_PP_EAT_2(a, b)
#define EMP_PP_EAT_3(a, b, c)
#define EMP_PP_EAT_4(a, b, c, d)
#define EMP_PP_EAT_5(a, b, c, d, e)
#define EMP_PP_EAT_6(a, b, c, d, e, f)

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

