cmake_minimum_required(VERSION 3.22)
project(FileSystemWatcher)

include_directories("../../../deps/boost")

add_library( FileSystemWatcher STATIC
             src/FileSystemWatcher.cpp FileSystemWatcher.h)

add_executable(filesystemwatcher_test tests/test.cpp)
TARGET_LINK_LIBRARIES( filesystemwatcher_test
                       FileSystemWatcher )
                       
#target_link_libraries( FileSystemWatcher ${Boost_LIBRARIES} )
