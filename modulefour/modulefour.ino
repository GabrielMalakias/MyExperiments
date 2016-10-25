const int temperatureSensor = 0;
float temperature = 0;

void setup() {
  Serial.begin(9600);
}

void loop() { 
   temperature = analogRead(temperatureSensor) * 0.4887585532;
   Serial.print("Temperature: ");
   Serial.print(temperature);
   Serial.println("ºC");
   delay(2000);
}
