#include <sensors.h>

void pins_init(void){
    //leds
    pinMode(GREEN_CHEEK,OUTPUT);
    pinMode(RED_CHEEK,OUTPUT);
    pinMode(BLUE_CHEEK,OUTPUT);
    digitalWrite(GREEN_CHEEK,LOW);
    digitalWrite(RED_CHEEK,LOW);
    digitalWrite(BLUE_CHEEK,LOW);
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
