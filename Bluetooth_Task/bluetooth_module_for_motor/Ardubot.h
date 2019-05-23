/*
  ArduBot

  These libraries are created for the workshop activities to teach computation 
  and basic programming with use of Ardubot

  Author: Bichar Dip Shrestha Gurung
  Company: Future-Lab Nepal

  http://www.arduino.cc/en/Tutorial/Fade
*/

#ifndef ARDUBOT
#define ARDUBOT

#include "ConfigFile.h"

//turns both of the motor forward
void moveForward(){
  analogWrite(rightPWM,leftSpeed);
  analogWrite(leftPWM,rightSpeed);
  digitalWrite(leftMotorP,HIGH);
  digitalWrite(leftMotorM,LOW);
  digitalWrite(rightMotorP,HIGH);
  digitalWrite(rightMotorM,LOW); 
}
//turns both of the motor backward 
void moveBackward(){
  analogWrite(rightPWM,leftSpeed);
  analogWrite(leftPWM,rightSpeed);
  digitalWrite(leftMotorP,LOW);
  digitalWrite(leftMotorM,HIGH);
  digitalWrite(rightMotorP,LOW);
  digitalWrite(rightMotorM,HIGH); 
}
//turns the leftMotor on
void moveRightMotor(){
  analogWrite(rightPWM,leftSpeed);
  analogWrite(leftPWM,rightSpeed);
  digitalWrite(leftMotorP,LOW);
  digitalWrite(leftMotorM,LOW);
  digitalWrite(rightMotorP,HIGH);
  digitalWrite(rightMotorM,LOW); 
}
//turns the right motor on 
void moveLeftMotor(){
  analogWrite(rightPWM,leftSpeed);
  analogWrite(leftPWM,rightSpeed);
  digitalWrite(leftMotorP,HIGH);
  digitalWrite(leftMotorM,LOW);
  digitalWrite(rightMotorP,LOW);
  digitalWrite(rightMotorM,LOW); 
}

//apply brakes to the robot 
void brake(){
  analogWrite(rightPWM,0);
  analogWrite(leftPWM,0);
}
void turnRight(){
  analogWrite(rightPWM,leftSpeed-30);
  analogWrite(leftPWM,rightSpeed-30);
  digitalWrite(leftMotorP,HIGH);
  digitalWrite(leftMotorM,LOW);
  digitalWrite(rightMotorP,LOW);
  digitalWrite(rightMotorM,HIGH); 
}

void turnLeft(){
  analogWrite(rightPWM,leftSpeed-30);
  analogWrite(leftPWM,rightSpeed-30);
  digitalWrite(leftMotorP,LOW);
  digitalWrite(leftMotorM,HIGH);
  digitalWrite(rightMotorP,HIGH);
  digitalWrite(rightMotorM,LOW); 
}
void dance(){
  turnLeft();
}
void makeArdubotReady(){
  pinMode(leftMotorP,OUTPUT);
  pinMode(leftMotorM,OUTPUT);
  pinMode(rightMotorP,OUTPUT);
  pinMode(rightMotorM,OUTPUT);
  pinMode(rightPWM,OUTPUT);
  pinMode(leftPWM,OUTPUT);
}

void testBot(){
  while(1){
    moveForward();
    delay(1000);
    moveBackward();
    delay(1000);
    moveLeftMotor();
    delay(1000);
    moveRightMotor();
    delay(1000);
    turnLeft();
    delay(1000);
    turnRight();
    delay(1000);
  }
  
}

#endif

