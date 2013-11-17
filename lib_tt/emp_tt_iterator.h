//-----------------------------------------------------------------------------
//
// File Name : emp_tt_iterator.h
//
// Creation Date : Sun 30 Jan 2011 07:45:30 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:08:32 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_ITERATOR_H
#define EMP_TT_ITERATOR_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_if_else.h"
#include "emp_tt_is_const.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename T>
EMP_NOINSTANCE_CLASS(iterator)
public:
    typedef typename emp::tt::if_else<
        emp::tt::is_const<T>::value,
        typename T::const_iterator,
        typename T::iterator>::type type;
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif
