//-----------------------------------------------------------------------------
//
// File Name : emp_xx_noinstance.h
//
// Creation Date : Mon 11 Oct 2010 09:46:49 PM CEST
//
// Modification Date : mar. 26 nov. 2013 18:14:25 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_XX_NOINSTANCE_H
#define EMP_XX_NOINSTANCE_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_xx_nocopy.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_XX_NOINSTANCE(...)\
    EMP_XX_NOCOPY(__VA_ARGS__);\
private:\
    class emp_nofriend {};\
    friend class emp_nofriend;\
    __VA_ARGS__(void);\
    virtual ~__VA_ARGS__(void) = 0

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

