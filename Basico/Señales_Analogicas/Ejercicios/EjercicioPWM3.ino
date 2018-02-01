int led1 = 3;
int pot = A0;

int valorPot = 0;
int valorLed = 0;

void setup() {
  //No debe inicializarse el pin como salida
}

void loop() {
  valorPot = analogRead(pot);
  // Mapeamos la entrada
  valorLed = map(valorPot, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(led1, valorLed);
}
