// C++ code
//


//pin ultrasonic
int TRIG = 3;
int ECHO = 4;
long timer;

//pin led
int MERAH = 8;
int KUNING = 9;
int HIJAU = 13;

//pin buzzer
int buzzer = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(MERAH, OUTPUT);
  pinMode(KUNING, OUTPUT);
  pinMode(HIJAU, OUTPUT);
}

void loop()
{
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  int durasi;
  durasi = pulseIn(ECHO, HIGH);
  int jarak;
  jarak = durasi/2*0.0340;
  
  if (jarak < 10){ // jika jarak kurang dari 10
    digitalWrite(MERAH, HIGH); // maka lampu merah akan aktif
    digitalWrite(KUNING, LOW);
    digitalWrite(HIJAU, LOW);
    digitalWrite(buzzer, HIGH); // buzzer aktif
  }
  else if (jarak < 50){ // jika jarak kurang dari 50
    digitalWrite(KUNING, HIGH); // maka lampu kuning akan aktif
    digitalWrite(MERAH, LOW);
    digitalWrite(HIJAU, LOW);
    digitalWrite(buzzer, LOW);
  }
  else{ // jika tidak kurang dari 10, 50 maka:
    digitalWrite(HIJAU, HIGH); // lampu hijau akan aktif
    digitalWrite(KUNING, LOW);
    digitalWrite(MERAH, LOW);
    digitalWrite(buzzer, LOW);
  }
  
  Serial.println(jarak);
  
  
}