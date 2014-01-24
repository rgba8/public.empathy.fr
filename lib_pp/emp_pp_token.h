//-----------------------------------------------------------------------------
//
// File Name : emp_pp_token.h
//
// Creation Date : Mon 11 Oct 2010 10:47:27 PM CEST
//
// Modification Date : Tue Jan 14 19:27:07 2014
//
// Created By : ksej - www.rgba8.org
//
// Description :
//
//-----------------------------------------------------------------------------
#ifndef EMP_PP_TOKEN_H
#define EMP_PP_TOKEN_H

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_PP_TOKEN(x_Left, ...) EMP_PP_TOKEN_IMP(x_Left, __VA_ARGS__)
#define EMP_PP_TOKEN_IMP(x_Left, ...) x_Left ## __VA_ARGS__

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define EMP_PP_TOKEN_3(x_a, x_b, x_c) EMP_PP_TOKEN_3_IMP(x_a, x_b, x_c)
#define EMP_PP_TOKEN_3_IMP(x_a, x_b, x_c) x_a ## x_b ## x_c

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#endif

