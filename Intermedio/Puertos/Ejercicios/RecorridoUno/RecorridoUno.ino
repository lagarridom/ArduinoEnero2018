void setup() {
  DDRB =  B00111100;
  PORTB = B00100000;
//Final   B00000100;

}

void loop() {
  if(PORTB == B00000100){
    PORTB = B00100000;//Reiniciamos
    delay(100);
  }
  

                   //B00100000
  PORTB = PORTB>>1;//B00010000
  delay(100);      //B00001000
}                  //B00000100
