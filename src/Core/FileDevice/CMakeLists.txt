cmake_minimum_required(VERSION 3.22)
project(FileDevice)

include_directories("../../../deps/boost")

add_library( FileDevice STATIC
             src/FileDevice.cpp FileDevice.h)

add_executable(filedevice_test tests/test.cpp)
TARGET_LINK_LIBRARIES( filedevice_test
                       FileDevice )
                       
#target_link_libraries( FileDevice ${Boost_LIBRARIES} )
