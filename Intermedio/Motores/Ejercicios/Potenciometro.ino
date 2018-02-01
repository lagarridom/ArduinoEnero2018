int pin_analogico = 0;
int lectura = 0;
int valor_restringido;
int lectura_mapeada;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lectura = analogRead(pin_analogico);
  valor_restringido = constrain(lectura, 200, 400); //Limita los valores 
  lectura_mapeada = map(lectura, 0, 1023, 0, 255);
  Serial.println("Restringida: ");
  Serial.println(valor_restringido); 
  delay(300);
  Serial.println("Mapeada: ");
  Serial.println(lectura_mapeada);
  delay(300); 
  
}
