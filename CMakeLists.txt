cmake_minimum_required(VERSION 3.16)

# Use prebuilt Slint binaries via FindSlint.cmake from slint source tree
# Allow user to override slint source location
set(SLINT_SOURCE_DIR "$ENV{HOME}/slint-src" CACHE PATH "Path to slint source tree (contains api/cpp/esp-idf/slint/cmake/FindSlint.cmake)")

# FindSlint.cmake provides slint_target_sources and downloads prebuilt binaries
list(PREPEND CMAKE_MODULE_PATH "${SLINT_SOURCE_DIR}/api/cpp/esp-idf/slint/cmake")

# Add the slint component from source tree (provides slint-esp.cpp integration)
list(APPEND EXTRA_COMPONENT_DIRS "${SLINT_SOURCE_DIR}/api/cpp/esp-idf/")

# Allow user to override slint-compiler location
set(SLINT_COMPILER_DIR "$ENV{HOME}/tdeck-slint-hello/slint-compiler" CACHE PATH "Directory containing slint-compiler binary")
set(SLINT_COMPILER "${SLINT_COMPILER_DIR}/slint-compiler" CACHE STRING "Path to slint-compiler executable" FORCE)

# Set IDF_TARGET for FindSlint.cmake architecture detection
set(ENV{IDF_TARGET} "esp32s3")

# Download/find Slint prebuilt binaries - this provides slint_target_sources and Slint::Slint target
find_package(Slint REQUIRED)

# Now include ESP-IDF project system
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(tdeck_slint LANGUAGES CXX)