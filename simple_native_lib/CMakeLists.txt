cmake_minimum_required(VERSION 3.16)
project(gmodTestLib)

set(CMAKE_CXX_STANDARD 17)

add_library(gmodTestLib SHARED library.cpp library.h)

if(WIN32)
    add_custom_target(copy_files ALL DEPENDS gmodTestLib COMMAND COPY /B /Y \"${CMAKE_BINARY_DIR}\\Debug\\gmodTestLib.dll\" /B /Y \"${CMAKE_BINARY_DIR}\\gmodTestLib.dll\")
endif()