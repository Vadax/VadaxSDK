cmake_minimum_required(VERSION 3.22)
project(MimeDatabase)

include_directories("../../../deps/boost")

add_library( MimeDatabase STATIC
             src/MimeDatabase.cpp MimeDatabase.h)

add_executable(mimedatabase_test tests/test.cpp)
TARGET_LINK_LIBRARIES( mimedatabase_test
                       MimeDatabase )
                       
#target_link_libraries( MimeDatabase ${Boost_LIBRARIES} )
