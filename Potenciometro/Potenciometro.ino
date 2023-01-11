
void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  
}

void loop() {
  digitalWrite(7,HIGH);
  delay(analogRead(A0));
  digitalWrite(7,LOW);
  delay(analogRead(A0));
}
