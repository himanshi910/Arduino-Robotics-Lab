// C++ code
int i1= 5;
int i2= 4;
int i3 =3;
int i4 = 2;
int pod = A0;
int e1= 10;
int e2 = 9;
void setup(){
  pinMode(i1, OUTPUT);
  pinMode(i2, OUTPUT);
  pinMode(i3, OUTPUT);
  pinMode(i4, OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(pod, INPUT);}
void loop(){
  int value = analogRead(A0);
  digitalWrite(i1, HIGH);
  digitalWrite(i2, LOW);
  digitalWrite(i3,HIGH);
  digitalWrite(i4, LOW);
  int speed = map(value, 0, 1023, 0, 255);
  analogWrite(e1, speed);
  analogWrite(e2, speed);
}
    
  