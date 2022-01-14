@echo off
call build_dll.bat
gcc -Iinclude -o bin/test.exe test.c
del *.o
echo "PROGRAM BUILT"

start bin/test.exe