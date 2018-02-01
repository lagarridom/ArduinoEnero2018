int led =4;
int in1 =5, in2 = 6;
int pot = 15;
int pwmpot = 0;
int enable =7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pwmpot = map(analogRead(pot), 0, 1023, 0, 255);
  Serial.println(pwmpot);
  if(pwmpot < 127){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
   if(pwmpot == 127){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }
   if(pwmpot > 127){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
  analogWrite(enable, pwmpot);
  analogWrite(led, pwmpot);

  
}
