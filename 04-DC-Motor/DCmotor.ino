int en3 = 6;
int in1 = 3;
int in2 = 4;
int pod = A2;
int value, speed;
void setup(){
  pinMode(en3, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pod, INPUT);
}
void loop(){
  value = analogRead(pod);
  speed = map(value, 0, 1023, 0, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(en3, speed);
}