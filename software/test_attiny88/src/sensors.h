#pragma once
#include <Arduino.h>
#include <pin_map.h>
#include "config.h"
void pins_init(void);//initialice all the connected pins to a default state
void blink(int pin);//debug function that allow to blink one led
void fastblink(int);// debug function that allow to blink fast one led
