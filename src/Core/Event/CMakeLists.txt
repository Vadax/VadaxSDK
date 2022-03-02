cmake_minimum_required(VERSION 3.22)
project(Event)

include_directories("../../../deps/boost")

add_library( Event STATIC
             src/Event.cpp Event.h)

add_executable(event_test tests/test.cpp)
TARGET_LINK_LIBRARIES( event_test
                       Event )
                       
#target_link_libraries( Event ${Boost_LIBRARIES} )
