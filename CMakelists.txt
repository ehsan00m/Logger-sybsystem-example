cmake_minimum_required(VERSION 3.16.3)
project(logSample VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(app)
add_subdirectory(lib)