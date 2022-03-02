cmake_minimum_required(VERSION 3.22)
project(MimeData)

include_directories("../../../deps/boost")

add_library( MimeData STATIC
             src/MimeData.cpp MimeData.h)

add_executable(mimedata_test tests/test.cpp)
TARGET_LINK_LIBRARIES( mimedata_test
                       MimeData )
                       
#target_link_libraries( MimeData ${Boost_LIBRARIES} )
