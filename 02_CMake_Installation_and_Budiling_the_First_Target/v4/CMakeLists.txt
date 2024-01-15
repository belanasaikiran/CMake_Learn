cmake_minimum_required(VERSION 3.0.0) # You need to see which version works well for your project


project(Calculator VERSION 1.0.0) # Project Title and Version

add_library(my_math
addition.cpp
division.cpp
) # Creating a new library for addition & division - Can be used anywhere

add_library(printer
print_result.cpp) # A Separate Library which can be used in other projects by using `target_link_libraries`


add_executable(calculator
main.cpp
) # Your Main Executable that needs to be generated

target_link_libraries(calculator my_math printer) # This is where you link your libraries to your executable.

