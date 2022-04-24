#include <main.h>
#include "lcd.c"
#include "adc.c"
#include <var.h>

void main()
{
   unsigned char str[20];
   unsigned int16 Value;
   LCD_Init();
   adc_config();
   sprintf(str,"  DEMO ADC");
   LCD_Puts(str);
   while(TRUE)
   {
      set_adc_channel(0);
      Value = read_adc();
      LCD_Gotoxy(1,1);
      sprintf(str," Adc=%4lu",Value);
      LCD_Puts(str);
      delay_ms(1000);
   }

}
