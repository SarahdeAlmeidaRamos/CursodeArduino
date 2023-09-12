// Pisca LED RGB
//
void setup()
{
  pinMode(3, OUTPUT); //Led Verde
  pinMode(4, OUTPUT); //Led Azul
  pinMode(5, OUTPUT); //Led Vermelho
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Espera 1000 millisegundos
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000); // Espera 1000 millisegundos
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(1000); // Espera 1000 millisegundos 
}