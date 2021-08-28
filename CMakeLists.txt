cmake_minimum_required(VERSION 3.19)
project(Observer_okay_mega)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer_okay_mega main.cpp Cell.cpp Cell.h Observer.cpp Observer.h Subject.cpp Subject.h SumFormula.cpp SumFormula.h)