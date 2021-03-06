#ifndef __INTERRUPT_
#define __INTERRUPT_
void interrupt_config()
{
/***************ENABLE-DISABLE NGAT******************/
//++++++++++++++++++++++++++++++++++++++++++++++++++//
//                     NGAT NGOAI               //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_EXT);      //Cho phep ngat ngoai hoat dong
disable_interrupts(INT_EXT);      //Khong cho phep ngat ngoai hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
// NGAT KHI CO THAY DOI TRANG THAI CHAN RB4->RB7   //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_RB);      //Cho phep ngat RB hoat dong
disable_interrupts(INT_RB);      //Khong cho phep ngat RB hoat dong (mac dinh)
//++++++++++++++++++++++++++++++++++++++++++++++++++//
//   NGAT KHI CO CAPTURE HOAC COMPARE O BO CCP1      //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_CCP1);   //Cho phep ngat CCP1 hoat dong
disable_interrupts(INT_CCP1);   //Khong cho phep ngat CCP1 hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//   NGAT KHI CO CAPTURE HOAC COMPARE O BO CCP2      //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_CCP2);   //Cho phep ngat CCP2 hoat dong
disable_interrupts(INT_CCP2);   //Khong cho phep ngat CCP2 hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//      NGAT KHI TRUYEN XONG DU LIEU RS232         //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_TBE);   //Cho phep ngat TBE hoat dong
disable_interrupts(INT_TBE);   //Khong cho phep ngat TBE hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//      NGAT KHI NHAN 1 BYTE DU LIEU RS232         //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_RDA);   //Cho phep ngat RDA hoat dong
disable_interrupts(INT_RDA);   //Khong cho phep ngat RDA hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//               NGAT SSP                  //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_SSP);   //Cho phep ngat SSP hoat dong
disable_interrupts(INT_SSP);   //Khong cho phep ngat SSP hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//               NGAT PSP                  //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_PSP);   //Cho phep ngat PSP hoat dong
disable_interrupts(INT_PSP);   //Khong cho phep ngat PSP hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//               NGAT BUSCOL                  //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_BUSCOL);   //Cho phep ngat BUSCOL hoat dong
disable_interrupts(INT_BUSCOL);   //Khong cho phep ngat BUSCOL hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//      NGAT HOAN THANH GHI DU LIEU VAO EEPROM      //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_EEPROM);   //Cho phep ngat EEPROM hoat dong
disable_interrupts(INT_EEPROM);   //Khong cho phep ngat EEPROM hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//               NGAT COMPARATOR               //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_COMP);   //Cho phep ngat COMPARATOR hoat dong
disable_interrupts(INT_COMP);   //Khong cho phep ngat COMPARATOR hoat dong (mac dinh)

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//                NGAT TOAN CUC               //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(GLOBAL);   //Cho phep cac ngat co the hoat dong
disable_interrupts(GLOBAL);   //Khong cho phep cac ngat hoat dong (mac dinh)
}
//____________________NGAT NGOAI___________________________
#INT_EXT
void ngat_ngoai(void)
{   
   ;
}

//____NGAT KHI CO THAY DOI TRANG THAI CHAN RB4->RB7________

#INT_RB
void ngat_RB(void)
{   
   ;
}
//_________________NGAT TRAN TIMER 0_______________________

#INT_RTCC            
void  ngat_timer0(void) 
{
 set_timer0(2); 
   Count++;
   if(Count==46)
   {
   // dinh thoi 0.5s
   disable_interrupts(GLOBAL); 
   Count=0;                                 
   if(Value==99)Value=0; 
   else Value++;
   enable_display=1;
   enable_interrupts(GLOBAL);
   }
}
//_______________NGAT TRAN TIMER 1_________________________
#INT_TIMER1           
void  ngat_timer1(void) 
{
   
}
//______________NGAT TRAN TIMER 2__________________________
#INT_TIMER2          
void  ngat_timer2(void) 
{
   
}
//__________________NGAT HOAN THANH ADC____________________
   
#INT_AD          
void  ngat_ADC(void) 
{
   
}
//______NGAT KHI CO CAPTURE HOAC COMPARE O BO CCP1_________
#INT_CCP1          
void  ngat_ccp1(void) 
{
   
}
//______NGAT KHI CO CAPTURE HOAC COMPARE O BO CCP2_________
#INT_CCP2         
void  ngat_ccp2(void) 
{
   
}
//_____________NGAT KHI TRUYEN XONG DU LIEU RS232__________
#int_TBE
void  TBE_isr(void) 
{

}
//_____________NGAT KHI NHAN 1 BYTE DU LIEU RS232__________
#int_RDA
void  RDA_isr(void) 
{

}
//______________NGAT KHI CO HOAT DONG SPI HOAC I2C__________
#int_SSP
void  SSP_isr(void) 
{

}
//_____________NGAT KHI CO DU LIEU VAO CONG PSP______________
#int_PSP
void  PSP_isr(void) 
{

}
//________________NGAT KHI CO XUNG DOT BUS________________

#int_BUSCOL
void  BUSCOL_isr(void) 
{

}

//________NGAT HOAN THANH GHI DU LIEU VAO EEPROM____________

#int_EEPROM
void  EEPROM_isr(void) 
{

}

//_________NGAT KHI CO BANG NHAU TREN BO COMPARATOR___________

#int_COMP
void  COMP_isr(void) 
{

}

#endif
