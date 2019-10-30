//Moyete
//Edgar Moises Hernandez Gonzalez
//Hola mundo en arduino, parpadear un led
//20-09-2017

const int led=13;//Pin digital 13

void setup() {
  pinMode(led,OUTPUT);//salida
}

void loop() {
  digitalWrite(led,HIGH);//Encendemos led con pulso digital HIGH=5V
  delay(5000);//5 segundos
  digitalWrite(led,LOW);//Apagamos led con pulso digital LOW=0V
  delay(1000);//1 segundo
}
