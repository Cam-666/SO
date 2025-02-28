float temp;
int sensorValue;
int const LED1 = 13;
int const MOT = 12;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(MOT, OUTPUT);
  Serial.begin(9600);
  Serial.println("###Temperature monitor###");
}

void loop() {
  sensorValue = analogRead(A0);
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);
  delay(2000);
  temp = (sensorValue * (500.0 / 1023.0)) - 50.0;
  
  Serial.print("Temp value: ");
  Serial.println(temp);
  delay(2000);
  if (temp < 5) {
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    delay(500);
    digitalWrite(MOT, LOW);
  } else if (temp >= 6 && temp <= 25) {
    digitalWrite(LED1, LOW);
    digitalWrite(MOT, LOW); 
  } else if (temp > 25) {
    digitalWrite(LED1, HIGH);
    digitalWrite(MOT, HIGH); 
  }
  
  delay(2000);
}
