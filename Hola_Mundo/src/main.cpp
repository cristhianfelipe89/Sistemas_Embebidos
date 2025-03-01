// Documentación
#include <Arduino.h>

// put function declarations here:

//tipos de Datos Globales
byte variablePrueba = 34;
int conteo = 0;
long conteoGranos;
float temperatura = 25.8;
unsigned int rpmMotor = 3600;
unsigned long  vasriabletest = 51000;
word rpmmotor = 0;
boolean variableprueba = true;
char letra = 'a';
unsigned char tastchar = 'a';


void setup()
{
  // Acuerdo de velocidad
  Serial.begin(115200);
  Serial.print("La temperatura es:");
  Serial.println(temperatura);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
