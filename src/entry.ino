int pin_status = 13;
int pin_weapon1 = 12;

void setup()
{
  bool hasFailed = false;
  // Initialize pins
  pinMode(pin_status, OUTPUT);
  pinMode(pin_weapon1, OUTPUT);
  // Turn on status light
  digitalWrite(pin_status, HIGH);
  // Initialize vars
  // Apply power to camera
  // Turn off status light
  digitalWrite(pin_status, LOW);
  if(hasFailed)
  {
    while(true)
    {
      delay(1000);
      digitalWrite(pin_status, HIGH);
      delay(1000);
      digitalWrite(pin_status, LOW);
    }
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
}
