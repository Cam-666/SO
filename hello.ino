//sketch : hello.ino

int const LED = 13;
void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600); //baudios
  digitalWrite(LED,LOW);
  Serial.print("Hello richi gei");

}

void loop() {
  // put your main code here, to run repeatedly:

}
