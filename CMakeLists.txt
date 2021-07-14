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

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/703bd9caab50b139428cea1aaff9974ebee5742e.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(UStringTest
        tests/test_split.cpp
        )

target_include_directories(UStringTest PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(UStringTest PUBLIC
        gtest_main UString)
