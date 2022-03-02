cmake_minimum_required(VERSION 3.22)
project(FileInfo)

include_directories("../../../deps/boost")

add_library( FileInfo STATIC
             src/FileInfo.cpp FileInfo.h)

add_executable(fileinfo_test tests/test.cpp)
TARGET_LINK_LIBRARIES( fileinfo_test
                       FileInfo )
                       
#target_link_libraries( FileInfo ${Boost_LIBRARIES} )
