cmake_minimum_required(VERSION 3.22)
project(MimeType)

include_directories("../../../deps/boost")

add_library( MimeType STATIC
             src/MimeType.cpp MimeType.h)

add_executable(mimetype_test tests/test.cpp)
TARGET_LINK_LIBRARIES( mimetype_test
                       MimeType )
                       
#target_link_libraries( MimeType ${Boost_LIBRARIES} )
