cmake_minimum_required(VERSION 3.1...3.24)

project(02_compiler
	VERSION 1.0
	LANGUAGES CXX)

add_executable(example hello_world.cpp func.cpp func.h)