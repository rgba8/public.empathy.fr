//-----------------------------------------------------------------------------
//
// File Name : emp_ast_asserter.cpp
//
// Creation Date : Fri 15 Oct 2010 03:07:37 PM CEST
//
// Modification Date : dim. 01 déc. 2013 19:30:57 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#include "emp_ast_asserter.h"

#include "emp_ast_assert.h"
#include "emp_ast_output.h"
#include "emp_ast_statement.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_hh_stdlib.h"

#include "emp_xx_string.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#if defined(EMP_XX_ASSERT_ENABLE)

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace ast {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void asserter::condition(emp::ast::assert_t const& a_rAssert)
{
    if (a_rAssert.b_condition() == false)
    {
        output_header(EMP_XSZ_ASSERT, EMP_XC_UPPER_A, true);
        output_assert(a_rAssert, true);
        abort();
    }
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

