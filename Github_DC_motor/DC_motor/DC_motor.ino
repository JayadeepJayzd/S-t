int val = 150;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(2,val);
  delay(1000);
  analogWrite(3,1);
  delay(1000);
}
