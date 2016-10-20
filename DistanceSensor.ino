int tim, t1, t2;
void setup() {
  pinMode(15, OUTPUT);
  pinMode(16, INPUT_PULLUP);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(15, HIGH);
  delayMicroseconds(10);
  digitalWrite(15, LOW);
  while(digitalRead(16) == LOW){
    t1 = micros();
  }
  while(digitalRead(16) == HIGH){
    t2 = micros();
  }
  tim = t2 - t1;
  Serial.println(tim);
  delay(1000);
  /* 
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(tim*3*10000000000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  */
}
