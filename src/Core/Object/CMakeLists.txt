cmake_minimum_required(VERSION 3.22)
project(Object)

include_directories("../../../deps/boost")

add_library( Object STATIC
             src/Object.cpp Object.h)

add_executable(object_test tests/test.cpp)
TARGET_LINK_LIBRARIES( object_test
                       Object )
                       
#target_link_libraries( Object ${Boost_LIBRARIES} )
