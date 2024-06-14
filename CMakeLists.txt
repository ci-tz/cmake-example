cmake_minimum_required(VERSION 3.10)
project(MyProject VERSION 1.0 LANGUAGES CXX)

# 设置安装前缀
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加库
add_library(MyLibrary src/MyLibrary.cpp)

# 添加可执行文件
add_executable(MyExecutable main.cpp)

# 链接库
target_link_libraries(MyExecutable PRIVATE MyLibrary)

# 添加编译选项
target_compile_options(MyExecutable PRIVATE -Wall -Wextra -pedantic)

# 安装规则
install(TARGETS MyExecutable DESTINATION bin)
install(TARGETS MyLibrary DESTINATION lib)
install(FILES include/MyLibrary.hpp DESTINATION include)

# 启用测试
enable_testing()

# 查找 Google Test 库
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# 添加测试可执行文件
add_executable(MyTest tests/test_main.cpp)
target_link_libraries(MyTest PRIVATE MyLibrary GTest::GTest GTest::Main)

# 添加测试
add_test(NAME MyTest COMMAND MyTest)
