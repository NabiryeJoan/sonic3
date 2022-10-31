int RedLed = 9;
int GreenLed = 5;


void setup() {
  // put your setup code here, to run once:
pinMode(RedLed,OUTPUT);
pinMode(GreenLed,OUTPUT);
Serial.begin(9600);

Serial.print("press 1 to switch on the light and 2 to switch off");
}

void loop() {
  // put your main code here, to run repeatedly:
  

if(Serial.available()){
  int input = Serial.parseInt();
  if(input==1){
    digitalWrite(RedLed,HIGH);
  }else if(input==2){
    digitalWrite(RedLed,LOW);
  }
  if(input==3){
    digitalWrite(GreenLed,HIGH); 
  }else if(input==4){
    digitalWrite(GreenLed,LOW);
  }
}
 
//  digitalWrite(9,HIGH);
//  delay(1000);
//  digitalWrite(9,LOW);
//  delay(1000);

}
