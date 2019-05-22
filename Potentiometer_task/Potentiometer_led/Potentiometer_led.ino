int potPin=2;       //select input pin for potentiometer in analog
int ledPin = 13;   // select the pin for the LED
int val = 0;       //store the value coming from sensor.

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  Serial.println(val);
val=analogRead(potPin);
digitalWrite(ledPin, HIGH);   // turn the led on
delay(val);                  //program stops here for sometime
digitalWrite(ledPin, LOW);   // turn the led off.
delay(val);                 //program stops here for sometime
}
