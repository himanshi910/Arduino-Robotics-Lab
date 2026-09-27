int s1 = 7;
int s2 = 5;
int g = 9;
int y = 10;
int r = 11;

void setup(){
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);

  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
}

void loop(){
  int a = digitalRead(s1);
  int b = digitalRead(s2);
  if (a == HIGH && b == HIGH){
    digitalWrite(g, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(r, LOW);
  }
  else if (a == LOW && b == HIGH){
    digitalWrite(g, LOW);
    digitalWrite(y, LOW);
    digitalWrite(r, HIGH);
  }
  else{
    digitalWrite(g, LOW);
    digitalWrite(y, HIGH);
    digitalWrite(r, LOW);
  }}