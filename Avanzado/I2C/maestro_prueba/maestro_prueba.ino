#include <Wire.h>

int potenciometro = A0;
int estado;
int numEsclavo;


void setup() { 
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  estado = analogRead(potenciometro);
  estado = map(estado, 0, 1023, 1,3);


  switch(estado){
    case 1:
       Wire.beginTransmission(1);
       Wire.write('H');
       Wire.endTransmission();
       while(estado == 1){
        estado = analogRead(potenciometro);
        estado = map(estado, 0, 1023, 1,3);
       }
       Wire.beginTransmission(1);
       Wire.write('L');
       Wire.endTransmission();
    break;
    case 2:
       Wire.beginTransmission(2);
       Wire.write('H');
       Wire.endTransmission();
       while(estado == 2){
        estado = analogRead(potenciometro);
        estado = map(estado, 0, 1023, 1,3);
       }
       Wire.beginTransmission(2);
       Wire.write('L');
       Wire.endTransmission();

    break;

    case 3:
       Wire.beginTransmission(3);
       Wire.write('H');
       Wire.endTransmission();
       while(estado == 3){
        estado = analogRead(potenciometro);
        estado = map(estado, 0, 1023, 1,3);
       }
       Wire.beginTransmission(3);
       Wire.write('L');
       Wire.endTransmission();

    break;
  }
Serial.println(estado);
}
