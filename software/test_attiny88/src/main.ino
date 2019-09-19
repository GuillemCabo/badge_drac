#define F_CPU 1000000UL
#include "config.h"
#include "pin_map.h"
#include "sensors.h"

void setup(){
    pins_init();
}

void loop(){
//_____________________________
// TEST PROGRAM
//_____________________________
    blink(GREEN_CHEEK);
    blink(RED_CHEEK);
    blink(BLUE_CHEEK);
}
