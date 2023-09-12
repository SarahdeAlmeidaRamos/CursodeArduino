// Inclua a biblioteca Ultrasonic
#include <Ultrasonic.h>

// Conecte o pino TRIG do sensor ao pino 2 e o pino ECHO ao pino 3
Ultrasonic ultrasonic(2, 3);

void setup() {
  // Inicialize a comunicação serial a uma taxa de 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Realiza uma leitura de distância em centímetros
  float cm = ultrasonic.read();

  // Imprime a leitura no monitor serial
  Serial.print("Distância: ");
  Serial.print(cm);
  Serial.println(" cm");

  // Aguarda um curto período de tempo antes da próxima leitura
  delay(1000); // Aguarde 1 segundo
}
