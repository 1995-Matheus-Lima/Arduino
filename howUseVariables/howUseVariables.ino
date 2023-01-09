int leds[] = {7, 8};
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(leds[0],OUTPUT);
  pinMode(leds[1],OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(leds[i],HIGH);
  delay(1000);
  digitalWrite(leds[i],LOW);
  if(i == 0){i=1;}
  else{i = 0;}
}
