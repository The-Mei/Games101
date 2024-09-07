cmake_minimum_required(VERSION 3.17)


project(Eigen3)

add_library(${PROJECT_NAME} SHARED Eigen.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC Eigen)