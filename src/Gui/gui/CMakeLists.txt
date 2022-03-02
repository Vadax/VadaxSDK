cmake_minimum_required(VERSION 3.22)
project(Array)
link_directories("../../../deps/sfml/lib")
include_directories("../../../deps/sfml/include")

add_executable(test test.cpp)
target_link_libraries( test sfml-system-s sfml-graphics-s sfml-window-s )
                       
#target_link_libraries( Array ${Boost_LIBRARIES} )
