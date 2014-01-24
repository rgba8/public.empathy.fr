//-----------------------------------------------------------------------------
//
// File Name : emp_ast_statement.cpp
//
// Creation Date : Mon 08 Nov 2010 01:00:10 PM CET
//
// Modification Date : dim. 01 déc. 2013 19:31:18 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#include "emp_ast_statement.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace ast {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
statement_t::statement_t(   char const* const a_szFile,
                            unsigned int const a_uiLine,
                            char const* const a_szLine,
                            char const* const a_szFunction,
                            char const* const a_szSignature):
                            m_szFile(a_szFile),
                            m_uiLine(a_uiLine),
                            m_szLine(a_szLine),
                            m_szFunction(a_szFunction),
                            m_szSignature(a_szSignature)
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
char const* statement_t::file(void) const
{
    return m_szFile;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
unsigned int statement_t::ui_line(void) const
{
    return m_uiLine;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
char const* statement_t::sz_line(void) const
{
    return m_szLine;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
char const* statement_t::function(void) const
{
    return m_szFunction;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
char const* statement_t::signature(void) const
{
    return m_szSignature;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

