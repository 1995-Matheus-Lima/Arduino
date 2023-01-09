int leds[] = {8, 7, 6, 5};
char estados[] = "ABCDEFGHIJKLMNOP"; 
int  indexEstado= 0;
void contador(char estado){
    if(estado == 'A'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'B'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'C'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'D'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'E'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'F'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'G'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'H'){
       digitalWrite(leds[0],LOW);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'I'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'J'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'K'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'L'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],LOW);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'M'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'N'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],LOW);
       digitalWrite(leds[3],HIGH);
      }
    if(estado == 'O'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],LOW);
      }
    if(estado == 'P'){
       digitalWrite(leds[0],HIGH);
       digitalWrite(leds[1],HIGH);
       digitalWrite(leds[2],HIGH);
       digitalWrite(leds[3],HIGH);
      }
    indexEstado++;
    if(indexEstado == 16){
      indexEstado = 0;
      }
    
      
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(leds[0],OUTPUT);
  pinMode(leds[1],OUTPUT);
  pinMode(leds[2],OUTPUT);
  pinMode(leds[3],OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  contador(estados[indexEstado]);
  delay(1000);
  
}
