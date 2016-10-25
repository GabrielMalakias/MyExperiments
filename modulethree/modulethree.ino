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
const int buzzerPin10 = 10;

const int button1 = 2;
const int button2 = 3;
const int button3 = 4;

int button1State = 0;
int button2State = 0;
int button3State = 0;



// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(button1, INPUT);4
  pinMode(ledPin13, OUTPUT);
   
  pinMode(button2, INPUT);
  pinMode(ledPin12, OUTPUT);
  
  pinMode(button3, INPUT);
  pinMode(ledPin11, OUTPUT);

  pinMode(buzzerPin10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  button1State = digitalRead(button1);  
  button2State = digitalRead(button2);
  button3State = digitalRead(button3);

  if(button1State && !button2State && !button3State){
    tone(buzzerPin10, 100);
    digitalWrite(ledPin13, HIGH);
  }
  if(button2State && !button1State && !button3State){
    tone(buzzerPin10, 500);
    digitalWrite(ledPin12, HIGH);
  }
  if(button3State && !button2State && !button1State){
    tone(buzzerPin10, 1000);
    digitalWrite(ledPin11, HIGH);
  }

  digitalWrite(ledPin11, LOW);
  digitalWrite(ledPin12, LOW);
  digitalWrite(ledPin13, LOW);
  noTone(buzzerPin10);
}
