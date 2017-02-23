#include<stdlib.h>

// Digital entries
const int digital_13 = 13;

// Analog entries
const int analog_a0 = 0;

// Calc variables
float calc_digital_13;

// Read variables 
int analog_a0_input = 0;

void setup() {
// Set serial baud
  Serial.begin(9600);

// Start pin modes
  pinMode(digital_13, OUTPUT);
}

void loop() {
  String out_0; 
  
  // Reads data
  analog_a0_input = analogRead(analog_a0);
  
  // Writes data
  digitalWrite(digital_13, HIGH);
  
  // Writes serial
  out_0 = output_0(analog_a0_input);
  Serial.println(out_0);

  // Delay
  delay(1000);
}


String output_0(int input) {
  String out = "name:temperature;";
  out += out.concat("value:");
  out += out.concat(input * 0.4887585532);
  return out;
}

