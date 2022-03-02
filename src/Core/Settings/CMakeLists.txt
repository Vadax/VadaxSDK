cmake_minimum_required(VERSION 3.22)
project(Settings)

include_directories("../../../deps/boost")

add_library( Settings STATIC
             src/Settings.cpp Settings.h)

add_executable(settings_test tests/test.cpp)
TARGET_LINK_LIBRARIES( settings_test
                       Settings )
                       
#target_link_libraries( Settings ${Boost_LIBRARIES} )
