//-----------------------------------------------------------------------------
//
// File Name : emp_tt_less.cpp
//
// Creation Date : Thu 10 Mar 2011 06:51:43 PM CET
//
// Modification Date : mar. 05 nov. 2013 20:08:34 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#include "emp_tt_less.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#ifdef EMP_XX_STATIC_ASSERT_ENABLE

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_tt_assert.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt { namespace test {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
typedef emp::tt::less<size_t, 0, 1> tless0;
EMP_STATIC_ASSERT(tless0::value);

typedef emp::tt::less<size_t, 0, 0> tless1;
EMP_STATIC_ASSERT(tless1::value == false);

typedef emp::tt::less<size_t, 1, 0> tless2;
EMP_STATIC_ASSERT(tless2::value == false);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

