#!/bin/bash

# Create build directory if it doesn't exist
mkdir -p build

# Navigate to build directory
cd build

# Configure the project
cmake ..

# Build the project
make

echo "Build complete. From the build directory, run the application with: ./reviews"