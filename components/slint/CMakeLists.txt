# Copyright © SixtyFPS GmbH <info@slint.dev>
# SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0

idf_component_register(
    SRCS "src/slint-esp.cpp"
    INCLUDE_DIRS "include"
    REQUIRES "esp_lcd" "esp_lcd_touch")

# IMPORTANT: This component does NOT call find_package(Slint)
# The MAIN project CMakeLists.txt handles find_package(Slint) BEFORE project()
# This avoids duplicate target definitions and FetchContent fallbacks

target_link_libraries(${COMPONENT_LIB} PUBLIC Slint::Slint)
target_linker_script(${COMPONENT_LIB} INTERFACE "esp-println.x")