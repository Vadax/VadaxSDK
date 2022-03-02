cmake_minimum_required(VERSION 3.22)
project(DateTime)

include_directories("../../../deps/boost")

add_library( DateTime STATIC
             src/DateTime.cpp DateTime.h)


add_executable(datetime_test tests/test.cpp)


TARGET_LINK_LIBRARIES( datetime_test
                       DateTime )
#target_link_libraries( DateTime ${Boost_LIBRARIES} )
