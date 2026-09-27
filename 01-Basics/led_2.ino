int b = 4;
int a = 3;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  

  Serial.begin(9600);
}

void loop()
{
  int input = Serial.parseInt();

  if (input == 1)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    }
  else if (input == 2)
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);

  }
}