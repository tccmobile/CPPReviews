# CPPReviews

A simple C++ application that allows you to view, add, and save product/service reviews.

## Description

CPPReviews is a command-line application that reads reviews from a text file, displays them, allows users to add new reviews, and saves all reviews back to the file.

## Features

- Read existing reviews from a file
- Display all reviews with numbering
- Add new reviews through the command line
- Save all reviews back to the file

## Requirements

- C++ compiler
- CMake (3.10 or higher)

## Building the Application

You can build the application using the provided build script:

```bash
./build.sh
```

This will:
1. Create a build directory if it doesn't exist
2. Navigate to the build directory
3. Configure the project with CMake
4. Build the project with make

## Running the Application

After building, run the application from the build directory:

```bash
cd build
./reviews
```

## Usage

1. When started, the application will display any existing reviews
2. Enter a new review when prompted
3. Type `QUIT` when you're done adding reviews
4. All reviews will be saved to the file automatically

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.