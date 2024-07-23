# 版本号是我瞎写的，应该用不到太高级版本的特性
cmake_minimum_required(VERSION 3.16)
project(talps-lsm)

find_package(fmt)
include_directories(
  ./src/include/
)
set(SRC 
  ./src/skiplist/skiplist.hpp
  ./src/main.cc
)
add_executable(main ${SRC})
target_link_libraries(main fmt::fmt)


