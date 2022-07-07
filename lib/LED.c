#include "LED.h"
void LED_init(int L){
    ENABLE_GPIO_CLOCK;              // enable the clock to GPIO
    LEDPORT->CRL |= GPIOMODER;   // set pins to be general purpose output
}
void LED_Toggle(int L){
    ms_delay(500);
    LEDPORT->ODR ^= (1<<LED1);  // toggle diodes
}
void ms_delay(int ms)
{
   while (ms-- > 0) {
      volatile int x=500;
      while (x-- > 0)
         __asm("nop");
   }
}
