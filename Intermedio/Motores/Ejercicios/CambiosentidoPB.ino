 int motp1 = 7;
int motp2 = 6;
int speedm = 5;
int pb = 4;
int val = 0;

int pot;
void setup() {
  
pinMode(motp1, OUTPUT);
pinMode(motp2, OUTPUT);
pinMode(speedm, OUTPUT);
pinMode(pb, INPUT);

Serial.begin(9600);
}

void loop() {
  int val = digitalRead(pb);

  if(val == HIGH){
    digitalWrite(motp1, HIGH);
    digitalWrite(motp2, LOW);
  }else{
    digitalWrite(motp1, LOW);
    digitalWrite(motp2, HIGH);
  }
  
  digitalWrite(speedm, HIGH);


}
