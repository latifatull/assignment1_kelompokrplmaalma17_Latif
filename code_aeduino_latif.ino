int pin = 12;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(analogRead(pin));
  delay(1000);
  // put your main code here, to run repeatedly:

}
