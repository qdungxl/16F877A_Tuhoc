#ifndef __ADC_
#define __ADC_
void adc_config()
{
   // setup_adc(ADC_OFF);                           // khong su dung che do ADC   (mac dinh)
   //setup_adc(ADC_CLOCK_INTERNAL);                 // su dung ADC voi tan so = tan so dao dong ben trong chip
   setup_adc(ADC_CLOCK_DIV_2);                     // su dung ADC voi tan so = tan so chip/2
   //setup_adc(ADC_CLOCK_DIV_4);                     // su dung ADC voi tan so = tan so chip/4
   //setup_adc(ADC_CLOCK_DIV_8);                     // su dung ADC voi tan so = tan so chip/8
   //setup_adc(ADC_CLOCK_DIV_16);                     // su dung ADC voi tan so = tan so chip/16
   //setup_adc(ADC_CLOCK_DIV_32);                     // su dung ADC voi tan so = tan so chip/32
   //setup_adc(ADC_CLOCK_DIV_64);                     // su dung ADC voi tan so = tan so chip/64
   //setup_adc_ports(ALL_ANALOG);                     //
   //setup_adc_ports(AN0_AN1_AN2_AN4_AN5_AN6_AN7_VSS_);      //
   //setup_adc_ports(AN0_AN1_AN2_AN3_AN4);               //
   //setup_adc_ports(AN0_AN1_AN2_AN4_VSS_VREF);            //
   //setup_adc_ports(AN0_AN1_AN3);                     //
   //setup_adc_ports(AN0_AN1_VSS_VREF);                  //
   //setup_adc_ports(AN0_AN1_AN2_AN3_AN4_AN5);            //
   //setup_adc_ports(AN0_AN1_AN2_AN4_AN5_VSS_VREF);         //
   //setup_adc_ports(AN0_AN1_AN4_AN5_VREF_VREF);         //
   //setup_adc_ports(AN0_AN1_AN4_VREF_VREF);            //
   //setup_adc_ports(AN0_AN1_VREF_VREF);               //
   setup_adc_ports(AN0);                           //
   //setup_adc_ports(AN0_VREF_VREF);                  //
   
/************************Thiet lap ngat**********************/
   //enable_interrupts(INT_AD);   //Cho phep ngat ADC hoat dong
   disable_interrupts(INT_AD);   //Khong cho phep ngat ADC hoat dong (mac dinh)
}
#endif
