int motp1 = 7;
int motp2 = 6;
int speedm = 5;

int pot;
void setup() {
  
pinMode(motp1, OUTPUT);
pinMode(motp2, OUTPUT);

Serial.begin(9600);
}

void loop() {
//digitalWrite(speedm, HIGH);     //Se establece como encendido el motor

digitalWrite(motp1, HIGH);      // Establece el sentido de giro del motor 1
digitalWrite(motp2, LOW); 

//Control con potenciometro
int lectura =  analogRead(pot);
int lmap = map(lectura, 0, 1023, 0, 255);

analogWrite(speedm, 0); 

//Lectura del potenciometro
Serial.print("Lectura potenciometro = ");
Serial.println(lmap);
}
