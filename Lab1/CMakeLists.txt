cmake_minimum_required(VERSION 3.14)
project(OOP_Lab1)

set(CMAKE_CXX_STANDARD 11)

# find_package(GTest REQUIRED)

add_executable(OOP_Lab1
    src/main.cpp
    src/format_time.cpp
)

# add_executable(test_format_time
#     test/test_main.cpp
#     test/test_format_time.cpp
#     src/format_time.cpp
# )

# target_link_libraries(test_format_time GTest::GTest GTest::Main)
target_include_directories(OOP_Lab1 PRIVATE include)
# target_include_directories(test_format_time PRIVATE include)