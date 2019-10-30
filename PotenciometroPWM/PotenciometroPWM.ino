//Moyete
//Edgar Moises Hernandez Gonzalez
//Controlar el brillo de un led con un potenciometro
//21-09-2017

const int led=13;//Pin digital 13
const int pot=A0;//Pin analogico A0

void setup() {
  Serial.begin(9600);//Comunicacion serial
  pinMode(led,OUTPUT);//salida
}

void loop() {
  int brillo=analogRead(pot)/4;//leer senal analogica, se divide porque 1024/4=256
  analogWrite(led,brillo);//enviar pulso analogico a led para intensidad de brillo 
  Serial.print("Brillo: ");
  Serial.println(brillo);
  delay(100);//100 milisegundos, Comentar si desea graficar
}
