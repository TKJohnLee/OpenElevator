#include <stm32f103xb.h>
#define a1 (0.5)
#define aa1 (0.1)
#define g (9.8)
#define SafetyLoop EXTI0_IRQHandler

int Floor[2];
void Elevator_init();
