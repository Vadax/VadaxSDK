cmake_minimum_required(VERSION 3.22)
project(SysInfo)

include_directories("../../../deps/boost")

add_library( SysInfo STATIC
             src/SysInfo.cpp SysInfo.h)

add_executable(sysinfo_test tests/test.cpp)
TARGET_LINK_LIBRARIES( sysinfo_test
                       SysInfo )
                       
#target_link_libraries( SysInfo ${Boost_LIBRARIES} )
