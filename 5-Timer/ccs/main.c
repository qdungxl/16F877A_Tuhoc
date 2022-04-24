#include <main.h>
#include <var.h>
#include "lcd.c"
#include "interrupt.c"
#include "timer.c"

void main()
{
   unsigned char str[20];
   LCD_Init();
   sprintf(str,"   TEST TIMER");
   delay_ms(10);
   LCD_Puts(str);
   delay_ms(1000);
   interrupt_config();
   timer0_config();
   while(TRUE)
   {
   if(enable_display)
      {
      LCD_Gotoxy(0,1);
      sprintf(str,"Timer: %2u",Value);
      LCD_Puts(str);
      }
   }
}
