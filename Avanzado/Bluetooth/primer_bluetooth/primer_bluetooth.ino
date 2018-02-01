#include <LiquidCrystal.h>

#include <Servo.h>

Servo servo;

int rojo=13;
int azul = 10;
char estado=0;
int motor1 = 8;
int motor2 = 7;
int pinPotencia = 6;
int potenciometro = A0;
int potencia;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16,2);
  servo.attach(9);
  pinMode(rojo,OUTPUT);
  pinMode(azul,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(pinPotencia,OUTPUT);
  pinMode(potenciometro,INPUT);
  Serial.begin(38400);
}

void loop() {
  potencia = analogRead(potenciometro);
  potencia = map(potencia,0,1023,0,255);
  potencia = constrain(potencia,0,120);
  if(Serial.available()>0){
    estado = Serial.read();
    lcd.clear();
    switch(estado){
    case 'r': // led rojo
        lcd.write("prender rojo");
    break;
    case 'R': // apagar led rojo
        lcd.write("apagar rojo" );
    break;
    case 's': // mover servo
        lcd.write("mover servo");
    break;
    case 'S': // mover servo
        lcd.write("remover servo");
    break;
    case 'a': // led azul
        lcd.write("prender azul"); 
    break;
    case 'A': // apagar led azul
        lcd.write("apagar azul");
    break;
    case 'm': //motor adelante
        lcd.write("motor adelante");
    break;
    case 'n': //motor atras
        lcd.write("motor atras");
    break;
    case 'M': //apagar motor
        lcd.write("apagar motor");
    break;
    default:
        lcd.write("comando:");
        lcd.write(estado);
  }
  }

  switch(estado){
    case 'r': // led rojo
        digitalWrite(rojo,HIGH);    
    break;
    case 'R': // apagar led rojo
        digitalWrite(rojo,LOW);
    break;
    case 's': // mover servo
        servo.write(170);
    break;
    case 'S': // mover servo
        servo.write(0);
    break;
    case 'a': // led azul
        digitalWrite(azul,HIGH);    
    break;
    case 'A': // apagar led azul
        digitalWrite(azul,LOW);
    break;
    case 'm': //motor adelante
        digitalWrite(motor1,HIGH);
        digitalWrite(motor2,LOW);
        analogWrite(pinPotencia,potencia);
    break;
    case 'n': //motor atras
        digitalWrite(motor1,LOW);
        digitalWrite(motor2,HIGH);
        analogWrite(pinPotencia,potencia);
    break;
    case 'M': //apagar motor
        analogWrite(pinPotencia,0);
    break;
  }


}
