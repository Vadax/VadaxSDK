cmake_minimum_required(VERSION 3.22)
project(Process)

include_directories("../../../deps/boost")

add_library( Process STATIC
             src/Process.cpp Process.h)

add_executable(process_test tests/test.cpp)
TARGET_LINK_LIBRARIES( process_test
                       Process )
                       
#target_link_libraries( Process ${Boost_LIBRARIES} )
