#include "Arduino.h"

void move(int lForce, int rForce)
{
    if(lForce == 1 && rForce == 1)
    {
      // Forward
    }
    else if(lForce == 1 && rForce == 0)
    {
      // Right
    }
    else if(lForce == 1 && rForce == -1)
    {
      // Sharp right
    }
    else if(lForce == 0 && rForce == 1)
    {
      // Left
    }
    else if(lForce == -1 && rForce == 1)
    {
      // Sharp left
    }
    else if(lForce == 0 && rForce == 0)
    {
      // Stop
    }
    else if(lForce == -1 && rForce == -1)
    {
      // Backwards
    }
    else
    {
      //Throw an error
    }
}
