#include <Servo.h>  

Servo myservo;      //create servo object to control a servo
int potPin=0;       // analog pin used to connect the potentiometer.
int val;            //variable to read the value from analog pin

void setup() {

  myservo.attach(9);    //attaches the servo on pin 9 to the server object
  SSerial.begin(9600);
}

void loop() {

  Serial.println(val);
  val=analogRead(potPin); //reads the value of potentiometer between 0 and 1023
  val=map(val,0,1023,0,180); //scale it to use with servo (value between 0 and 180)
  myservo.write(val);  //sets servo position according to scaled value
            //waits for the servo to respond

}
