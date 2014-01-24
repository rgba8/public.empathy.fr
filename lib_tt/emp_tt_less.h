//-----------------------------------------------------------------------------
//
// File Name : emp_tt_less.h
//
// Creation Date : Thu 03 Mar 2011 02:44:07 PM CET
//
// Modification Date : mar. 26 nov. 2013 18:11:11 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_LESS_H
#define EMP_TT_LESS_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_constant.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_xx_noinstance_class.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename T, T t_Left, T t_Right>
EMP_NOINSTANCE_CLASS(less)
public:
    EMP_TT_CONSTANT(bool, value, t_Left < t_Right);
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

