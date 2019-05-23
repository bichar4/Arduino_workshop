#ifndef ARDUBOT
#define ARDUBOT

#include "ConfigFile.h"

#define STOP 0
#define SLOW 100
#define FAST 200

void leftMotorOn(int leftSpeed){
   if(leftSpeed<0){
    leftSpeed = leftSpeed*-1;
    analogWrite(leftPWM,leftSpeed);
    digitalWrite(leftMotorP,LOW);
    digitalWrite(leftMotorM,HIGH);
   }else{
    analogWrite(leftPWM,leftSpeed);
    digitalWrite(leftMotorP,HIGH);
    digitalWrite(leftMotorM,LOW);
   }
}
  
void rightMotorOn(int rightSpeed){
    if(rightSpeed<0){
      rightSpeed = rightSpeed*-1;
      analogWrite(rightPWM,rightSpeed);
      digitalWrite(rightMotorP,LOW);
      digitalWrite(rightMotorM,HIGH);
   }else{
      analogWrite(rightPWM,rightSpeed);
      digitalWrite(rightMotorP,HIGH);
      digitalWrite(rightMotorM,LOW);
   }
    
}

void moveBot(int leftSpeed,int rightSpeed){
  leftMotorOn(leftSpeed);
  rightMotorOn(rightSpeed);  
}

void makeArdubotReady(){
  pinMode(leftMotorP,OUTPUT);
  pinMode(leftMotorM,OUTPUT);
  pinMode(rightMotorP,OUTPUT);
  pinMode(rightMotorM,OUTPUT);
  pinMode(rightPWM,OUTPUT);
  pinMode(leftPWM,OUTPUT);
}

void test(){
   while(1){
     moveBot(FAST,FAST);
     delay(1000);
     moveBot(-SLOW,-SLOW);
     delay(1000);
     moveBot(FAST,STOP);
     delay(1000);
     moveBot(STOP,FAST);
     delay(1000);
     moveBot(-SLOW,SLOW);
     delay(1000);
     moveBot(SLOW,-SLOW);
     delay(1000);
 }
}
  
#endif
