#ifndef __MAX6675_H
#define __MAX6675_H

#include "max6675_config.h"
#include "stdint.h"
#include "main.h"
#include "spi.h"

/**
  * @brief  Measure temperature
  *
  * @note Using SPI and max6675 measure temperature
  * @param  None
  * @retval Degrees Celsius (℃)
  */
float max6675_readTemperature(void);


#endif
