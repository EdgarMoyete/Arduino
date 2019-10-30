//Moyete
//Edgar Moises Hernandez Gonzalez
//Leer valor analogico de un potenciometro y enviar a Matlab por el puerto serial
//23-09-2017

const int potenciometro=A0;//Pin digital A0

void setup() {  
  Serial.begin(9600);//Comunicacion serial
}

void loop() {
  int voltaje=analogRead(potenciometro);//Leer voltaje
  Serial.println(voltaje);
  delay(100);//100 milisegundos
}
