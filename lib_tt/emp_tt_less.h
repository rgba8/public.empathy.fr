//-----------------------------------------------------------------------------
//
// File Name : emp_tt_less.h
//
// Creation Date : Thu 03 Mar 2011 02:44:07 PM CET
//
// Modification Date : lun. 29 juin 2015 19:59:39 CEST
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
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename T, T t_Left, T t_Right>
EMP_NOINSTANCE_CLASS(less)
public:
    static const bool value = t_Left < t_Right;
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

