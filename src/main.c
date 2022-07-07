#include <stm32f103xb.h>
#include "LED.h"



int main(void)
{
    while (1)
    {
      LED_Toggle(6);
    }
    return 0;
}