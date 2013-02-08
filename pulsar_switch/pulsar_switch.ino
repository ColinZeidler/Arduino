/*
RGB pulsar - Colin Zeidler
*/
int switchPin = 8;

int redPin = 3;
int greenPin = 5;
int bluePin = 6;

int redC = 0;
int greenC = 255;
int blueC = 255;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  //0 is on, 255 is off
  setColor(redC, greenC, blueC);  // red
  while(greenC > 0) {
    delay(100);
    setColor(redC, greenC, blueC);
    greenC -= 5;
  }
  while(redC < 255) {
    delay(100);
    setColor(redC, greenC, blueC);
    redC += 5;
  }
  //reC = 255, greenC = 0, blueC = 255
  while(greenC < 255) {
    delay(100);
    setColor(redC, greenC, blueC);
    greenC += 5;
    blueC -= 5;
  }
  //redC = 255, greenC = 255, blueC = 0
  while(redC > 0) {
    delay(100);
    setColor(redC, greenC, blueC);
    redC -= 5;
  }
  //redC = 0, greenC = 255, blueC = 0
  while(blueC < 255) {
    delay(100);
    setColor(redC, greenC, blueC);
    blueC += 5;
  }
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
