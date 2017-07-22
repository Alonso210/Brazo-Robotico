#include <Servo.h>
const int servo1 = 9;
const int servo2 = 11;
const int joyH = A3;
const int joyV = A1;
int posX=90;

int servoVal;

Servo myservo1;
Servo myservo2;

void setup() {
myservo1.attach(servo1);
myservo2.attach(servo2);
Serial.begin(9600);
myservo2.write(posX);

}

void loop() {

servoVal = analogRead(joyH);
servoVal = map(servoVal,0,1023,180,0);
myservo2.write(servoVal);

servoVal = analogRead(joyV);
servoVal = map(servoVal,0,1023,50,120);
myservo1.write(servoVal);
delay(15);

Serial.println(servoVal); 
}
