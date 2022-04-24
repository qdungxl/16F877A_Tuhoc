#include <main.h>
#include <var.h>
#include "lcd.c"
#include "interrupt.c"
#include "timer.c"
void main()
{  
   unsigned char str[20];
   LCD_Init();
   sprintf(str,"   DEMO TIMER");
   delay_ms(10);
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   sprintf(str,"BanLinhKien.Vn");
   LCD_Gotoxy(0,0);
   LCD_Puts(str);
   interrupt_config();
   timer0_config();
   while(TRUE)
   {
   if(enable_display)
      {
      LCD_Gotoxy(0,1);
      sprintf(str,"Gia tri:%2u",Value);
      LCD_Puts(str);
      }
   }
}                
