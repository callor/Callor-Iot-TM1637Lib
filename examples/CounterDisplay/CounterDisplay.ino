// Example by IOXhop.com

#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3

TM1637Display display(CLK, DIO);

int i;

void setup()
{
}

void loop()
{
  display.print(i);
  delay(100);
  i++;
}
