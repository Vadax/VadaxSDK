cmake_minimum_required(VERSION 3.22)
project(String)

include_directories("../../../deps/boost")

add_library( String STATIC
             src/String.cpp String.h)

add_executable(string_test tests/test.cpp)
TARGET_LINK_LIBRARIES( string_test
                       String )
                       
#target_link_libraries( String ${Boost_LIBRARIES} )
