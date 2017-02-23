#include <ArduinoJson.h>

const int analogZero = 0;
float temperature = 0;
const int digitalTwelve = 12;
int statusBarIndicator = 0;

void setup() {
  pinMode(digitalTwelve, OUTPUT);
}

void loop() {
  temperature = analogRead(analogZero) * 0.4887585532;
  
  StaticJsonBuffer<200> jsonBuffer;

  JsonObject& root = jsonBuffer.createObject();
  root["temperature"] = temperature;
  
  Serial.println(root);
  delay(100);


  statusBarIndicator = temperature - 20;

  for(int i = 2; i < 12; i ++){
    if(statusBarIndicator < i) {
      digitalWrite(i, HIGH);
    } else {
      if (statusBarIndicator == i) {
        digitalWrite(i, LOW);
      }
    }
  }
  
  if(temperature > 25){
     tone(digitalTwelve, 1000);
     delay(100);
  }else{
    noTone(digitalTwelve);
  }
}
