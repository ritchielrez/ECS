cmake_minimum_required(VERSION 3.10)
set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)

project(ECS VERSION 1.0)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "src/*.cpp")

add_executable(main ${SRC_FILES})

target_include_directories(main PRIVATE "include/")