//tipos de datos:arrays
#include <Arduino.h>

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


  const int LED = 2;
  const float pi = 3.1415925654;
}

void loop() {
  // put your main code here, to run repeatedly:
}
