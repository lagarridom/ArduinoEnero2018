int x = 1; //Asignamos un entero a la variable x
int y = 2; //Asignamos un entero a la variable y

int pinLed1 = 8; //Estas variables van a facilitar el uso en las funciones
int pinLed2 = 9; //Estamos asignando los numeros que van a indicar el número de pin para los leds

void setup() {
  
pinMode(pinLed1,OUTPUT); //Declaramos cada pin como salida
pinMode(pinLed2,OUTPUT); // pinMode( número de pin, OUTPUT o INPUT )

}

void loop() {

if(y > x){ //Damos la condición y entre llaves las instrucciones a realizar
  
  digitalWrite(pinLed1,HIGH); //Con esta función estamos mandando voltaje por los pines
  digitalWrite(pinLed2,HIGH); //digitalWrite( número de pin, HIGH o LOW)
  
}

}



