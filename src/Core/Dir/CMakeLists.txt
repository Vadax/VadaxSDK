cmake_minimum_required(VERSION 3.22)
project(Dir)

include_directories("../../../deps/boost")

add_library( Dir STATIC
             src/Dir.cpp Dir.h)

add_executable(dir_test tests/test.cpp)
TARGET_LINK_LIBRARIES( dir_test
                       Dir )
                       
#target_link_libraries( Dir ${Boost_LIBRARIES} )
