#include <main.h>
#include <var.h>
#define LED pin_d0
#define BUTTON pin_a5
void main()
{
   boolean LedState = 0;
   output_drive(LED);
   output_low(LED);
   while(TRUE)
   {
      if(input(BUTTON)==0)
      {
         delay_ms(10);
         if(input(BUTTON)==0)
         {
            LedState = !LedState;
            output_bit(LED,LedState);
         }
         while(input(BUTTON)==0);
      }
   }

}
