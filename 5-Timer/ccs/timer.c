#ifndef __TIMER_
#define __TIMER_
void timer0_config()
{
//////////////////////////////////////////////////////////////
//              Cau Hinh Timer 0                     //
//         T_tm0: Chu ky xung dem cua timer 0            //
//         T_osc: Chu ky dao dong su dung cho chip         //
//////////////////////////////////////////////////////////////
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1|RTCC_8_bit);      //   T_tm0=T_osc*4*1
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_2|RTCC_8_bit);      //   T_tm0=T_osc*4*2
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_4|RTCC_8_bit);      //   T_tm0=T_osc*4*4
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_8|RTCC_8_bit);      //   T_tm0=T_osc*4*8
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_16|RTCC_8_bit);      //   T_tm0=T_osc*4*16
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_32|RTCC_8_bit);      //   T_tm0=T_osc*4*32
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_64|RTCC_8_bit);      //   T_tm0=T_osc*4*64
//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_128|RTCC_8_bit);      //   T_tm0=T_osc*4*128
setup_timer_0(RTCC_INTERNAL|RTCC_DIV_256|RTCC_8_BIT);      //   T_tm0=T_osc*4*256
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_1|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 1 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_2|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 2 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_4|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 4 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_8|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 8 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_16|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 16 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_32|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 32 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_64|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 64 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_128|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 128 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_256|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 256 xung len tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_1|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 1 suon xuong tai chan PIN_A4 (T0CKI)   
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_2|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 2 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_4|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 4 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_8|RTCC_8_bit);      //   Tang gia tri timer0 len 1 khi co 8 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_16|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 16 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_32|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 32 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_64|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 64 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_128|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 128 suon xuong tai chan PIN_A4 (T0CKI)
//setup_timer_0(RTCC_EXT_H_TO_L|RTCC_DIV_256|RTCC_8_bit);   //   Tang gia tri timer0 len 1 khi co 256 suon xuong tai chan PIN_A4 (T0CKI)

/******************Thiet lap ngat timer*********************/
//++++++++++++++++++++++++++++++++++++++++++++++++++//
//                   NGAT TRAN TIMER 0            //
//++++++++++++++++++++++++++++++++++++++++++++++++++//
enable_interrupts(INT_TIMER0);   //Cho phep ngat tran timer0 hoat dong
//disable_interrupts(INT_TIMER0);   //Khong cho phep ngat tran timer0 hoat dong (mac dinh)

}
void timer1_config()
{
//setup_timer_1(T1_INTERNAL|T1_DIV_BY_1);               //
//setup_timer_1(T1_INTERNAL|T1_DIV_BY_2);               //
//setup_timer_1(T1_INTERNAL|T1_DIV_BY_4);               //
//setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);               //
//setup_timer_1(T1_EXTERNAL|T1_DIV_BY_1);               //
//setup_timer_1(T1_EXTERNAL|T1_CLK_OUT);               //
//setup_timer_1(T1_EXTERNAL|T1_EXTERNAL_SYNC);            //
//setup_timer_1(T1_EXTERNAL|T1_CLK_OUT|T1_EXTERNAL_SYNC);   //
setup_timer_1(T1_DISABLED);                           //

//++++++++++++++++++++++++++++++++++++++++++++++++++//
//               NGAT TRAN TIMER 1            //
//++++++++++++++++++++++++++++++++++++++++++++++++++//
//enable_interrupts(INT_TIMER1);   //Cho phep ngat tran timer1 hoat dong
disable_interrupts(INT_TIMER1);   //Khong cho phep ngat tran timer1 hoat dong (mac dinh)

}
void timer2_config()
{
//############################################################
//              Cau Hinh Timer 2                     //
//         Over_Period: 1-255                        //
//         Int_Period : 1-16                        //
//         T_Ov   :Chu ky tran bo dem timer2            //
//         T_In   :Chu ky xay ra ngat tran timer 0      //
//         T_osc   : Chu ky dao dong su dung cho chip      //
//############################################################

//setup_timer_2(T2_DIV_BY_1,Over_Period,Int_Period);      //   T_ov=T_osc*4*1*(1+Over_Period)   ;   T_In=T_osc*4*1*(1+Over_Period)*Int_Period
//setup_timer_2(T2_DIV_BY_4,Over_Period,Int_Period);      //   T_ov=T_osc*4*4*(1+Over_Period)   ;   T_In=T_osc*4*4*(1+Over_Period)*Int_Period
//setup_timer_2(T2_DIV_BY_16,Over_Period,Int_Period);      //   T_ov=T_osc*4*16*(1+Over_Period)   ;   T_In=T_osc*4*16*(1+Over_Period)*Int_Period
//setup_timer_2(T2_DISABLED,0,1);                      //   Khong su dung bo dem timer2
//++++++++++++++++++++++++++++++++++++++++++++++++++//
//               NGAT TRAN TIMER 2            //
//++++++++++++++++++++++++++++++++++++++++++++++++++//

//enable_interrupts(INT_TIMER2);   //Cho phep ngat tran timer2 hoat dong
disable_interrupts(INT_TIMER2);   //Khong cho phep ngat tran timer2 hoat dong (mac dinh)
}
#endif
