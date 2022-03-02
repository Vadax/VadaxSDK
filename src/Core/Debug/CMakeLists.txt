cmake_minimum_required(VERSION 3.22)
project(Debug)

include_directories("../../../deps/boost")

add_library( Debug STATIC
             src/Debug.cpp Debug.h)

add_executable(debug_test tests/test.cpp)
TARGET_LINK_LIBRARIES( debug_test
                       Debug )
                       
#target_link_libraries( Array ${Boost_LIBRARIES} )
