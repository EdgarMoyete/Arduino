//Moyete
//Edgar Moises Hernandez Gonzalez
//Mapear 6 velocidades de un motor
//20-09-2017

const int motor=13;//Pin digital 13
char caracter;//almacena caracter ingresado

void setup() {
  Serial.begin(9600);//Comunicacion serial
}

void loop() {
  if(Serial.available())//Si se escribe
    caracter=Serial.read();//caracter lee lo que se escribe
  if(caracter>='0' && caracter<='5'){
    int velocidad=map(caracter,'0','5',0,255);//mapeamos velocidad de 0 a 255
    analogWrite(motor,velocidad);//enviar valor analogico velocidad a motor
    Serial.print("Caracter: ");
    Serial.println(caracter);
    Serial.print("Velocidad: ");
    Serial.println(velocidad);
  }
  else
    Serial.println("Velocidad Invalida");
  delay(100);//100 milisegundos
}
