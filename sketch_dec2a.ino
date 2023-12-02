const int tranpin = 9 ;
int input = 0 ;
void setup() {
  pinMode(tranpin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available();); {
    input = Serial.read();
    switch(input == 1||input == 2||input == 3){
    case 1 :
      analogWrite(tranpin,85);
    case 2 :
      analogWrite(tranpin,170);
    case 3 :
      analogWrite(tranpin,255);
    }
  }
}
