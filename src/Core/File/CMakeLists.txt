cmake_minimum_required(VERSION 3.22)
project(File)

include_directories("../../../deps/boost")

add_library( File STATIC
             src/File.cpp File.h)

add_executable(file_test tests/test.cpp)
TARGET_LINK_LIBRARIES( file_test
                       File )
                       
#target_link_libraries( File ${Boost_LIBRARIES} )
