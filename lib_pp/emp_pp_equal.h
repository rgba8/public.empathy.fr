//-----------------------------------------------------------------------------
//
// File Name : emp_pp_equal.h
//
// Creation Date : Mon 11 Oct 2010 11:01:03 PM CEST
//
// Modification Date : mar. 26 nov. 2013 18:06:08 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_PP_EQUAL_H
#define EMP_PP_EQUAL_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_pp_not.h"
#include "emp_pp_not_equal.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_PP_EQUAL(x_Left, x_Right) EMP_PP_EQUAL_IMP(x_Left, x_Right)
#define EMP_PP_EQUAL_IMP(x_Left, x_Right)\
    EMP_PP_NOT(EMP_PP_NOT_EQUAL(x_Left, x_Right))

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

