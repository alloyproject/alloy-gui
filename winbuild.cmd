@echo off
copy CMakeLists_Windows.txt CMakeLists.txt
del /s /q alloy
echo d | xcopy /y /e \opt\alloy alloy
mkdir build
del /s /q build
cd build

cmake.exe -G  "Visual Studio 14 2015 Win64"  ..

msbuild AlloyWallet.sln /p:Configuration=Release


