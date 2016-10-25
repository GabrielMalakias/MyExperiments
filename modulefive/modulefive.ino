
const int analogZero = 0;
float temperature = 0;
const int digitalTwelve = 12;


void setup() {
  pinMode(digitalTwelve, OUTPUT);
}

void loop() {
  temperature = analogRead(analogZero) * 0.4887585532;
  
  Serial.println(temperature);
  delay(100);
  if(temperature > 25){
    if(temperature > 25){
     tone(digitalTwelve, 1000);
     delay(100);
    }
  }else{
    noTone(digitalTwelve);
  }
}
