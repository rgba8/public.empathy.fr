//-----------------------------------------------------------------------------
//
// File Name : emp_tt_are_equal.h
//
// Creation Date : Mon 08 Nov 2010 03:47:34 PM CET
//
// Modification Date : mar. 26 nov. 2013 18:09:43 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_ARE_EQUAL_H
#define EMP_TT_ARE_EQUAL_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#ifndef EMP_TT_BOOL_H
#include "emp_tt_bool.h"
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename t_Left, typename t_Right>
class are_equal : public emp::tt::false_
{
public:
    using emp::tt::false_::value;
private:
    EMP_XX_NOINSTANCE(are_equal);
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename t_Left>
class are_equal<t_Left, t_Left> : public emp::tt::true_
{
public:
    using emp::tt::true_::value;
private:
    EMP_XX_NOINSTANCE(are_equal);
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } // tt // emp

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

