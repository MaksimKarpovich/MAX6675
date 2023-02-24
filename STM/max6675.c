#include "max6675.h"

#define SPI_WAIT_TIME 1000
#define BYTE_SIZE 8
#define REGISTER_OFFSET 3
#define DEGREES_OFFSET 2
#define ARRAY_SIZE 2

extern SPI_HandleTypeDef hspi1;

float max6675_readTemperature(void)
{
    uint8_t rxData[ARRAY_SIZE];
    float Temperature = 0;
    SPI_CS_SET_LOW();
    HAL_SPI_Receive(&USING_SPI, rxData, ARRAY_SIZE, SPI_WAIT_TIME);
    SPI_CS_SET_HIGH();
    Temperature = (float) (rxData[1] | (rxData[0] << BYTE_SIZE)) >> (REGISTER_OFFSET + DEGREES_OFFSET);               // Temperature Data Extraction
//    HAL_Delay(250);                                       // Waits for Chip Ready(according to Datasheet, the max time for conversion is 220ms)
    return Temperature;
}

