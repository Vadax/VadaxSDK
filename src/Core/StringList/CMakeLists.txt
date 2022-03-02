cmake_minimum_required(VERSION 3.22)
project(StringList)

include_directories("../../../deps/boost")

add_library( StringList STATIC
             src/StringList.cpp StringList.h)

add_executable(stringlist_test tests/test.cpp)
TARGET_LINK_LIBRARIES( stringlist_test
                       StringList )
                       
#target_link_libraries( StringList ${Boost_LIBRARIES} )
