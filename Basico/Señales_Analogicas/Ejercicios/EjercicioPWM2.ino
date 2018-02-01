int led1 = 3;

void setup() {
  //No debe inicializarse el pin como salida
}

void loop() {
  for(int i=0; i<256; i++){
    analogWrite(led1, i);
    delay(10);
  }
  for(int i=255; i>=0; i--){
    analogWrite(led1, i);
    delay(10);
  }
}
