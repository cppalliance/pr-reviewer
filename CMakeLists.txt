cmake_minimum_required(VERSION 3.16)
project(pr_reviewer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pr_reviewer
    src/main.cpp
    src/helpers.cpp
    src/stats.cpp
)
target_include_directories(pr_reviewer PRIVATE include)
