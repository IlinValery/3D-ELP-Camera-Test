cmake_minimum_required(VERSION 3.10)
set(PROJECT_NAME test_opencv)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)
add_executable(test_opencv main.cpp)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})


