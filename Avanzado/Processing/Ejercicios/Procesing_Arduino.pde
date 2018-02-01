import processing.serial.*;
Serial puertito;             
float pow, pow1;

void setup () {
  size(400, 300);
  printArray(Serial.list());                            //nos imprime la listade puertos de comunicacion disponibles
  puertito = new Serial(this, Serial.list()[0], 9600);  //inicializa nuestra comunicacion en el dado, a un baudrate de 9600
  puertito.bufferUntil('\n');                           //activa nuestro serialEvent() cada que haya un salto de linea '\n'
  puertito.write('0');                                  //manda un primer byte al arduino para activar el SerialEvent en el arduino
}


void draw () {
  clear();                                      //limpia nuestra pantalla
  rect(0,height-pow,width/2,pow);               //empiezan los rectangulos desde height-pow hasta abajo de la ventana
  rect(width/2,height-pow1,width/2,pow1);
} 

void serialEvent (Serial puertito) {                            //SOLO se activa cuando arduino nos mande informacion
  String val = puertito.readStringUntil(' ');                   // TERMINANDO en un salto de linea
  if (val != null) pow = map(float(val), 0, 1023, 0, height);  //Guardamos los valores leidos que nos manda arduino 
                                                               // dentro de pow y pow1
  val = myPort.readStringUntil(' ');
  if (val != null) pow1 = map(float(val), 0, 1023, 0, height);  
  
  println( str(pow) + ' ' + str(pow1) );                //convierte pow y pow1 en strings y eh imprime todo junto
  
  if(mousePressed == true) puertito.write('1');         //Le mandamos datos al arduino, esto le indica al arduino que hemos 
  else puertito.write('0');                             // terminado de leer la informacion y le mandamos info de regreso     
}