#include "stm32f103xb.h"
#define LEDPORT (GPIOE)
#define LED1 (6)
#define ENABLE_GPIO_CLOCK (RCC->APB2ENR |= RCC_APB2ENR_IOPEEN)
#define _MODER    CRL
#define GPIOMODER (GPIO_CRL_MODE6_0)

void LED_init(int L);
void LED_On(int L);
void LED_off(int L);
void LED_Toggle(int L);
void ms_delay(int ms);