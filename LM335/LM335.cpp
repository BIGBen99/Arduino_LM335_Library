/*
  LM335.cpp - Library for LM335 sensor.
  Created by Benoit Didry, January 14, 2022.
  Released into the public domain.
*/
#include "Arduino.h"
#include "LM335.h"

LM335::LM335(int pin) {
  _pin = pin;
}

float LM335::getKelvin() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 500.0 / 1023.0; 
}

float LM335::getCelcius() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 500.0 / 1023.0 - 273.15;
}

float LM335::getFahrenheit() {
  analogRead(_pin);
  delay(10);
  return (analogRead(_pin) * 300.0 / 341.0 - 459.67;
}
