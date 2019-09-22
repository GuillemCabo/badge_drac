#define F_CPU 1000000UL
#include "config.h"
#include "pin_map.h"
#include "sensors.h"
#include "buzzer.h"
void setup(){
    pins_init();
    buzzer_init();
}

void loop(){
//_____________________________
// TEST PROGRAM
//_____________________________
    buzzer_en(1);
    fastblink(LED_RED);
    buzzer_en(0);
    fastblink(LED_GREEN);
    fastblink(LED_BLUE);
    fastblink(PWM_R);
    fastblink(PWM_G);
    fastblink(PWM_B);
    fastblink(PWM_BUZZ);
    while(1){
        while(digitalRead(SENSE_T0))
            fastblink(LED_RED);
        while(digitalRead(SENSE_T1))
            fastblink(LED_BLUE);
        while(digitalRead(!SW1))
            fastblink(LED_GREEN);
        if(digitalRead(SENSE_AMB))
            fastblink2(PWM_R,PWM_B);
    }
}
