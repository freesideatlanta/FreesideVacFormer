void setup() {
  // goal 350
  // 255 - 460
  // 128 - 336
  
  
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  int heat = 5;
  analogWrite(6, heat);
  analogWrite(11, heat);
  analogWrite(10, heat);
  analogWrite(9, heat);
  
  int pulsems = 100;
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  delay(10000);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(40);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  delay(60);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
}

