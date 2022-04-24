#include <main.h>
#include <var.h>
#include "lcd.c"
#include "timer.c"
void main()
{  
   unsigned char str[20];
   LCD_Init();
   sprintf(str,"TEST PWM");
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   setup_timer_2(T2_DIV_BY_1,59,1);
   setup_ccp1(CCP_PWM);
   set_pwm1_duty(72);
   while(TRUE)
   {
   }
}                

