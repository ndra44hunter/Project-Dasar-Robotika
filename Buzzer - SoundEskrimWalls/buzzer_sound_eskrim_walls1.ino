#define NOTE_C4 262 // DO
#define NOTE_D4 294 // RE
#define NOTE_E4 330 // MI
#define NOTE_F4 349 // FA
#define NOTE_G4 392 // SOL
#define NOTE_A4 440 // LA
#define NOTE_B4 494 // SI
#define NOTE_C5 523 // DO
//Nada Tinggi
#define NOTE_D5 587 // RE
#define NOTE_B5 755 // SI
#define NOTE_C6 784 // DO




const int pinSpeaker = 9;

void setup(){
  pinMode(pinSpeaker, OUTPUT);
}

void loop() {
  tone(pinSpeaker, NOTE_E4, 600); 
  delay(300);
  tone(pinSpeaker, NOTE_G4, 500);
  delay(400);
  tone(pinSpeaker, NOTE_C4, 500);
  delay(1000);
  
  tone(pinSpeaker, NOTE_A4, 700);
  delay(400);
  tone(pinSpeaker, NOTE_C5, 500);
  delay(400);
  tone(pinSpeaker, NOTE_F4, 600);
  delay(1000);

  tone(pinSpeaker, NOTE_B4, 200);
  delay(200);
  tone(pinSpeaker, NOTE_B4, 200);
  delay(200);
  tone(pinSpeaker, NOTE_C5, 200);
  delay(200);
  tone(pinSpeaker, NOTE_D5, 200);
  delay(200);
  tone(pinSpeaker, NOTE_C5, 200);
  delay(1000);

  noTone(pinSpeaker);
  delay(1000);
}
