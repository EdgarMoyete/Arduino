//Moyete
//Edgar Moises Hernandez Gonzalez
//Encender un led por bluetooth
//20-09-2017

const int led=13;//Pin digital 13
char caracter;//almacena caracter ingresado

void setup(){
  Serial.begin(9600);//Comunicacion serial
  pinMode(led,OUTPUT);//led como salida
}

void loop(){
  if(Serial.available()>0)//Si se escribe
    caracter = Serial.read();//leer lo que se escribe
  if (caracter =='a')
    digitalWrite(led,HIGH);//Encender con pulso digital 5V
  if(caracter=='b')
    digitalWrite(led,LOW);//Apagar con pulso digital 0V
}
