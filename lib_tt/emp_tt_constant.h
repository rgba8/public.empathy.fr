//-----------------------------------------------------------------------------
//
// File Name : emp_tt_constant.h
//
// Creation Date : Tue 30 Nov 2010 12:18:56 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:07:10 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_CONSTANT_H
#define EMP_TT_CONSTANT_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_TT_CONSTANT(x_Type, x_Name, x_Value)\
    static x_Type const x_Name = x_Value

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_TT_SIZEOF(x_Type)\
    EMP_TT_CONSTANT(size_t, sizeof_T, sizeof(x_Type))

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

