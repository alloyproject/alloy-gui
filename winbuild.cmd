@echo off
copy CMakeLists_Windows.txt CMakeLists.txt
mkdir build
del /s /q build
cd build
"C:\Program Files\CMake\bin\cmake.exe" -G  "Visual Studio 14 2015 Win64"  ..

msbuild AlloyWallet.sln /p:Configuration=Release


