//throught analogWrite we can select value betweeen low and high
//pins having ~ sign before them can be used for analog write

int greenLed = 9;
int brightness = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(greenLed,brightness);
}
