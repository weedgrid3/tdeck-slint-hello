#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_err.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_touch.h"
#include "esp_lcd_touch_gt911.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "slint-esp.h"
#include "slint.h"
#include "main.h"

static const char *TAG = "TDECK_SLINT";

/* T-Deck Plus (ESP32-S3) pinout for ST7789 + GT911 */
#define LCD_HOST           SPI2_HOST
#define LCD_PIXEL_CLK_HZ   (40 * 1000 * 1000)

#define PIN_LCD_SCLK       12
#define PIN_LCD_MOSI       11
#define PIN_LCD_MISO       -1
#define PIN_LCD_CS         10
#define PIN_LCD_DC         9
#define PIN_LCD_RST        13
#define PIN_LCD_BL         46

#define PIN_TOUCH_SDA      18
#define PIN_TOUCH_SCL      17
#define PIN_TOUCH_RST      38
#define PIN_TOUCH_INT      39

#define LCD_H_RES          320
#define LCD_V_RES          240

static esp_lcd_panel_handle_t panel_handle = nullptr;
static esp_lcd_touch_handle_t touch_handle = nullptr;

extern "C" void app_main(void)
{
    ESP_LOGI(TAG, "=== T-DECK PLUS ESP32-S3 SLINT HELLO WORLD ===");
    ESP_LOGI(TAG, "IDF: %s", esp_get_idf_version());
    ESP_LOGI(TAG, "Chip: %s", CONFIG_IDF_TARGET);

    /* Initialize SPI bus for LCD */
    spi_bus_config_t buscfg = {};
    buscfg.sclk_io_num = PIN_LCD_SCLK;
    buscfg.mosi_io_num = PIN_LCD_MOSI;
    buscfg.miso_io_num = PIN_LCD_MISO;
    buscfg.quadwp_io_num = -1;
    buscfg.quadhd_io_num = -1;
    buscfg.max_transfer_sz = LCD_H_RES * 80 * sizeof(uint16_t);
    ESP_ERROR_CHECK(spi_bus_initialize(LCD_HOST, &buscfg, SPI_DMA_CH_AUTO));

    /* Install LCD panel IO */
    esp_lcd_panel_io_handle_t io_handle = nullptr;
    esp_lcd_panel_io_spi_config_t io_config = {};
    io_config.dc_gpio_num = PIN_LCD_DC;
    io_config.cs_gpio_num = PIN_LCD_CS;
    io_config.pclk_hz = LCD_PIXEL_CLK_HZ;
    io_config.lcd_cmd_bits = 8;
    io_config.lcd_param_bits = 8;
    io_config.spi_mode = 0;
    io_config.trans_queue_depth = 10;
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)LCD_HOST, &io_config, &io_handle));

    /* Install ST7789 panel driver */
    esp_lcd_panel_dev_config_t panel_config = {};
    panel_config.reset_gpio_num = PIN_LCD_RST;
    panel_config.rgb_endian = LCD_RGB_ENDIAN_RGB;
    panel_config.bits_per_pixel = 16;
    ESP_ERROR_CHECK(esp_lcd_new_panel_st7789(io_handle, &panel_config, &panel_handle));

    /* Reset and init panel */
    ESP_ERROR_CHECK(esp_lcd_panel_reset(panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_init(panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_invert_color(panel_handle, true));
    ESP_ERROR_CHECK(esp_lcd_panel_set_gap(panel_handle, 0, 0));
    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));

    /* Backlight - simple GPIO on */
    gpio_config_t bl_gpio = {};
    bl_gpio.pin_bit_mask = 1ULL << PIN_LCD_BL;
    bl_gpio.mode = GPIO_MODE_OUTPUT;
    bl_gpio.pull_up_en = GPIO_PULLUP_DISABLE;
    bl_gpio.pull_down_en = GPIO_PULLDOWN_DISABLE;
    bl_gpio.intr_type = GPIO_INTR_DISABLE;
    ESP_ERROR_CHECK(gpio_config(&bl_gpio));
    gpio_set_level((gpio_num_t)PIN_LCD_BL, 1);

    /* Initialize I2C for GT911 touch */
    i2c_config_t i2c_conf = {};
    i2c_conf.mode = I2C_MODE_MASTER;
    i2c_conf.sda_io_num = PIN_TOUCH_SDA;
    i2c_conf.scl_io_num = PIN_TOUCH_SCL;
    i2c_conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    i2c_conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    i2c_conf.master.clk_speed = 400000;
    ESP_ERROR_CHECK(i2c_param_config(I2C_NUM_0, &i2c_conf));
    ESP_ERROR_CHECK(i2c_driver_install(I2C_NUM_0, i2c_conf.mode, 0, 0, 0));

    /* Install GT911 touch driver using I2C v1 API directly */
    esp_lcd_panel_io_handle_t tp_io_handle = nullptr;
    esp_lcd_panel_io_i2c_config_t tp_io_config = {};
    tp_io_config.dev_addr = 0x5D;
    tp_io_config.control_phase_bytes = 1;
    tp_io_config.dc_bit_offset = 0;
    tp_io_config.lcd_cmd_bits = 8;
    tp_io_config.lcd_param_bits = 8;
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_i2c_v1(I2C_NUM_0, &tp_io_config, &tp_io_handle));

    esp_lcd_touch_config_t tp_config = {};
    tp_config.x_max = LCD_H_RES;
    tp_config.y_max = LCD_V_RES;
    tp_config.rst_gpio_num = (gpio_num_t)PIN_TOUCH_RST;
    tp_config.int_gpio_num = (gpio_num_t)PIN_TOUCH_INT;
    tp_config.levels.reset = 0;
    tp_config.levels.interrupt = 0;
    tp_config.flags.swap_xy = false;
    tp_config.flags.mirror_x = false;
    tp_config.flags.mirror_y = false;
    ESP_ERROR_CHECK(esp_lcd_touch_new_i2c_gt911(tp_io_handle, &tp_config, &touch_handle));

    /* Initialize Slint platform with ESP32-S3 hardware */
    static std::vector<slint::platform::Rgb565Pixel> buffer(LCD_H_RES * LCD_V_RES);

    slint_esp_init(SlintPlatformConfiguration<> {
        .size = slint::PhysicalSize{{LCD_H_RES, LCD_V_RES}},
        .panel_handle = panel_handle,
        .touch_handle = touch_handle,
        .buffer1 = buffer,
        .byte_swap = true
    });

    /* Create and run the Slint UI */
    auto main_window = MainWindow::create();
    main_window->run();
}