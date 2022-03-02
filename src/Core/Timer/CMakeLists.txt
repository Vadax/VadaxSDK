cmake_minimum_required(VERSION 3.22)
project(Timer)

include_directories("../../../deps/boost")

add_library( Timer STATIC
             src/Timer.cpp Timer.h)

add_executable(timer_test tests/test.cpp)
TARGET_LINK_LIBRARIES( timer_test
                       Timer )
                       
#target_link_libraries( Timer ${Boost_LIBRARIES} )
