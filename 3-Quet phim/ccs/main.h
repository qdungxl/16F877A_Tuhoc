
#ifndef _MAIN_
#define _MAIN_
/***************KHAI BAO CAC THU VIEN*****************/   
#include <16F877A.h>
//#include <stdio.h>
//#include <hc595\hc595.h>            // Su dung IC74HC595
//#include <key_4x4\key_4x4.h>         // Su dung KEY PAD 4X4
//#include <lcd\lcd.h>               // Su dung LCD 16x2
//#include <ds1307\ds1307.h>         // Su dung DS1307
/**************KHAI BAO CAU HINH FUSE BIT************/
///////////////////////////////////////////////////////
//                                                   //
// Voi moi muc phai chon mot trong danh sach dua ra  //
//                                                   //
///////////////////////////////////////////////////////

//_________________POINTER AND ADC____________________

//#device *=16 adc=10          //   su dung con tro 16 bit, bo chuyen doi ADC 10 bit
#device *=16 adc=8          //  su dung con tro 16 bit, bo chuyen doi ADC 8 bit

//__________________WATCH DOG TIMER___________________

#FUSES NOWDT                   //   khong su dung bo Watch Dog Timer

//__________________HIGH SPEED OSC____________________

//#FUSES LP                        // Su dung nguon dao dong tan so thap < 200 khz
//#FUSES XT                        // Dao dong thach anh <= 4mhz voi PCM/PCH , 3mhz to 10 mhz voi PCD
//#FUSES RC                        // Dao dong RC voi CLKOUT
#FUSES HS                      //Dao dong tan so cao (> 4mhz voi PCM/PCH) (>10mhz voi PCD)

//__________________POWER UP TIMER____________________

#FUSES NOPUT                    //Khong su dung Power Up Timer
//#FUSES PUT                        //Su dung Power Up Timer
//__________________BROWN OUT_________________________

#FUSES NOBROWNOUT               //Khong reset chip khi BrownOut
//#FUSES BROWNOUT                   //Reset chi khi co BrownOut
//______________LOW VOLTAGE PROGRAM___________________

#FUSES NOLVP                    //No low voltage programing, B3(PIC16) or B5(PIC18) used for I/O
//#FUSES LVP                        //Low Voltage Programming on B3(PIC16) or B5(PIC18)
//______________CODE PROTECED EEPROM__________________

#FUSES NOCPD                    //Khong bao ve du lieu EEPROM
//#FUSES CPD                        //Dung che do bao ve du lieu EEPROM

//_____________PROGRAM WRITE PROTECED_________________

//#FUSES WRT                      //Program Memory Write Protected
//#FUSES WRT_50%                  //Lower half of Program Memory is Write Protected
//#FUSES WRT_5%                   //Lower 255 bytes of Program Memory is Write Protected
#FUSES NOWRT                    //Program memory not write protected

//_____________ENABLE DEBUG MODE FOR ICD______________

//#device ICD=TRUE            // Kich hoat chuc nang DEBUG ICD Integrated Chip Debugging
//________________DEBUG FOR ICD_______________________

#FUSES NODEBUG                  //Khong su dung che do Debug voi ICD
//#FUSES DEBUG                      // Su dung che do Debug voi ICD

//___________CODE PROTECED FROM READING_______________
#FUSES NOPROTECT                // Cho phep doc lai Code
//#FUSES PROTECT                    // Khong cho phep doc lai code 

//___________________CLOCK____________________________

#use delay(clock=24000000)            // Su dung tan so 20Mhz, khong reset watch dog khi goi den ham delay.
//#use delay(clock=20000000,RESTART_WDT)   // Su dung tan so 20Mhz, reset watch dog khi goi den ham delay.

//________________FAST_STANDAR I/O PORTA___________________

#use FAST_IO(A)          // Thiet lap che do fast I/O cho PORTA, yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se chi su dung 1 chu ky lenh
//#use STANDARD_IO(A)     // Thiet lap che do chuan I/O cho PORTA, khong yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se su dung 3-4 chu ky lenh
//#use FIXED_IO(A)       //

//________________FAST_STANDAR I/O PORTB___________________

#use FAST_IO(B)          // Thiet lap che do fast I/O cho PORTB, yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se chi su dung 1 chu ky lenh
//#use STANDARD_IO(B)     // Thiet lap che do chuan I/O cho PORTB, khong yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se su dung 3-4 chu ky lenh
//#use FIXED_IO(B)       //

//________________FAST_STANDAR I/O PORTC____________________

