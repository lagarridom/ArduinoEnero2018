  #include <Servo.h>

Servo servoM; //Creacion de un objeto de tipo Servo, incluido en la libreria Servo.h

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servoM.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoM.write(0);
  delay(1000);

  servoM.write(90);
  delay(1000);


  //Servo a pasos 
  for(int i=0; i<90; i++){
    servoM.write(i);
    delay(100);
  }
  for(int i=90; i>=0; i--){
    servoM.write(i);
    delay(100);
  }
}
