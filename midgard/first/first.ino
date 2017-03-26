#include<stdlib.h>

// Digital entries
const int digital_13 = 13;

// Analog entries
const int analog_a0 = 0;

// Calc variables
float calc_digital_13;

// Read variables 
int analog_a0_input = 0;


  
// Entry delimiter
const char entry_delimiter = '|';

void setup() {
// Set serial baud
  Serial.begin(9600);

// Start pin modes
  pinMode(digital_13, OUTPUT);
}

void loop() {
  String out_0; 
  String incoming;
  
  // Reads data
  analog_a0_input = analogRead(analog_a0);
  
  // Writes data
  digitalWrite(digital_13, HIGH);
  
  // Writes serial
  out_0 = output_0(analog_a0_input);
  Serial.println(out_0);
  
 // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incoming = Serial.readString();
    Serial.println(incoming);
  }

  // Delay
  delay(1000);
}

String output_0(int input) {
  String out = "name:temperature;";
  out += "value:";
  out += input * 0.4887585532;
  out += entry_delimiter;
  return out;
}

String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}

char* string2char(String command){
    if(command.length()!=0){
        char *p = const_cast<char*>(command.c_str());
        return p;
    }
}
