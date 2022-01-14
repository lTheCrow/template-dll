@echo off
gcc -c -Iinclude/ template_dll.c
gcc -shared -o bin/test.dll template_dll.o
echo "DLL BUILT"