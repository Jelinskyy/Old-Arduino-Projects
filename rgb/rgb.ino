int bP=11;
int gP=10;
int rP=9;
int delayTime=5;

void setup() {
  pinMode(rP, OUTPUT);
  pinMode(bP, OUTPUT);
  pinMode(gP, OUTPUT);
}

void loop() {
  //1
  for(int i=0; i<255; i++)
  {
    setColor(255,i,0);
    delay(delayTime);
  }
  //2
  for(int i=0; i<255; i++)
  {
    setColor(255-i,255,0);
    delay(delayTime);
  }
  //3
  for(int i=0; i<255; i++)
  {
    setColor(0,255,i);
    delay(delayTime);
  }
  //4
  for(int i=0; i<255; i++)
  {
    setColor(0,255-i,255);
    delay(delayTime);
  }
  //5
  for(int i=0; i<255; i++)
  {
    setColor(i,0,255);
    delay(delayTime);
  }
  //6
  for(int i=0; i<255; i++)
  {
    setColor(255,0,255-i);
    delay(delayTime);
  }
}
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
  red=255-red;
  green=255-green;
  blue=255-blue;
  #endif
  analogWrite(rP, red);
  analogWrite(bP, blue);
  analogWrite(gP, green);
}
