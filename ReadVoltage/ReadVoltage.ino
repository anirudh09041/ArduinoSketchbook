int readPin = A3;
int V2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);  
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  V2 = analogRead(readPin);
  Serial.println(float(V2*5)/1023);
  delay(2000);

}
