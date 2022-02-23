# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("VxWidget")

# CMake instructions to make the static lib

ADD_LIBRARY( VxWidget STATIC
vxwidget.cpp
vxpushbutton.cpp
)

# CMake instructions to test using the static lib

SET( APP_EXE main)

ADD_EXECUTABLE( ${APP_EXE}
                main.cpp ) 

TARGET_LINK_LIBRARIES( ${APP_EXE}
                       VxWidget )