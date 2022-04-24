#include <main.h>
#include <var.h>
#include "lcd.c"
#include "timer.c"
void main()
{  
   unsigned char str[20];
   unsigned int8 Value;
   LCD_Init();
   sprintf(str,"   DEMO COUNTER");
   delay_ms(10);
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   sprintf(str,"BanLinhKien.Vn");
   LCD_Gotoxy(0,0);
   LCD_Puts(str);
   timer0_config();
   set_timer0(0);
   while(TRUE)
   {
      delay_ms(1000);
      Value=get_timer0();
      LCD_Gotoxy(0,1);
      sprintf(str,"F = %2u xung/s",Value);
      LCD_Puts(str);
      set_timer0(0);
   }
}                
