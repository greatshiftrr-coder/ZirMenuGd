cmake_minimum_required(VERSION 3.25)

project(ZirMenu)

find_package(Geode REQUIRED)

add_geode_mod(
    ZirMenu
    VERSION v1.0.0
    SOURCES src/main.cpp
)
