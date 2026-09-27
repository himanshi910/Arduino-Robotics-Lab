int led =9;
int trig = 10;
int echo = 11;
int duration;
int distance;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}
          

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(8);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (0.034)*duration/2;
  int b = map(distance, 20, 200, 0, 255);

  analogWrite(led, b);
  Serial.println(distance);
      
  
}