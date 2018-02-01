#include <Wire.h>

const byte slaveId = 1;
void setup() {
 Wire.begin(slaveId);
 Wire.onReceive(receiveEvent);

 pinMode(13,OUTPUT);
 digitalWrite(13,LOW);

}

void loop() {
  

}

void receiveEvent(){
  char inChar;
  while(Wire.available()>0){

    digitalWrite(13,HIGH);

}
  digitalWrite(13,LOW);
}

