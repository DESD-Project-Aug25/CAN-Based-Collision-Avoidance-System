/*
 * adc.h
 *
 *  Created on: Apr 8, 2025
 *      Author: admin
 */

#ifndef ADC_H_
#define ADC_H_

#include "stm32f4xx.h"

void AdcInit(void);
uint16_t AdcRead(void);

#endif /* ADC_H_ */
