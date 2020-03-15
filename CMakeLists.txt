cmake_minimum_required(VERSION 3.5)
project(cpp_ci_pipeline1)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_ci_pipeline1 src/Calculadora.cpp tests/test.cpp)