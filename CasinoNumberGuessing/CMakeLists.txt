cmake_minimum_required(VERSION 3.30)
project(CasinoNumberGuessing)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CasinoNumberGuessing
        main.cpp
        Player.cpp
        player.h
        Cassino.h
        Cassino.cpp
        )
