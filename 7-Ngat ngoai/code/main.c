#include <main.h>
#include <var.h>
#include "lcd.c"
#INT_EXT
void ngat_ngoai(void)
{   
  LCD_Clear();
}
void main()
{  
   unsigned char str[20];
   LCD_Init();
   sprintf(str,"DEMO NGAT NGOAI");
   delay_ms(10);
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   sprintf(str,"BanLinhKien.Vn");
   LCD_Gotoxy(1,0);
   LCD_Puts(str);
   enable_interrupts(GLOBAL); 
   ext_int_edge(H_TO_L); 
   enable_interrupts(INT_EXT);
   while(TRUE)
   {
      LCD_Gotoxy(1,0);
      sprintf(str,"BanLinhKien.Vn");
      LCD_PutsDelay(str,100);
      LCD_Gotoxy(2,1);
      sprintf(str,"MinhHaGroup");
      LCD_PutsDelay(str,100);
      LCD_Clear();
   }
}                
