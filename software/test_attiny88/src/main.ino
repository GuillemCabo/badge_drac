#define F_CPU 1000000UL
#include "config.h"
#include "pin_map.h"
#include "sensors.h"

void setup(){
    pins_init();
    digitalWrite(ENABLE_GATED_GND,LOW);
    digitalWrite(SELECT_PWM1,LOW);
}

void loop(){
//_____________________________
// TEST PROGRAM
//_____________________________
    fastblink(LED_GREEN);
    fastblink(PWM1);
}
