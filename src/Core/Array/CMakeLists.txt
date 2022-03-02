cmake_minimum_required(VERSION 3.22)
project(Array)

include_directories("../../../deps/boost")

add_library( Array STATIC
             src/Array.cpp Array.h)

add_executable(array_test tests/test.cpp)
TARGET_LINK_LIBRARIES( array_test
                       Array )
                       
#target_link_libraries( Array ${Boost_LIBRARIES} )
