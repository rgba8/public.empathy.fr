//-----------------------------------------------------------------------------
//
// File Name : emp_xx_noop.h
//
// Creation Date : Tue 12 Oct 2010 08:52:13 AM CEST
//
// Modification Date : dim. 03 nov. 2013 13:08:11 CET
//
// Created By : rgba8 (ksej) - www.empathy.fr
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_XX_NOOP_H
#define EMP_XX_NOOP_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_xx_multi_statement.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_XX_NOOP()\
EMP_XX_MULTI_STATEMENT_BEGIN()\
    (void)0;\
EMP_XX_MULTI_STATEMENT_END()

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

