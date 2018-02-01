#include <SoftwareSerial.h>

SoftwareSerial BT(10,11);   //Primer parámetro es Rx, segundo es Tx.
void setup() {
  BT.begin(38400);    //Velocidades estandar del Bluetooth 9600 ó 38400.
  Serial.begin(9600);
}

void loop() {
  //Se comprueba si se llega un dato por los puertos del bluetooth, y se envia al monitor serial.
  if(BT.available())
  {
    Serial.write(BT.read());
  }
  //Envia del monitor al puerto Bluetooth
  if(Serial.available())
  {
    BT.write(Serial.read());
  }

}
