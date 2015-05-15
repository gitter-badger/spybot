#include "Arduino.h"

void catchFatalError()
{
    while(true)
    {
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(1000);
    }
}
