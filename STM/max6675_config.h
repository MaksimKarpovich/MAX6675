
#ifndef __MAX6675_CONFIG_H
#define __MAX6675_CONFIG_H

#define SPI1_CS_GPIO_Port SPI1_CS_GPIO_Port
#define SPI1_CS_Pin SPI1_CS_Pin
#define SPI_CS_SET_HIGH()   HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_SET)
#define SPI_CS_SET_LOW()   HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_RESET)

#endif

