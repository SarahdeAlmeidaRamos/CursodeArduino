const int trigPin = 2; // Pino TRIG do sensor
const int echoPin = 3; // Pino ECHO do sensor

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration;
  int distance;

  // Gera um pulso no pino TRIG (10 microssegundos)
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lê a duração do pulso ECHO
  duration = pulseIn(echoPin, HIGH);

  // Calcula a distância em centímetros
  distance = duration * 0.034 / 2;

  // Imprime a distância no monitor serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Aguarda 1 segundo antes da próxima leitura
}
