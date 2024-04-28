#undef GPS_RX_PIN
#undef GPS_TX_PIN
// #define GPS_RX_PIN 36
// #define GPS_TX_PIN 33

#define I2C_SDA 12 // I2C pins for LoPy4
#define I2C_SCL 13

// #define RESET_OLED 16 // If defined, this pin will be used to reset the display controller
// #define LED_PIN 0 // If defined we will blink this LED
#define PIN_NEOPIXEL 0
#define FASTLED_ALL_PINS_HARDWARE_SPI


#define BUTTON_PIN 22 // If defined, this will be used for user button presses

// Pin definition in LoPy4 Manual is incorrect. See link to errata:
// https://forum.pycom.io/topic/3403/wiring-of-dio-pins-of-lora-sx127x-chip-to-esp32/4?_=1655162492722
// https://forum.pycom.io/topic/3483/erratum-in-lopy4-specification-document
// LoPy (original, not 4) pin definition:
// https://forum.pycom.io/post/20460

#define USE_RF95
#define LORA_DIO0 23 // Note: All DIO are wired through a diode bridge to a single pin
#define LORA_RESET RADIOLIB_NC // Not connected on LoPy4
#define LORA_DIO1 RADIOLIB_NC  // Not really used
#define LORA_DIO2 RADIOLIB_NC // Not really used


// In transmitting, set TXEN as high communication level，RXEN pin is low level;
// In receiving, set RXEN as high communication level, TXEN is lowlevel;

// Before powering off, set TXEN、RXEN as low level.

//#define LORA_RXEN -1 // Input - RF switch RX control, connecting external MCU IO, valid in high level

//#define LORA_TXEN -1 // Input - RF switch TX control, connecting external MCU IO or DIO2, valid in high level

// RX/TX for RFM95/SX127x
//#define RF95_RXEN LORA_RXEN
//#define RF95_TXEN LORA_TXEN
// #define RF95_TCXO <GPIO#>

#undef RF95_SCK
#define RF95_SCK 5
#undef RF95_MISO
#define RF95_MISO 19
#undef RF95_MOSI
#define RF95_MOSI 27
#undef RF95_NSS
#define RF95_NSS 18 

// for LOPY and FIPY
#define USE_SX1272

#define GPS_RX_PIN 15
#define GPS_TX_PIN 4

// #define GPS_WAKEUP_PIN 7
//#define GPS_1PPS_PIN 6
