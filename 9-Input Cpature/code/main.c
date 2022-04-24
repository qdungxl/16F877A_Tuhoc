#include <main.h>
#include <var.h>
#include "lcd.c"
#include "timer.c"
#int_CCP2
void  ngat_CCP2(void) 
{  
   Value_Count = Count_Buffer+CCP_2-Cu_Value;
   Cu_Value    = CCP_2;
   Count_Buffer=0;
}
#INT_TIMER1           
void  ngat_timer1(void) 
{
   Count_Buffer+=0xffff;   
}
void main()
{  
   unsigned char str[20];
   float tan_so;
   LCD_Init();
   sprintf(str,"INPUT CAPTURE");
   delay_ms(10);
   LCD_Puts(str);
   delay_ms(1000);
   LCD_Clear();
   sprintf(str,"BanLinhKien.Vn");
   LCD_Gotoxy(0,0);
   LCD_Puts(str);
   timer1_config();
   set_timer1(0);
   enable_interrupts(GLOBAL); 
   enable_interrupts(INT_CCP2);
   setup_ccp2(CCP_CAPTURE_FE);
   while(TRUE)
   {
      tan_so=6000000/((float)(Value_Count));
      LCD_Gotoxy(0,1);
      sprintf(str,"Tan So= %6.1f",tan_so);
      LCD_Puts(str);
   }
}                
