int n;
String msg = "ENTER THE NUMBER OF BLINKS ";
String msg2 = "THE NUMBER OF BLINKS IS: ";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available()==0)
  {
    //do nothing loop
  }

  
  
  n = Serial.parseInt();   //Serial.parseFloat();
  Serial.print(msg2);
  Serial.println(n);
  

  for(int i=0; i<n; i++)
  {
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
  }
delay(2000);

}
