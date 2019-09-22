#include <sensors.h>

void pins_init(void){
    //cheeck leds
    pinMode(LED_GREEN,OUTPUT);
    pinMode(LED_RED,OUTPUT);
    pinMode(LED_BLUE,OUTPUT);
    digitalWrite(LED_GREEN,LOW);
    digitalWrite(LED_RED,LOW);
    digitalWrite(LED_BLUE,LOW);
    //back leds
    pinMode(PWM_R,OUTPUT);
    pinMode(PWM_G,OUTPUT);
    pinMode(PWM_B,OUTPUT);
    pinMode(PWM_BUZZ,OUTPUT);
    digitalWrite(PWM_R,LOW);
    digitalWrite(PWM_G,LOW);
    digitalWrite(PWM_B,LOW);
    digitalWrite(PWM_BUZZ,LOW);
    //sensors
    pinMode(SENSE_T1,INPUT);
    pinMode(SENSE_T0,INPUT);
    pinMode(SENSE_AMB,INPUT);
    pinMode(SW1,INPUT_PULLUP);
    pinMode(BATT_SENSE,INPUT);
    pinMode(BATT_SENSE_EN,OUTPUT);
    digitalWrite(BATT_SENSE_EN,LOW);
}

void blink(int pin){
    delay(1000);
    digitalWrite(pin,HIGH);
    delay(1000);
    digitalWrite(pin,LOW);
}
void fastblink(int pin){
    delay(100);
    digitalWrite(pin,HIGH);
    delay(100);
    digitalWrite(pin,LOW);
}
void fastblink2(int pin1,int pin2){
    delay(100);
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,HIGH);
    delay(100);
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
}

