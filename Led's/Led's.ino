void setup() {
  for(int i=7; i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  int t=100;
  for(int i=0; i<4; i++)
  {
    digitalWrite(13-i, HIGH);
    digitalWrite(7+i, HIGH);
    delay(t);
    digitalWrite(13-i, LOW);
    digitalWrite(7+i, LOW);
  }
  for(int i=0; i<2; i++)
  {
    digitalWrite(9-i, HIGH);
    digitalWrite(11+i, HIGH);
    delay(t);
    digitalWrite(9-i, LOW);
    digitalWrite(11+i, LOW);
  }
}
