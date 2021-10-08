int ldr =A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}
float valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(ldr);



  Serial.println("Valor Intensidad: "+String(valor));
}
