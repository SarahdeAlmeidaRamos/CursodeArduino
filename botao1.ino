// Botao

int buttonState = 0; //estado inicial do botao

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT); //led do arduino
}

void loop()
{

  buttonState = digitalRead(2);
  //if - se o botao tiver ligado acende o led
  if (buttonState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // se não apaga
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); //delay para estabilizar
}