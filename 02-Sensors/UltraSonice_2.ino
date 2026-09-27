int trig = 7;
int echo = 6;
int pod = A0;
int g = 8;
int y = 11;
int r = 12;
int duration;
int distance;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(pod);
  int Wdistance= map(value, 0, 1023, 10, 50);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034/2;
  if (distance > Wdistance){
    digitalWrite(g, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(r, LOW);
    Serial.print("Status: SAFE");
  }
  else if (distance > Wdistance / 2) {
    digitalWrite(g, LOW);
    digitalWrite(y, HIGH);
    digitalWrite(r, LOW);
    Serial.print("Status: GETTING CLOSE");
  }
  else{
    digitalWrite(g, LOW);
    digitalWrite(y, LOW);
    digitalWrite(r, HIGH);
    Serial.print("Status: DANGER");
  }
  Serial.print("  Distance: ");
  Serial.print(distance);
  Serial.print("  Warning Distance: ");
  Serial.println(Wdistance);
  delay(500);}