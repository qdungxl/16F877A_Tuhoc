#include <main.h>
#include <var.h>
#include "lcd.c"
int8 i =0;
#INT_EXT
void ngat_ngoai(void)
{ 
  i=0;
  LCD_Clear();
}

void main()
{
   unsigned char str[20];
   LCD_Init();
   sprintf(str,"TEST NGAT NGOAI");
   LCD_Gotoxy(1,0);
   LCD_Puts(str);
   LCD_Clear();
   enable_interrupts(GLOBAL);
   ext_int_edge(H_TO_L);
   enable_interrupts(INT_EXT);
   
   while(TRUE)
   {
      while(i<100)
      {
         LCD_Clear();
         sprintf(str," Dem: %2d",i);
         LCD_Puts(str);
         delay_ms(200);
         i++;
      }
   }

}
