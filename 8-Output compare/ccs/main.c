#include <main.h>
#include <var.h>
#include "lcd.c"
#include "timer.c"
#int_CCP1
void  ngat_CCP1(void) 
{  
   if(set)
   {
   set=0;
   setup_ccp1(CCP_COMPARE_CLR_ON_MATCH);
   }
   else
   {
   set=1;
   setup_ccp1(CCP_COMPARE_SET_ON_MATCH);
   }
   set_timer1(0);
}
void main()
{  
   unsigned char str[20];
   LCD_Init();
   sprintf(str,"OUTPUT COMPARE");
   delay_ms(10);
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   sprintf(str,"BanLinhKien.Vn");
   LCD_Gotoxy(0,0);
   LCD_Puts(str);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_1); 
   set_timer1(0);
   enable_interrupts(INT_CCP1);
   setup_ccp1(CCP_COMPARE_CLR_ON_MATCH);
   enable_interrupts(GLOBAL);  
   CCP_1=2000;
   while(TRUE)
   {
   }
}                

