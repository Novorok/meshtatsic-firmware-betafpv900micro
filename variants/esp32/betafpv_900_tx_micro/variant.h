// https://betafpv.com/products/elrs-micro-tx-module

// 0.96" OLED
#define I2C_SDA 22
#define I2C_SCL 32
#define DISPLAY_FLIP_SCREEN
// NO GPS
#undef GPS_RX_PIN
#undef GPS_TX_PIN

//RADIO
#define USE_RF95
//#define USE_RF95_RFO

//#define RF95_MAX_POWER 27 //500mW max
#define RF95_MAX_POWER 2
#define LORA_SCK 18
#define LORA_MISO 19
#define LORA_MOSI 23
#define LORA_CS 5
#define RF95_FAN_EN 17
#define LORA_RESET 14
#define LORA_DIO0 4
#define LORA_DIO1 1
//#define LORA_BUSY 21
#define LORA_TXEN 26
#define LORA_RXEN 27
#define RF95_CS LORA_CS
#define RF95_DIO0 LORA_DIO0 
#define RF95_DIO1 LORA_DIO1 
#define RF95_TXEN LORA_TXEN
#define RF95_RXEN LORA_RXEN
#define RF95_RESET LORA_RESET

// #define LED_PIN 16 // This is a LED_WS2812 not a standard LED
#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
#define NEOPIXEL_DATA 16                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

// Joystic
#define INPUTBROKER_EXPRESSLRSFIVEWAY_TYPE
#define PIN_JOYSTICK 25
#define JOYSTICK_ADC_VALS /*UP*/ 2839, /*DOWN*/ 2191, /*LEFT*/ 1616, /*RIGHT*/ 3511, /*OK*/ 0, /*IDLE*/ 4095

#undef EXT_NOTIFY_OUT

