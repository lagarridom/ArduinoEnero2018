//Programa que ejemplifica la creación de caracteres
//personalizados en un LCD, mostrando una versión del
//dinosaurio de Chrome, y permite moverlo a la izquierda 
//y derecha
//
//En el siguiente link se encuentra una página para crear
//de manera fácil nuestros caracteres
//https://omerk.github.io/lcdchargen/

#include <LiquidCrystal.h>

//Pines para el LCD
int rs = 12;
int enable = 11;
int d4 = 7;
int d5 = 6;
int d6 = 5;
int d7 = 4;

//Pines para los controles
int pin_accion = 2;

LiquidCrystal lcd(rs,enable,d4,d5,d6,d7);

//Declaración de las partes del dinosaurio
byte dino1[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b11001
};
byte dino2[8] = {
  0b00111,
  0b01101,
  0b01111,
  0b01111,
  0b01111,
  0b11111,
  0b11111,
  0b11111
};
byte dino3[8] = {
  0b11110,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
  0b11100,
  0b00000,
  0b00000
};
byte dino4[8] = {
  0b11111,
  0b01111,
  0b00111,
  0b00011,
  0b00001,
  0b00001,
  0b00001,
  0b00001
};
byte dino5[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11110,
  0b10010,
  0b00010,
  0b10011
};
byte dino6[8] = {
  0b11000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

//Coloca el dinosaurio en el LCD
void putDino() {
  lcd.setCursor(0,0);
  lcd.write((uint8_t)0);
  lcd.write((uint8_t)1);
  lcd.write((uint8_t)2);
  lcd.setCursor(0,1);
  lcd.write((uint8_t)3);
  lcd.write((uint8_t)4);
  lcd.write((uint8_t)5);
}

//Carga el dinosaurio en el LCD y lo inicializa
void initDino(){
  //Agrega los caracteres a la memoria del LCD
  lcd.createChar(0, dino1);
  lcd.createChar(1, dino2);
  lcd.createChar(2, dino3);
  lcd.createChar(3, dino4);
  lcd.createChar(4, dino5);
  lcd.createChar(5, dino6);
  //Colocamos el dinosaurio en el LCD
  lcd.begin(16, 2);
  putDino();
}

void setup()
{
  //Configuración de pines de entrada (pueden cambiarse por pullup)
  pinMode(pin_accion,INPUT);
  initDino();
}

void loop()
{
  //Recorremos el dino hacia la derecha
  if(digitalRead(pin_accion) == HIGH) {
    for (int i = 0; i < 40; i++) {
      lcd.scrollDisplayRight();
      delay(250);
    }
  }
}
