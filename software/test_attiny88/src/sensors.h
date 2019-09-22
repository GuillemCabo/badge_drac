#pragma once
#include <Arduino.h>
#include <pin_map.h>
#include "config.h"
//AMB light sensor goes between VCORE(3V when dark) and 1V(with light)
#define DARK 200
#define LIGHT 50
void pins_init(void);//initialice all the connected pins to a default state
void blink(int pin);//debug function that allow to blink one led
void fastblink(int);// debug function that allow to blink fast one led
void fastblink2(int, int);// debug function that allow to blink fast two leds
