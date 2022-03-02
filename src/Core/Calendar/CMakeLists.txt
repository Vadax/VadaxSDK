cmake_minimum_required(VERSION 3.22)
project(Calendar)

include_directories("../../../deps/boost")

add_library( Calendar STATIC
             src/Calendar.cpp Calendar.h)

#project(Test)
add_executable(calendar_test tests/test.cpp)


TARGET_LINK_LIBRARIES( calendar_test
                       Calendar )
#target_link_libraries( Calendar ${Boost_LIBRARIES} )
