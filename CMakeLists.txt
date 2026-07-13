cmake_minimum_required(VERSION 3.16)

# Use prebuilt Slint binaries via FindSlint.cmake
# This MUST be called BEFORE project() so slint_target_sources is available for components
list(PREPEND CMAKE_MODULE_PATH "/root/slint-src/api/cpp/esp-idf/slint/cmake")

# Add the slint component from source tree (provides slint-esp.cpp integration)
list(APPEND EXTRA_COMPONENT_DIRS /root/slint-src/api/cpp/esp-idf/)

# Set IDF_TARGET for FindSlint.cmake architecture detection
set(ENV{IDF_TARGET} "esp32s3")

# Set path to pre-downloaded slint-compiler
set(SLINT_COMPILER "/root/tdeck_slint/slint-compiler/slint-compiler" CACHE STRING "Path to slint-compiler executable" FORCE)

# Download/find Slint prebuilt binaries - this provides slint_target_sources and Slint::Slint target
find_package(Slint REQUIRED)

# Now include ESP-IDF project system
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(tdeck_slint LANGUAGES CXX)