#pragma once
#include "config.h"
#include <pin_map.h>
#define __default_freq__ 2000 //tone frequency in herz
#define __alarm_time__ 5000 //time in ms of alarm
void buzzer_init(void);
void buzzer_time(uint16_t);
void buzzer_freq(uint16_t);
void buzzer_en(bool);

