void setup() {
  Serial.begin(9600);  //iniciamos nuestra comunicacion serial a 9600 baudios
  pinMode(pin,OUPUT); //pin del LED
}

void loop() {     // nuestro loop no va a hacer nada O_O
}

void serialEvent(){             //Solo se activa cuando recibamos un byte(caracter) desde processing
      char mouse = Serial.read();     //leemos lo que nos mando processing
      Serial.println(mouse);
      if(mouse == '1') digitalWrite(pin,1);
      else digitalWrite(pin,0);       //prendemos o apagamos el led con la info que nos envio processing 
  
                        //una ves leida esta informacion le mandamos de regreso info a 
      Serial.print(analogRead(A0));     // processing (los valores analogicos)
      Serial.print(' ');          //le mandamos al final un salto de linea para indicar que terminamos de enviar info activando asi el serialEvent de processing
      Serial.println(analogRead(A1));   // Esto para que se vayan alternando los serialEvent() de ambos 
  
      // Otra opcion podria ser : 
      // Serial.println(String(analogRead(A0) + ' ' + String(analogRead(A1));
}
