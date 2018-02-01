int x = 1; 

int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

void loop() {

switch(x){//x es la variable que va a evaluar

  case 1: //se ejecuta si x = 1
    digitalWrite(pinLed1,HIGH);
    digitalWrite(pinLed2,LOW);
  break;//si no pusiesemos break, la evaluación continuaría

  case 2: //se ejecuta si x = 2
    digitalWrite(pinLed1,LOW);
    digitalWrite(pinLed2,HIGH);
  break;
  //Es importante dejar un espacio despues de "case"
  case 3: //se ejecuta si x = 3
    digitalWrite(pinLed1,HIGH);
    digitalWrite(pinLed2,HIGH);
  break;
  //El programador decide si poner o no un default
  default: //se ejecuta si x = cualquier otro valor
    digitalWrite(pinLed1,LOW);
    digitalWrite(pinLed2,LOW);
  
}

}



