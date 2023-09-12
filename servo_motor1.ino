//servo

#include <Servo.h> // biblioteca do servo

int pos = 0; // posicao inicial

Servo servo_9; //pino do servo

void setup()
{
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  // movimento do servo 180 graus
  for (pos = 0; pos <= 180; pos += 1) {
    // posicao inicial + 1
    servo_9.write(pos);
    delay(15); // espera 15 millisegundos
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // posicao inicial - 1
    servo_9.write(pos);
    delay(15); // espera 15 millisegundos
  }
}