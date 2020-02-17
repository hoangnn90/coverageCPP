cmake_minimum_required(VERSION 2.6)
project(test_foo C CXX)
 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(GTest REQUIRED)

set(SOURCE_CODE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)

include_directories(${GTEST_INCLUDE_DIRS} ${SOURCE_CODE_DIR})

file(GLOB SOURCE
      "*.cpp"
      "${SOURCE_CODE_DIR}/*.cpp"
)


add_executable(${PROJECT_NAME} ${SOURCE} ${SOURCE_CODE_DIR})

target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} pthread gtest gcov)

target_compile_options(${PROJECT_NAME} PRIVATE -fprofile-arcs -ftest-coverage -O3 )