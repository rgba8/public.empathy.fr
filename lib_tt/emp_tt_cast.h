//-----------------------------------------------------------------------------
//
// File Name : emp_tt_cast.h
//
// Creation Date : Tue 11 Jan 2011 04:07:21 PM CET
//
// Modification Date : lun. 29 juin 2015 19:59:26 CEST
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_CAST_H
#define EMP_TT_CAST_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_assert.h"
#include "emp_tt_limit.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename t_From, t_From t_tFrom, typename t_To>
EMP_NOINSTANCE_CLASS(cast)
public:
    static const bool bmin = t_tFrom >= emp::tt::min<t_To>::value;
    EMP_STATIC_ASSERT(bmin);

    static const bool bmax = t_tFrom <= emp::tt::max<t_To>::value;
    EMP_STATIC_ASSERT(bmax);

    static const t_To value = static_cast<t_To>(t_tFrom);
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

