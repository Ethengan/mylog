cmake_minimum_required(VERSION 3.10)
project(mylog)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(mylog 
            src/logger.cpp
            src/sinks/stdout_sink.cpp
            src/sinks/file_sink.cpp
)

add_executable(example example/main.cpp)

target_link_libraries(example mylog)