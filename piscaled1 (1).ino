// Pisca LED

#include "SevSeg.h"
SevSeg setSeg;

void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  // Pino 8 - Ligado
  digitalWrite(8, HIGH);
  delay(1000); // espera 1000 millisegundos
  // Pino 8 - desligado
  digitalWrite(8, LOW);
  delay(1000); // espera 1000 millisegundos
}