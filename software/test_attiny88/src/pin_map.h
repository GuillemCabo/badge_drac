#pragma once
#include <Arduino.h>
#include <config.h>

#ifdef __rev1_patch__   
   //PA0 - 19
   const int PWM_G =23;
   //PA1 - 2
   const int PWM_B =24;
   //PB0 - 12
   const int SENSE_T0=8;
   //PC3 - 26
   const int SENSE_T1=20;
   //PB1 - 13
   const int PWM_R=9;
   //PB2 - 14
   const int PWM_BUZZ=10;
   //PB3 - 15
   const int MY_MOSI=11;
   //PB4 - 16
   const int MY_MISO=12;
   //PB5 - 17
   const int MY_SCK=13;
   //PB7 - 8
   const int BATT_SENSE_EN=15;
   //PC0 - 23
   const int BATT_SENSE=17;
   //PC4 - 27
   const int SDA_ACC=21;
   const int SDA_IR=21;
   //PC5 - 28
   const int SCLK_ACC=22;
   //PC6 - 29
   const int RST=27;
   //PD0 - 30
   const int LED_BLUE=2;
   //PD1 - 31
   const int LED_RED=1;
   //PD2 - 32
   const int LED_GREEN=0;
   //PD3 - 1
   const int EXP_GPIO0=3;
   //PD4 - 2
   const int EXP_GPIO1=4;
   //PD5 - 9
   const int LED_IR=5;
   //PD6 - 10
   const int SENSE_AMB=6;
   //PC2 - 25
   const int SW1=19;
#endif
#ifdef __rev1__   
   //PA0 - 19
   const int SELECT_PWM0 =23;
   //PA1 - 22
   const int SELECT_PWM1 =24;
   //PA3 - 6
   const int ENABLE_GATED_GND=26;
   //PB0 - 12
   const int SENSE_T0=8;
   //PC3 - 26
   const int SENSE_T1=20;
   //PB1 - 13
   const int PWM0=9;
   //PB2 - 14
   const int PWM1=10;
   //PB3 - 15
   const int MY_MOSI=11;
   //PB4 - 16
   const int MY_MISO=12;
   //PB5 - 17
   const int MY_SCK=13;
   //PB7 - 8
   const int BATT_SENSE_EN=15;
   //PC0 - 23
   const int BATT_SENSE=17;
   //PC4 - 27
   const int SDA_ACC=21;
   //PC5 - 28
   const int SCLK_ACC=22;
   //PC6 - 29
   const int RST=27;
   //PD0 - 30
   const int LED_BLUE=2;
   //PD1 - 31
   const int LED_RED=1;
   //PD2 - 32
   const int LED_GREEN=0;
   //PD3 - 1
   const int EXP_GPIO0=3;
   //PD4 - 2
   const int EXP_GPIO1=4;
   //PD5 - 9
   const int LED_IR=5;
   //PD6 - 10
   const int SENSE_AMB=6;
   //PC2 - 25
   const int SW1=19;
#endif
