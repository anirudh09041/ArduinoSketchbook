
int myVolt = A2;
int readVal;
int V2;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myVolt);
  V2 = float(5*readVal)/1023;
  Serial.println(V2);
  delay(1000);
}
