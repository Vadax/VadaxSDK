cmake_minimum_required(VERSION 3.22)
project(Translator)

include_directories("../../../deps/boost")

add_library( Translator STATIC
             src/Translator.cpp Translator.h)

add_executable(translator_test tests/test.cpp)
TARGET_LINK_LIBRARIES( translator_test
                       Translator )
                       
#target_link_libraries( Translator ${Boost_LIBRARIES} )
