cmake_minimum_required(VERSION 3.10)

project(CPPReviews VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(reviews main.cpp)

# Copy the reviews.txt file to the build directory
configure_file(reviews.txt ${CMAKE_CURRENT_BINARY_DIR}/reviews.txt COPYONLY)