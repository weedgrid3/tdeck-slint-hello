idf_component_register(
    SRCS "main.cpp"
    INCLUDE_DIRS "."
    REQUIRES slint driver freertos esp_lcd esp_lcd_touch
)

slint_target_sources(${COMPONENT_LIB} "ui/main.slint")