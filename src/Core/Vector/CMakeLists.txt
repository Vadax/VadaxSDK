cmake_minimum_required(VERSION 3.22)
project(Vector)

include_directories("../../../deps/boost")

add_library( Vector STATIC
             src/Vector.cpp Vector.h)

add_executable(vector_test tests/test.cpp)
TARGET_LINK_LIBRARIES( vector_test
                       Vector )
                       
#target_link_libraries( Vector ${Boost_LIBRARIES} )
