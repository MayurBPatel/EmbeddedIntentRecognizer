# CMakeList.txt : CMake project for EmbeddedIntentRecognizer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=17")

# Add source to this project's executable.
add_executable (EmbeddedIntentRecognizer "EmbeddedIntentRecognizer.cpp" "EmbeddedIntentRecognizer.h")

# TODO: Add tests and install targets if needed.