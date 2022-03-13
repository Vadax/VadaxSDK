# VadaxSDK
The VadaxSDK is a Asm, C & C++ software development toolkit for ARM(MPU & MCU) designed for inexperienced programmers.

#### Development Process
![API](https://raw.githubusercontent.com/Vadax/VadaxSDK/main/examples/api.png)

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
