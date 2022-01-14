#ifndef TEMPLATE_DLL_H
#define TEMPLATE_DLL_H

#include "stdafx.h"
#define DLL_EXPORT       __declspec( dllexport )

typedef BOOL (*DLL_BOOL_PROC)(void);
typedef int (*DLL_INT_PROC)(void);
typedef void (*DLL_VOID_PROC)(void);

#endif