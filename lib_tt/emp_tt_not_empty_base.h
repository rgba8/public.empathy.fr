//-----------------------------------------------------------------------------
//
// File Name : emp_tt_not_empty_base.h
//
// Creation Date : Sat 13 Nov 2010 11:13:11 AM CET
//
// Modification Date : mar. 26 nov. 2013 18:11:22 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_TT_NOT_EMPTY_BASE_H
#define EMP_TT_NOT_EMPTY_BASE_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_aa_pragma.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace tt {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
class not_empty_base
{
public:
    not_empty_base(void) : m_siPadding(0) {}
private:
#ifdef EMP_XX_COMPILER_LLVM
EMP_AA_PRAGMA_PUSH_IGNORE(EMP_AA_W_UNUSED_PRIVATE_FIELD)
#endif
    int m_siPadding;
#ifdef EMP_XX_COMPILER_LLVM
EMP_AA_PRAGMA_POP_IGNORE(EMP_AA_W_UNUSED_PRIVATE_FIELD)
#endif
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} } // tt // emp

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

