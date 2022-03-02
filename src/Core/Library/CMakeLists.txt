cmake_minimum_required(VERSION 3.22)
project(Library)

include_directories("../../../deps/boost")

add_library( Library STATIC
             src/Library.cpp Library.h)

add_executable(library_test tests/test.cpp)
TARGET_LINK_LIBRARIES( library_test
                       Library )
                       
#target_link_libraries( Library ${Boost_LIBRARIES} )
