make_minimum_required(VERSION 3.20)

project(E36 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE SOURCES "*.cc")

add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../ThirdParty/glfw)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../ThirdParty/glm)

target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC glfw)
target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC glm)
