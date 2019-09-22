#include <buzzer.h>
uint16_t buzz_freq=__default_freq__;
uint16_t time_on =  __alarm_time__;

void buzzer_init(void){
    pinMode(PWM_BUZZ,OUTPUT);
    tone(PWM_BUZZ,6000,100);
}
//set alarm time
void buzzer_time(uint16_t a){
    time_on=a;
}
//set the buzzer freq
void buzzer_freq(uint16_t a){
    buzz_freq=a;
}
void buzzer_en(bool en){
    noTone();
    if(en){
    tone(PWM_BUZZ,buzz_freq,time_on);
    }
    else{
    tone(PWM_BUZZ,0);
    }
}
