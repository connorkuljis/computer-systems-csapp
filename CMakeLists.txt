cmake_minimum_required(VERSION 3.24)
project(csapp C)

set(CMAKE_C_STANDARD 11)

add_executable(csapp
        src/threads.c src/foo.c src/foo.h)
