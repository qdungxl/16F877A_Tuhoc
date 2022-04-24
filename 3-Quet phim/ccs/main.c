#include <main.h>
#include <uart.c>
#include <key_4x4.c>
#include <var.h>

void main()
{
   unsigned int8 key;
   key_4x4_init();
   UART_config();
   printf("KEY 4X4 \n");
   while(TRUE)
   {
      key = get_key_4x4();
      if(key)
      {
         printf("Nut da nhan: %c \n",key);
         while(key) key = get_key_4x4();
      }
      delay_ms(100);
   }

}
