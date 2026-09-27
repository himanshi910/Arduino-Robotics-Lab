int g = 11;
int y = 9;
int r = 10;

const int pod = A0;
void setup(){
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int value = analogRead(A0);
  if(value <=340){
    int bright = map(value, 0, 340,0, 255);
    analogWrite(g, bright);
    analogWrite(y, 0);
    analogWrite(r, 0);
    Serial.print("value: ");
    Serial.print(value);
    Serial.print(": GREEN: Brightness: ");
    Serial.println(bright);
    
  }
  else if(value >340 && value <= 680){
    int bright = map(value, 341, 680,0, 255);
    analogWrite(y, bright);
    analogWrite(g, 0);
    analogWrite(r, 0);
   Serial.print("value: ");
    Serial.print(value);
    Serial.print(": YELLO: Brightness: ");
    Serial.println(bright);
  }else{
    int bright = map(value, 681, 1023,0, 255);
    analogWrite(r, bright);
    analogWrite(y, 0);
    analogWrite(g, 0);
    Serial.print("value: ");
    Serial.print(value);
    Serial.print(": RED: Brightness: ");
    Serial.println(bright);}