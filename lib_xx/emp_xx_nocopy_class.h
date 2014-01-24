//-----------------------------------------------------------------------------
//
// File Name : emp_xx_nocopy_class.h
//
// Creation Date : Thu 10 Mar 2011 02:56:57 PM CET
//
// Modification Date : mar. 26 nov. 2013 18:14:16 CET
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_XX_NOCOPY_CLASS_H
#define EMP_XX_NOCOPY_CLASS_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "emp_xx_nocopy.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_NOCOPY_CLASS(x_Name)\
class x_Name\
{\
    friend class emp::rfx::class_t<x_Name>;\
    EMP_XX_NOCOPY(x_Name);

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

