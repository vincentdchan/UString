cmake_minimum_required(VERSION 3.17)
project(UString)

set(CMAKE_CXX_STANDARD 17)

add_library(UString
        PrivateStringUtils.h
        PrivateStringUtils.cpp
        UStringNumeric.h
        UChar.h
        UString.h
        UString.cpp
        UStringDataPointer.h
        UStringDataPointer.cpp
        UStringData.h
        UStringData.cpp
        UStringView.h
        UStringView.cpp
        )
