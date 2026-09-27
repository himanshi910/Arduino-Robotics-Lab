int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  Serial.begin(9600);

  Serial.println("Enter a number from 0 to 15:");
}

void loop()
{
  if (Serial.available() > 0)
  {
    int a = Serial.parseInt();

    if (a >= 0 && a <= 15)
    {
      int bit1, bit2, bit3, bit4;

      if (a >= 8)
      {
        bit1 = 1;
        a = a - 8;
      }
      else
      {
        bit1 = 0;
      }

      if (a >= 4)
      {
        bit2 = 1;
        a = a - 4;
      }
      else
      {
        bit2 = 0;
      }

      if (a >= 2)
      {
        bit3 = 1;
        a = a - 2;
      }
      else
      {
        bit3 = 0;
      }

      if (a >= 1)
      {
        bit4 = 1;
        a = a - 1;
      }
      else
      {
        bit4 = 0;
      }

      digitalWrite(led1, bit1);
      digitalWrite(led2, bit2);
      digitalWrite(led3, bit3);
      digitalWrite(led4, bit4);

      Serial.print("Binary: ");
      Serial.print(bit1);
      Serial.print(bit2);
      Serial.print(bit3);
      Serial.println(bit4);
    }
    else
    {
      Serial.println("Enter a number from 0 to 15.");
    }
  }
}