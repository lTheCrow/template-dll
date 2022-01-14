#include <stdio.h>
#include "template_dll.h"
#include "test.h"

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, 
                     PSTR cmdline, int cmdshow)
{
        FreeConsole();
        HMODULE template_dll = LoadLibrary("test.dll");
        test = (DLL_BOOL_PROC) GetProcAddress(template_dll, "test");
        test();

        FreeLibrary(template_dll);
}