// Example by IOXhop.com

#include <Time.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3
unsigned long previousMillis;
bool showdot = false;

TM1637Display display(CLK, DIO);

void setup()
{
   setTime(0); 
}

void loop()
{
  int minuteNum = minute();
  int secondNum = second();
  display.write(minuteNum/10, 0);
  display.write(minuteNum%10, 1);
  display.write(secondNum/10, 2);
  display.write(secondNum%10, 3);
  
  unsigned long currentMillis = millis();
  if (currentMillis-previousMillis>500){
    previousMillis = currentMillis;
    display.dotShow(showdot=!showdot);
  }
}