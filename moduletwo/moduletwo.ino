/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

const int ledPin13 = 13;
const int ledPin12 = 12;
const int ledPin11 = 11;

const int button1 = 2;
const int button2 = 3;
const int button3 = 4;

int button1State = 0;
int button2State = 0;
int button3State = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(button1, INPUT);
  pinMode(ledPin13, OUTPUT);
   
  pinMode(button2, INPUT);
  pinMode(ledPin12, OUTPUT);
  
  pinMode(button3, INPUT);
  pinMode(ledPin11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  button1State = digitalRead(button1);  
  button2State = digitalRead(button2);
  button3State = digitalRead(button3);

  if(button1State == HIGH){
    digitalWrite(ledPin13, HIGH);
  }else{
    digitalWrite(ledPin13, LOW);
  }
  if(button2State == HIGH){
    digitalWrite(ledPin12, HIGH);
  }else{
    digitalWrite(ledPin12, LOW);
  }
  if(button3State == HIGH){
    digitalWrite(ledPin11, HIGH);
  }else{
    digitalWrite(ledPin11, LOW);
  }
}
