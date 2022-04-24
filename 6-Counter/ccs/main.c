#include <main.h>
#include <var.h>
#include "lcd.c"
#include "timer.c"

void main()
{

   unsigned char str[20];
   unsigned int8 Value;
   LCD_Init();
   sprintf(str,"   TEST COUNTER");
   LCD_Puts(str);
   delay_ms(1000);
   timer0_config();
   set_timer0(0);
   while(TRUE)
   {
      delay_ms(100);
      Value=get_timer0();
      LCD_Gotoxy(0,1);
      //sprintf(str,"F = %2u xung/s",Value);
      sprintf(str,"So lan = %2u",Value);
      LCD_Puts(str);
      //set_timer0(0);
   }

}
