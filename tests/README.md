# GTest

Man install GTest for Windows 10 [source](https://cpp-python-nsu.inp.nsk.su/textbook/sec2/ch7)

# Check point install

1. Need have mingw and cmake.
2. Download last realese source zip [link](https://github.com/google/googletest)
3. Repack zip
4. Of Powershell CD to dir with CMakeLists.txt
5. Create dir "build".
6. cd build
7. cmake -G "MinGW Makefiles" ..
8. Copy dir "googletest" to "mingw/include/"
9. Copy files of "lib/*" to "mingw/lib/"