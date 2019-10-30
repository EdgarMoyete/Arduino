//Moyete
//Edgar Moises Hernandez Gonzalez
//Encender un led con un boton
//21-09-2017

const int led=13;//Pin digital 13
const int btn=12;//Pin digital 12
int estadoBtnAnt;//estado del boton anterior
int salida;//0 o 1 cada vez que cambie el estado del boton
int i;//cuenta de las veces que se ha presionado el boton

void setup() {
  Serial.begin(9600);//Comunicacion serial
  pinMode(led,OUTPUT);//salida
}

void loop() {
  int estadoBtn=digitalRead(btn);//Lectura digital del boton
  if(estadoBtn==HIGH && estadoBtnAnt==LOW){//Si boton cambio de bajo a alto
    salida=1-salida;//Cambia su valor de 0 a 1 cada vez que se presiona el boton
    i++;//cuenta boton
    delay(20);//20 milisegundos
    Serial.print("Cuenta: ");
    Serial.println(i);
  }
  estadoBtnAnt=estadoBtn;//guarda el valor actual del boton
  if(salida==1)
    digitalWrite(led,HIGH);//Encender led 5V
  else
    digitalWrite(led,LOW);//Apagar led 0V
}
