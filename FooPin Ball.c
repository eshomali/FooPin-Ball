// Developed by eshomali
// http://shomali.us

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

//int val = 0;

void setup()
{
    Serial.begin(9600);
    
    //pinMode(13, OUTPUT);
    //pinMode(12, OUTPUT);
    
    servo1.attach(9);
    servo2.attach(6);
    servo3.attach(5);
    servo4.attach(3);
    
}

void loop()
{
    int POT1 = analogRead(A0);
    int POT2 = analogRead(A1);
    int POT3 = analogRead(A1);
    int POT4 = analogRead(A0);
    
    POT1 = map(POT1, 1023, 0, 0, 179); // 5 to 170 degrees b/c thats the mechanical limitation of servo
    POT2 = map(POT2, 0, 1023, 0, 179);
    POT3 = map(POT3, 1023, 0, 0, 179);
    POT4 = map(POT4, 0, 1023, 0, 179);
    
    //sing(1);
    //sing(1);
    //sing(2);
    
    
    Serial.println(POT1);
    Serial.println(POT2);
    
    servo1.write(POT1);
    delay(25);
    servo2.write(POT4);
    delay(25);
    servo3.write(POT3);
    delay(25);
    servo4.write(POT2);
    delay(25);
    
}

