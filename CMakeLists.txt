
cmake_minimum_required(VERSION 3.31)

# 定义项目名称和使用的语言
project(LinearListDemo LANGUAGES CXX)

# 设置C++标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加可执行文件
add_executable(LinearListDemo
        main.cpp
        list.h
        list.cpp
        Linked_List.h
        Linked_List.cpp)
