int velocidad;
int ledPotenciometro = A0;
int potenciometro;
int tiempo;

void setup() {
  DDRB =  B00111100;
  PORTB = B00100000;
 //Empezar haciendo el cambio de sentido y luego el potenciometro
}

void loop() {
  potenciometro = analogRead(ledPotenciometro);
  tiempo = potenciometro;
  if(potenciometro > 512){
    tiempo = constrain(tiempo,512,1023);
    tiempo = map(tiempo,512,1023,0,1023);
    
    if(PORTB==B00000100){
      PORTB=B00100000;
      delay(1050-tiempo);
     }else{
    PORTB=PORTB>>1;
    delay(1050-tiempo);
     }

    
  }if(potenciometro < 512){
    tiempo = constrain(tiempo,0,512);
    tiempo = map(tiempo,0,512,1023,0);
    
    if(PORTB==B00100000){
      PORTB=B00000100;
      delay(1050-tiempo);
  }else{
    PORTB=PORTB<<1;
    delay(1050-tiempo);
  }


  }

}
