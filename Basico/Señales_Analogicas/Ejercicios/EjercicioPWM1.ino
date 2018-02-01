int ledArray = {9, 10, 11};
int pot;

void setup() {
  //No debe inicializarse el pin como salida
}

void loop() {
  for(int i=0; i<256; i++){
    analogWrite(led1, i);
    delay(10);
  }
}
