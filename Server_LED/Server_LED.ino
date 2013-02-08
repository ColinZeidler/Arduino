/*
RGB testing - Colin Zeidler
*/
 
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  setColor(255,255,255);
}
 
void loop()
{
  if (Serial.available()) {
    char ch = Serial.read();
    if (ch == 'T' || ch =='t') {
      setColor(255,128,255);
    }
    else if (ch =='F' || ch =='f') {
      setColor(128,255,255);
    }
  }
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
