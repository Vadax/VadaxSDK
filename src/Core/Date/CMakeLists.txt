cmake_minimum_required(VERSION 3.22)
project(Date)

include_directories("../../../deps/boost")

add_library( Date STATIC
             src/Date.cpp Date.h)


add_executable(date_test tests/test.cpp)


TARGET_LINK_LIBRARIES( date_test
                       Date )
#target_link_libraries( Date ${Boost_LIBRARIES} )
