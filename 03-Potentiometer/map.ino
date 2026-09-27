int pod = A0;
float fmap(float value, float a, float b, float c,float d){
  return (((d-c)/(b-a))*value);}
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(pod);
  float x = fmap(value, 0.0, 1023.0, 0.0, 100.0);
  Serial.println(x);
  delay(100);
}