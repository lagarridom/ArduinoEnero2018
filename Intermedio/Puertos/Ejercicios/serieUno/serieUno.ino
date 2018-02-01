byte valorB;

void setup() {
  //LEDS 8 - 13 (Puerto A)
  DDRB = B00111100;
  //Salida con 1 Entrada con 0

  //BOTONES 0 - 7 (PuertoC)
  DDRD = B00000010;
}

void loop() {

 valorB = PIND;
 PORTB = valorB;
 

}
