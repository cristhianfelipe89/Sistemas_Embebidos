//tipos de datos:arrays
#include <Arduino.h>
//tipo de datos constantes
#define LED 2// la mejor forma para crear una variable la sintaxis es: #define nombredelaconstante valor, el nombre de la variable en mayus


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);// Acuerdo de velocidad
  int listaAsistencia[4]={1, 2, 3, 4}; //crear e inicializar un array de 4 valores
  int nuevaVariable = listaAsistencia[2];//asignando a una variable, un valor del arreglo
  listaAsistencia[0]= 453;//asignarle a un arreglo un nuevo valor
  nuevaVariable = listaAsistencia[1] + listaAsistencia[3];//Almacena la suma de X[1] y x[3] en la variable nuevaVariable
  nuevaVariable = nuevaVariable + listaAsistencia[3];// Añede en la variable SUMA el valor de X[4]
  Serial.print("El resultado es:");
  Serial.println(nuevaVariable);
  Serial.print("El valor de la posicion [0]:");
  Serial.println(listaAsistencia[0]);


  const int XX = 2;
  const float pi = 3.1415925654;

  
//configuracion de GPIOS
pinMode(LED, OUTPUT);//configuro el GPIO2 como salida


  
}

void loop() {
  //encender y apagar el LED
  digitalWrite(LED, HIGH);//1enceder el LED
  delay(1000);//Esperar un segundo
  digitalWrite(LED, LOW);//apagar el LED
  delay(1000);//Esperar un segundo
}
