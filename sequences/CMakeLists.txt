cmake_minimum_required(VERSION 3.20)
project(sequences)

set(CMAKE_CXX_STANDARD 17)

add_executable(sequences main.cpp)

add_library(inversions_library STATIC inversions.cpp inversions.h)

target_link_libraries(sequences PRIVATE inversions_library)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        inversions_test
        inversions_test.cpp
)
target_link_libraries(
        inversions_test
        gtest_main
)

target_link_libraries(
        inversions_test
        inversions_library
)

include(GoogleTest)
gtest_discover_tests(inversions_test)
