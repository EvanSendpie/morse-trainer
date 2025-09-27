const int pushButton = 2;
const int buzzeRP = 8;
const int LED = 10;

void setup() {
  pinMode(pushButton, INPUT_PULLUP);
  pinMode(buzzeRP, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);

  if (buttonState == LOW) { 
    digitalWrite(buzzeRP, HIGH);
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(buzzeRP, LOW);
    digitalWrite(LED, LOW);
  }
}
