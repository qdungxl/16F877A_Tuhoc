#include <main.h>
#include "lcd.c"
#include <var.h>

void main()
{
   int8 str[20];
   LCD_Init();
   LCD_Clear();
   sprintf(str,"Hello Dung");
   LCD_Gotoxy(0,0);
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   while(TRUE)
   {
     for (int i=0;i<100;i++)
     {
      sprintf(str,"%2d",i);
      LCD_Gotoxy(5,1);
      LCD_Puts(str);
      delay_ms(500);
     }
   }

}
