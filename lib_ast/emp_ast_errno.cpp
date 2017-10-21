// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
//-----------------------------------------------------------------------------
// emp_ast_errno.h - rgba8.org
//-----------------------------------------------------------------------------
#include "emp_ast_errno.h"

#include "emp_hh_errno.h"
#include "emp_hh_string.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#if defined EMP_XX_OS_OSX || defined EMP_XX_OS_IOS
#include <errno.h>
#endif

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
namespace emp { namespace ast {

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_RETURN int get_errno(void)
{ return errno; }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void set_errno(c_int a_siValue)
{ errno = a_siValue; }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_RETURN c_char* errno_to_cstr(void)
{ return errno_to_cstr(get_errno()); }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
EMP_RETURN c_char* errno_to_cstr(c_int
    #if defined EMP_XX_COMPILER_MSC
    #else
        a_siErrno
    #endif
    )
{
#if defined EMP_XX_COMPILER_MSC
    /*errno = 0;
    constexpr c_size c_stCount = 256;
    char cBuffer[c_stCount];
    strerror_s(cBuffer, c_stCount - 1, a_siErrno);*/
    return "not implemented";
#else
    errno = 0;
    cpc_char szResult = strerror(a_siErrno);
    EMP_ASSERT(szResult);
    EMP_ASSERT(errno == 0 || errno == ERANGE);
    return szResult;
#endif
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
} }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

