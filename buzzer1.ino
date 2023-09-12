//Buzzer

void setup() {
    pinMode(8, OUTPUT);
  }

void loop() {
  tone(8, 262); //pino e nota
  delay(1000);
  noTone(8);
  delay(1000);
}