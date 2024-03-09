#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  150 
#define SERVOMAX  600 
#define USMIN  600
#define USMAX  2400
#define SERVO_FREQ 50 

// Ubah nilai ini sesuai dengan jumlah servo yang Anda miliki
const uint8_t NUM_SERVOS = 12;

void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");

  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  
  delay(10);
}

void loop() {
  for (uint8_t servonum = 0; servonum < NUM_SERVOS; servonum++) {
    Serial.print("Testing servo on channel: ");
    
    Serial.println(servonum);

    for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
      pwm.setPWM(servonum, 0, pulselen);
    }

    delay(500);

    for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
      pwm.setPWM(servonum, 0, pulselen);
    }

    delay(500);
  }
}
