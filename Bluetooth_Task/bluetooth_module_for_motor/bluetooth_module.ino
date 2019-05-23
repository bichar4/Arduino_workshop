#include "Ardubot.h"
#include "ConfigFile.h"
#include "SuperArdubot.h"

char data;                //Variable for storing received data
void setup() 
{
  Serial.begin(115200);         //Sets the data rate in bits per second (baud) for serial data transmission
  makeArdubotReady();     //Sets digital pin 13 as output pin
}
void loop()
{
if(Serial.available() > 0)  // Send data only when you receive data:
{
  data = Serial.read();      //Read the incoming data and store it into variable data
  Serial.print(data);        //Print Value inside data in Serial monitor
  Serial.print("\n");        //New line 


  if(data=='F')
  {
    moveForward();
    }

  else if(data=='B')
   {
     moveBackward();
     }
  else if(data=='L')
  {
    turnLeft();
    delay(300);
    moveForward();
    
    }
  else if(data=='R')
  {
    turnRight();
    delay(300);
    moveForward();
    
    }

   else if(data=='S')
   {
    brake();
    }

}               
}
