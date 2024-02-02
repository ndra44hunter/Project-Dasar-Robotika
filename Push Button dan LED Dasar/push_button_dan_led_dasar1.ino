const int led1 = 2;
const int button = 3;
int buttonStatus = 0;

void setup () {
  	pinMode(led1,OUTPUT);
  	pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonStatus = digitalRead(button);
  if(buttonStatus==LOW){
    digitalWrite(led1, HIGH);
    delay(2000);
 } else {
   digitalWrite(led1, LOW);
 }    
  
}
