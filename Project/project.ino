class Machine {
  int en = 5;
  int in1 = 2;
  int in2 = 3;
  int sw = 10;
  int trig = 9;
  int echo = 11;
  int green = 8;
  int red = 12;
  int yello = 6;
  long duration;
  int distance;

public:

  void start() {
    pinMode(en, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(sw, INPUT);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
    pinMode(yello, OUTPUT);
  Serial.begin(9600);}

  void run() {

    if(digitalRead(sw) == HIGH) {

      digitalWrite(trig, LOW);
      delayMicroseconds(2);
 	  digitalWrite(trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(trig, LOW);
      duration = pulseIn(echo, HIGH);
      distance = 0.034 * duration / 2;
      Serial.print("Distance: ");
      Serial.print(distance);
      Serial.println(" cm");

      if(distance >= 50) {

        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        analogWrite(en, 255);
        digitalWrite(green, HIGH);
        digitalWrite(red, LOW);
        digitalWrite(yello, LOW);
      }
      else if(distance >= 30 && distance < 50) {

        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        analogWrite(en, 255);
        digitalWrite(green, LOW);
        digitalWrite(red, LOW);
        digitalWrite(yello, HIGH);
      }
      else {

        digitalWrite(green, LOW);
        digitalWrite(red, HIGH);
        digitalWrite(yello, LOW);
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        analogWrite(en, 0);
      }
    }
    else {

      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(en, 0);
      digitalWrite(green, LOW);
      digitalWrite(red, LOW);
      digitalWrite(yello, LOW);
    }}
};

Machine machine;

void setup() {
  machine.start();
}

void loop() {
  machine.run();
}