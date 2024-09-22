cmake_minimum_required(VERSION 3.29)
project(RingBuffer C)

set(CMAKE_C_STANDARD 11)

add_executable(RingBuffer main.c
        RingBuffer.h
        RingBuffer.c
)
