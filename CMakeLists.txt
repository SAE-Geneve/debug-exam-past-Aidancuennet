cmake_minimum_required(VERSION 3.14)

if(WIN32)
    add_compile_options("/std:c++latest")
endif(WIN32)
set(CMAKE_CXX_STANDARD 17)

project(DebugExamPast)

add_executable(ex1
	${PROJECT_SOURCE_DIR}/Ex1/Ex1.cpp
)

add_executable(ex2
	${PROJECT_SOURCE_DIR}/Ex2/Ex2.cpp
)

add_executable(ex3
	${PROJECT_SOURCE_DIR}/Ex3/Characters.cpp
	${PROJECT_SOURCE_DIR}/Ex3/Characters.h
	${PROJECT_SOURCE_DIR}/Ex3/Ex3.cpp
)
