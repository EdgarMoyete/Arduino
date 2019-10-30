//Moyete
//Edgar Moises Hernandez Gonzalez
//Controlar la intensidad del brillo de un led con PWM
//20-09-2017

const int led=13;//Pin digital 13

void setup() {
  pinMode(led,OUTPUT);//led como salida
}

void loop() {
  for(int i=0;i<256;i++){
    analogWrite(led,i);//pulso analogico en el led incrementa de 0 a 255
    delay(20);//20 milisegundos
  }
  for(int i=255;i>-1;i--){
    analogWrite(led,i);//pulso analogico en el led decrementa de 255 a 0
    delay(20);//20 milisegundos
  }
}
