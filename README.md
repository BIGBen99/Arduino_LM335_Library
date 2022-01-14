# Arduino_LM335_Library
Arduino library for LM335 temperature sensor

Datasheet : https://www.ti.com/lit/ds/symlink/lm335.pdf

================================================================================
# LM335(pin)
# Description
A call to LM335(pin) creates a new LM335 object.
# Parameters
pin: the analog pin (A0-A6) on which to receive temperature information

================================================================================
# LM335: getKelvin
# Description
Return a float that represents temperature in Kelvin
# Parameters
[none]
# Returns
a float that represents temperature in Kelvin

================================================================================
# LM335: getCelcius
# Description
Return a float that represents temperature in Celsius
# Parameters
[none]
# Returns
a float that represents temperature in Celsius

================================================================================
# LM335: getFahrenheit
# Description
Return a float that represents temperature in Farenheit
# Parameters
[none]
# Returns
a float that represents temperature in Farenheit

================================================================================
# Example
<pre>
&#35;include &lt;LM335.h&gt;

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
</pre>
