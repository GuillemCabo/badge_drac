#include <sensors.h>

void pins_init(void){
    //leds
    pinMode(LED_GREEN,OUTPUT);
    pinMode(LED_RED,OUTPUT);
    pinMode(LED_BLUE,OUTPUT);
    digitalWrite(LED_GREEN,LOW);
    digitalWrite(LED_RED,LOW);
    digitalWrite(LED_BLUE,LOW);
    //DEBUG SECTION
    pinMode(SENSE_AMB,INPUT);
    pinMode(PWM1,OUTPUT);
    pinMode(PWM0,OUTPUT);
    pinMode(SELECT_PWM0,OUTPUT);
    pinMode(SELECT_PWM1,OUTPUT);
    pinMode(ENABLE_GATED_GND,OUTPUT);
    digitalWrite(ENABLE_GATED_GND,LOW);
    digitalWrite(PWM0,LOW);
    digitalWrite(PWM1,LOW);
    digitalWrite(SELECT_PWM1,LOW);
    digitalWrite(SELECT_PWM0,LOW);
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
