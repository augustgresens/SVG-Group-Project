cmake_minimum_required(VERSION 3.20)
project(graphics)

add_compile_options(-std=c++17 -g)

add_library(shapes shape.cpp line.cpp circle.cpp quadrangle.cpp triangle.cpp)
add_library(canvas mockcanvas.cpp svg.cpp position.cpp canvas.cpp)


add_executable(main main.cpp)
target_link_libraries(main PUBLIC shapes canvas)

add_executable(test testdraw.cpp)
target_link_libraries(test PUBLIC canvas)
