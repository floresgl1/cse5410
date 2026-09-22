const int photoPin = 8;
const int ledPin = 13;

void setup()
{
  pinMode(photoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
}

void loop()
{
  boolean Value=digitalRead(photoPin);

  if(Value==HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}