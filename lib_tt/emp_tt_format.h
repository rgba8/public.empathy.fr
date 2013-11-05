//-----------------------------------------------------------------------------
//
// File Name : emp_tt_format.h
//
// Creation Date : Sat 13 Nov 2010 09:00:18 AM CET
//
// Modification Date : mar. 05 nov. 2013 20:07:26 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_FORMAT_H
#define EMP_TT_FORMAT_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#ifndef EMP_XX_NOINSTANCE_CLASS_H
#include "emp_xx_noinstance_class.h"
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//TODO:w version

template <typename T>
class format;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define XARG_TT_FORMAT(x_Type, x_Value)\
template <>\
EMP_NOINSTANCE_CLASS(format<x_Type>)\
public:\
    static char const* value(void)\
    { return x_Value; }\
};
#include "emp_tt_format.def"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#undef XARG_TT_FORMAT

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } // tt // emp

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

