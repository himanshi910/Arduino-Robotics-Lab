// C++ code
//
int led1 = 5;
int led2 = 7;
int x = 1;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop()
{
  if (x == 1)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    x = 2;
  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    x = 1;
  }
  delay(1000);
}