#use FAST_IO(C)          // Thiet lap che do fast I/O cho PORTC, yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se chi su dung 1 chu ky lenh
//#use STANDARD_IO(C)     // Thiet lap che do chuan I/O cho PORTC, khong yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se su dung 3-4 chu ky lenh
//#use FIXED_IO(C)       //

//________________FAST_STANDAR I/O PORTD_____________________

#use FAST_IO(D)          // Thiet lap che do fast I/O cho PORTD, yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se chi su dung 1 chu ky lenh
//#use STANDARD_IO(D)     // Thiet lap che do chuan I/O cho PORTD, khong yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se su dung 3-4 chu ky lenh
//#use FIXED_IO(D)       //

//_______________FAST_STANDAR I/O PORTE___________________

#use FAST_IO(E)        // Thiet lap che do fast I/O cho PORTE, yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se chi su dung 1 chu ky lenh
//#use STANDARD_IO(E)     // Thiet lap che do chuan I/O cho PORTE, khong yeu cau phai chi ro huong Vao/Ra 
                         // cho cac chan I/O. cac ham Input,Output se su dung 3-4 chu ky lenh
//#use FIXED_IO(E)       //

//___________________GIAO TIEP I2C________________________


//#define I2C_DATA   PIN_C4
//#define I2C_CLK   PIN_C3
//#use i2c(Master,Fast,sda=I2C_DATA,scl=I2C_CLK)
//#use i2c(Master,Fast,sda=I2C_DATA,scl=I2C_CLK,restart_wdt)
//#use i2c(Master,Fast,sda=I2C_DATA,scl=I2C_CLK,force_hw)
//#use i2c(Master,Fast,sda=I2C_DATA,scl=I2C_CLK,restart_wdt,force_hw)
//#use i2c(Master,Slow,sda=I2C_DATA,scl=I2C_CLK)
//#use i2c(Master,Slow,sda=I2C_DATA,scl=I2C_CLK,restart_wdt)
//#use i2c(Master,Slow,sda=I2C_DATA,scl=I2C_CLK,force_hw)
//#use i2c(Master,Slow,sda=I2C_DATA,scl=I2C_CLK,restart_wdt,force_hw)
//#use i2c(Slave,Fast,sda=I2C_DATA,scl=I2C_CLK,address=0x)
//#use i2c(Slave,Fast,sda=I2C_DATA,scl=I2C_CLK,restart_wdt,address=0x)
//#use i2c(Slave,Fast,sda=I2C_DATA,scl=I2C_CLK,force_hw,address=0x)
//#use i2c(Slave,Fast,sda=I2C_DATA,scl=I2C_CLK,restart_wdt,force_hw,address=0x)
//#use i2c(Slave,Slow,sda=I2C_DATA,scl=I2C_CLK,address=0x)
//#use i2c(Slave,Slow,sda=I2C_DATA,scl=I2C_CLK,restart_wdt,address=0x)
//#use i2c(Slave,Slow,sda=I2C_DATA,scl=I2C_CLK,force_hw,address=0x)
//#use i2c(Slave,Slow,sda=I2C_DATA,scl=I2C_CLK,restart_wdt,force_hw,address=0x)

//________________________CASE_____________________________


//#CASE               // Phan biet chu hoa va chu thuong trong khi lap trinh code


/************** DINH NGHIA CAC CHAN I/O ************/

////////////////////////////////////////////////////////
//   Xoa chu thich cho cac chuc nang I/O su dung       //
//  Dinh nghia lai cac chan cho phu hop voi phan cung // 
////////////////////////////////////////////////////////

//______________________I/O LCD____________________________
/*#define LCD_RS PIN_E0                        
#define LCD_RW PIN_E1
#define LCD_EN PIN_E2
#define LCD_D4 PIN_D4                 
#define LCD_D5 PIN_D5
#define LCD_D6 PIN_D6
#define LCD_D7 PIN_D7 */
//_____________________I/O HC595___________________________
#define HC595_LATCH_BIT    PIN_C3
#define HC595_LATCH_FRAME  PIN_C4 
#define HC595_DATA         PIN_C5 
//____________________I/O DS1307___________________________
//__________________I/O KEY PAD 4x4________________________
   #define ROW1   PIN_D0
   #define ROW2   PIN_D1
   #define ROW3   PIN_D2
   #define ROW4   PIN_D3
   #define COL1   PIN_D4
   #define COL2   PIN_D5
   #define COL3   PIN_D6
   #define COL4   PIN_D7
//____________________OTHER________________________________

#endif

