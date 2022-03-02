# VadaxSDK
The VadaxSDK is a C++ software development toolkit for Linux(Console, Desktop, Mobile, Server) and Windows(Desktop) operating systems. And is being designed with 
inexperanced programmers in mind. 

#### Notes on Cmake build enviroment
```shell
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -v")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi")
add_link_options("-fuse-ld=lld")
```

#### Cmake and Ninja build
```shell
cmake -GNinja ..
ninja
```



#### Ninja clean build

```shell
ninja clean
```
