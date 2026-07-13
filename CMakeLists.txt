cmake_minimum_required(VERSION 3.16)

# Use prebuilt Slint binaries via FindSlint.cmake
# This MUST be called BEFORE project() so slint_target_sources is available for components
list(PREPEND CMAKE_MODULE_PATH "$ENV{HOME}/slint-src/api/cpp/esp-idf/slint/cmake")

# Add the slint component from source tree (provides slint-esp.cpp integration)
list(APPEND EXTRA_COMPONENT_DIRS "$ENV{HOME}/slint-src/api/cpp/esp-idf/")

# Tell slint component we're using nightly prebuilts - skip FetchContent fallback
set(SLINT_NIGHTLY ON CACHE BOOL "Using nightly prebuilt Slint binaries" FORCE)

# Set path to pre-downloaded slint-compiler binary
set(SLINT_COMPILER "$ENV{HOME}/tdeck-slint-hello/slint-compiler/slint-compiler" CACHE STRING "Path to slint-compiler executable" FORCE)

# Download/find Slint prebuilt binaries - this provides slint_target_sources and Slint::Slint target
find_package(Slint REQUIRED)

# Now include ESP-IDF project system
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(tdeck_slint LANGUAGES CXX)