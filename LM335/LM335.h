/*
  LM335.h - Library for LM335 sensor.
  Created by Benoit Didry, January 14, 2022.
  Released into the public domain.
*/
#ifndef LM335_h
#define LM335_h

#include "Arduino.h"

class LM335 {
  public:
    LM335(int pin);
    float getKelvin();
    float getCelcius();
    float getFahrenheit();
  private:
    int _pin;
};

#endif
