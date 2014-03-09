/*----------------------------------------------------------------------
       John Robbins - Microsoft Systems Journal Bugslayer Column

A simpler way to figure out the OS.
----------------------------------------------------------------------*/

#include "PCH.h"
#include "BugslayerUtil.h"
#include "Internal.h"

/*//////////////////////////////////////////////////////////////////////
                           File Scope Globals
//////////////////////////////////////////////////////////////////////*/
// Indicates that the version information is valid.
static BOOL g_bHasVersion = TRUE;
// Indicates NT or 95/98.
static BOOL g_bIsNT = TRUE ;

BOOL __stdcall IsNT(void)
{
    return (TRUE == g_bIsNT) ;
}


