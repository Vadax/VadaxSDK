cmake_minimum_required(VERSION 3.22)
project(Signals)

include_directories("../../../deps/boost")

add_library( Signals STATIC
             src/Signals.cpp Signals.h)

add_executable(signals_test tests/test.cpp)
TARGET_LINK_LIBRARIES( signals_test
                       Signals )
                       
#target_link_libraries( Signals ${Boost_LIBRARIES} )
