const int sensorH1 = 9;
const int ledPin = 2;
int buzzer = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorH1, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int estadoP1 = digitalRead(sensorH1);

  if(estadoP1 == LOW){
    digitalWrite(ledPin, HIGH);
    noTone(buzzer);
  }else{
    digitalWrite(ledPin,LOW);
    tone(buzzer, 600);
  }
}