# T-Deck Plus Slint Hello World (ESP32-S3 + ST7789 + GT911)

## Hardware
- **MCU**: ESP32-S3FN16R8 (16MB Flash, 8MB PSRAM)
- **Display**: 2.8" IPS LCD 320×240, ST7789 controller, SPI
- **Touch**: GT911 capacitive touch, I2C (addr 0x5D)

## Pinout (T-Deck Plus / LILYGO T-Deck Plus)
| Function | GPIO |
|----------|------|
| LCD_SCLK | 12 |
| LCD_MOSI | 11 |
| LCD_CS   | 10 |
| LCD_DC   | 9 |
| LCD_RST  | 13 |
| LCD_BL   | 46 |
| TP_SDA   | 18 |
| TP_SCL   | 17 |
| TP_RST   | 38 |
| TP_INT   | 39 |

## Build & Flash

```bash
# install esp-idf v5.2+ (if not already)
git clone -b v5.2 --recursive https://github.com/espressif/esp-idf.git ~/esp-idf
cd ~/esp-idf && ./install.sh esp32s3
. ~/esp-idf/export.sh

# build project
cd tdeck_slint
idf.py set-target esp32s3
idf.py build

# flash (adjust port)
idf.py -p /dev/ttyUSB0 flash monitor
```

## Features
- **Slint 1.18** via ESP-IDF component manager
- **ST7789** 320×240 @ 40MHz SPI, RGB565, software renderer
- **GT911** I2C touch @ 400kHz (addr 0x5D)
- **UI**: Declarative `.slint` markup with live counter animation
- **ESP_LOGI** logging over UART0 (115200) + Slint on display

## Expected Serial Output
```
I (xxx) main: === T-DECK PLUS ESP32-S3 SLINT HELLO WORLD ===
I (xxx) main: IDF: v5.2.x
I (xxx) main: Chip: esp32s3
I (xxx) main: Slint platform initialized, running UI
```

## Display Output
```
┌────────────────────────────────────┐
│         T-DECK PLUS      (cyan)    │
│                                    │
│        HELLO WORLD    (white)      │
│                                    │
│   ESP32-S3FN16R8                   │
│   320x240 ST7789 + GT911  (blue)   │
│                                    │
│      counter: 42      (green)      │
└────────────────────────────────────┘
```

## Troubleshooting
| Issue | Fix |
|-------|-----|
| Display garbled / wrong colors | Check `rgb_endian`, `invert_color`, `swap_xy`, `mirror_x/y` in panel config |
| Touch not working | Verify I2C pins, address (0x5D vs 0x14), pull-ups, INT pin config |
| PSRAM OOM | Increase `CONFIG_SPIRAM_CACHE_WORKAROUND`, reduce framebuffer size |
| Slint build errors | Ensure `slint` component version matches, check `.slint` syntax |

## Notes
- Uses ESP-IDF's built-in `esp_lcd_st7789` and `esp_lcd_touch_gt911` components
- Slint component fetched via IDF Component Manager (`slint` from espressif registry)
- Software renderer (CPU) with single framebuffer - can enable double buffering for smoother animation
- Backlight PWM via LEDC on GPIO46 (5kHz, 8-bit, ~78% duty)