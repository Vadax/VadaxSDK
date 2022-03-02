cmake_minimum_required(VERSION 3.22)
project(Thread)

include_directories("../../../deps/boost")

add_library( Thread STATIC
             src/Thread.cpp Thread.h)

add_executable(thread_test tests/test.cpp)
TARGET_LINK_LIBRARIES( thread_test
                       Thread )
                       
#target_link_libraries( Thread ${Boost_LIBRARIES} )
