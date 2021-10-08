#include<Servo.h>
//int relevador = 12;

Servo serv;

void setup() {
  // put your setup code here, to run once:
  serv.attach(12);
  Serial.begin(9600);
  
}
int i;
void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i <180; i++){
    serv.write(i); 
    delay (20);
  }
delay(100);
  for (i = 180; i <0; i--){
    serv.write(i); 
    delay (20);
  }
delay(500);
}

// Ejercicio: activar y/o abrir la ventilacion (cervomotor)
// cuando la temp de un cuarto se encuentre por encima
// de *** como abrir las compuertas ***
