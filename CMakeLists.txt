cmake_minimum_required(VERSION 3.17)
project(Caesar_cipher C)

set(CMAKE_C_STANDARD 99)

add_executable(Caesar_cipher main.c encrypt.c encrypt.h characterlimit.h menus.c menus.h)