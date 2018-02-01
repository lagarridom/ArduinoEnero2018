#include <LED.h>

#include <Button.h>

Button boton1 = Button(8,PULLDOWN);
Button boton2 = Button(9,PULLDOWN);

LED rojo = LED(7);
LED blanco = LED(5);

int estado = 1;

void setup() {


}

void loop() {

switch(estado){
  case 1:
    
    rojo.on();
    blanco.off();

    if(boton1.isPressed() && !boton2.isPressed())
      estado = 2;

    if(boton1.isPressed() && boton2.isPressed())
      estado = 4;
    
  break;

  case 2:
  
    rojo.off();
    blanco.on();

    if(boton1.isPressed() && boton2.isPressed())
      estado = 3;
    
  break;

  case 3:
  
    rojo.off();
    blanco.off();

    if(boton2.isPressed() && !boton1.isPressed())
      estado = 4;
    
  break;

  case 4:
  
    rojo.blink(100);
    blanco.blink(100); 

    if(boton1.isPressed())
      estado = 5;
  break;

  case 5:
  
    rojo.on();
    blanco.on();

    if(boton2.isPressed())
      estado = 1;
  break;

}



}
