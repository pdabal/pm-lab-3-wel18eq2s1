#include <Arduino.h>

#define BUTTON 2

uint16_t liczba_nacisniec = 0 ; 

void setup()
{
Serial.begin(96);
pinMode(BUTTON, INPUT);
}

void loop ()
{
  if(digitalRead(BUTTON))
  {
Serial.print("Liczba nacisniec przycisku: ");
Serial.print(++liczba_nacisniec);

}


}
