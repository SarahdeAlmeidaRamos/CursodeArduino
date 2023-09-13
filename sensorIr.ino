// IR

int Sensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // sensor é igual a leitura do pino analogico1
  Sensor = analogRead(A0);
  // printa o valor no monitor serial
  Serial.println(Sensor);
  delay(10); // Delay para estabilizar
}