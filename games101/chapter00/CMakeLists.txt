project(Chapter00)


file(GLOB_RECURSE INCLUDE
"code/*.h")

file(GLOB_RECURSE SRC
"code/*.cpp")

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE})
target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3)