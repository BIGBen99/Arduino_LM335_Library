#include <LM335.h>

LM335 lm335(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Temperature with LM335 sensor");
  Serial.print("Temperature : ");
  Serial.print(lm335.getKelvin());
  Serial.println(" K");
  Serial.print("Temperature : ");
  Serial.print(lm335.getCelcius());
  Serial.println(" C");
  Serial.print("Temperature : ");
  Serial.print(lm335.getFahrenheit());
  Serial.println(" F");
  Serial.println("--------------------");
  delay(5000);
}
