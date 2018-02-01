int pinRojo = 8;
int pinAmarillo = 9;
int pinVerde = 10;
int pinBuzzer = 7;

void setup() {

pinMode(pinRojo,OUTPUT);
pinMode(pinAmarillo,OUTPUT);
pinMode(pinVerde,OUTPUT);
pinMode(pinBuzzer,OUTPUT);

}

void loop() {

digitalWrite(pinVerde,HIGH);
digitalWrite(pinAmarillo,LOW);
digitalWrite(pinRojo,LOW);
digitalWrite(pinBuzzer,LOW);
delay(10000);
digitalWrite(pinVerde,LOW);
digitalWrite(pinAmarillo,HIGH);
digitalWrite(pinRojo,LOW);
digitalWrite(pinBuzzer,LOW);
delay(2000);
digitalWrite(pinVerde,LOW);
digitalWrite(pinAmarillo,LOW);
digitalWrite(pinRojo,HIGH);
digitalWrite(pinBuzzer,HIGH);
delay(7000);

}
