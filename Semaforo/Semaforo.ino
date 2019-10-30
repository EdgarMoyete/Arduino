//Moyete
//Edgar Moises Hernandez Gonzalez
//Semaforo con leds
//20-09-2017

//Pines digitales del 13 al 8
const int ledVerde=13;
const int ledAmarillo=12;
const int ledRojo=11;
const int ledVerde2=10;
const int ledAmarillo2=9;
const int ledRojo2=8;

//Declaramos todos los leds como salida
void setup() {
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde2,OUTPUT);
  pinMode(ledAmarillo2,OUTPUT);
  pinMode(ledRojo2,OUTPUT);
}

void loop() {
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledRojo2,HIGH);
  delay(20000);
  digitalWrite(ledVerde,LOW);
  delay(500);
  digitalWrite(ledVerde,HIGH);
  delay(500);
  digitalWrite(ledVerde,LOW);
  delay(500);
  digitalWrite(ledVerde,HIGH);
  delay(500);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarillo,HIGH);
  delay(1000);
  digitalWrite(ledAmarillo,LOW);
  digitalWrite(ledRojo,HIGH);
  digitalWrite(ledRojo2,LOW);
  digitalWrite(ledVerde2,HIGH);
  delay(20000);
  digitalWrite(ledVerde2,LOW);
  delay(500);
  digitalWrite(ledVerde2,HIGH);
  delay(500);
  digitalWrite(ledVerde2,LOW);
  delay(500);
  digitalWrite(ledVerde2,HIGH);
  delay(500);
  digitalWrite(ledVerde2,LOW);
  digitalWrite(ledAmarillo2,HIGH);
  delay(1000);
  digitalWrite(ledRojo,LOW);
  digitalWrite(ledAmarillo2,LOW);
}
