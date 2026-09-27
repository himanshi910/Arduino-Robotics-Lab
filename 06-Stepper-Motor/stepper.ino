int dir =5;
int step = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(dir, OUTPUT);
  pinMode(step, OUTPUT);
  digitalWrite(dir, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(step, HIGH);
  delay(15);
  digitalWrite(step, LOW);
  delay(15);
}
