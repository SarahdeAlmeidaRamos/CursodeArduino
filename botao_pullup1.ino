//botao pullup

void setup() {
  pinMode(2, INPUT_PULLUP); //pullup - sempre ligada
  pinMode(LED_BUILTIN, OUTPUT); // led do arduino

}

void loop() {
  //variavel para o valor do botao
  int BtPin = digitalRead(2);
  
  if (BtPin == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
}