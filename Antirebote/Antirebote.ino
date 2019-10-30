//Moyete
//Edgar Moises Hernandez Gonzalez
//Prender led con boton mejorado
//23-09-2017

const int led=13;//Pin digital 13
const int btn=12;//Pin digital 12
int i;//cuenta las veces que se ha presionado el boton
int estadoBotonAnterior;//almacena temporalmente el estado del boton

boolean antirebote(int pin){
  int tiempoAntirebote=20;//tiempo 20 milisegundos
  int j=0;
  boolean estado;
  boolean estadoAnterior;
  do{
    estado=digitalRead(pin);//estado del boton
    if(estado!=estadoAnterior){//si cambio el estado del boton
      j=0;
      estadoAnterior=estado;//se guarda el estado actual del boton
    }
    else{
      j++;
    }
    delay(1);
  }  
  while(j<tiempoAntirebote);
  return estado;
}

void setup() {
  Serial.begin(9600);//Comunicacion Serial
  pinMode(led,OUTPUT);//salida
}

void loop() {
  int estadoBoton=digitalRead(btn);//leer estado del boton
  if(estadoBoton!=estadoBotonAnterior){//cambio el estado del boton?
    if(antirebote(btn)){//si la funcion antirebote es verdadera
      i++;//incrementa cuenta del boton
      Serial.print("Cuenta: ");
      Serial.println(i);
      if(i%2!=0)//Impar
        digitalWrite(led,HIGH);//Encender
      else
        digitalWrite(led,LOW);//Apagar
    }
  }
  estadoBotonAnterior=estadoBoton;//guarda el estado actual del boton
}
