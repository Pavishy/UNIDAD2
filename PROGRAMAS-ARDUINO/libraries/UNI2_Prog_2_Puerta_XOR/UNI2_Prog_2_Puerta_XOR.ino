int led = 11;
int res;
byte state = 0;
String arr[] = {"primero", "segundo"};
byte arrnums[] = {0, 0};
int sw =[10,9];

void setup() {
  //
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  //

  if (state == 4)
  {
    state = 0;  if (arrnums[0] == 1 and arrnums[1] == 1) {
      res = 1;
    }
    else {
      res = 0;
    }

    Serial.println();
    digitalWrite(led, res);

  }
  else if (state % 2 == 0)
  {
    Serial.print("Inserta el " + arr[state / 2] + " valor: ");
    state++;
  }
  else if (Serial.available() > 0)
  {
    arrnums[state / 2] = (byte) Serial.readString().toInt();
    state++;
    Serial.println();
  }


  delay (100);
}
