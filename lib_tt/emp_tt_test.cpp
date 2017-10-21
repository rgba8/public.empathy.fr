//-----------------------------------------------------------------------------
// emp_tt_test.cpp - @rgba8.org
//-----------------------------------------------------------------------------
#include "emp_tt_literal.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

#ifndef EMP_XX_COMPILER_MSC
static_assert(aformat_c::args(ALITERAL("#a#b#c")) == 0, "");
static_assert(AFORMAT("ab##", 0).args() == 0, "");
static_assert(aformat_c::args(ALITERAL("##")) == 0, "");
static_assert(aformat_c::args(ALITERAL("#0")) == 1, "");
static_assert(aformat_c::args(ALITERAL("#1")) == 0, "");
static_assert(aformat_c::args(ALITERAL("##0")) == 0, "");
static_assert(aformat_c::args(ALITERAL("#0#1")) == 2, "");
static_assert(aformat_c::args(ALITERAL("#0 #2")) == 0, "");
static_assert(aformat_c::args(ALITERAL("#0 #1")) == 2, "");
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
