// Uncoment to debug.
#define _DEBUG_DHT
#define _DEBUG_BMP

// DHT11 sensor
#define DHT11PIN 2
DHT11 dht11(DHT11PIN);
float temp, hum;
uint8_t dht11Err;

// BMP180 sensor
SFE_BMP180 bmp;
uint8_t bmpErr;

