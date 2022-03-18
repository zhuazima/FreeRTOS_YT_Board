#ifndef _HAL_LED_H
#define _HAL_LED_H

#define LED1_PORT			GPIOB
#define LED1_PIN			GPIO_Pin_0

#define LED2_PORT			GPIOB
#define LED2_PIN			GPIO_Pin_1



void hal_Led1Drive(unsigned char sta);
void hal_ledConfig(void);

#endif
