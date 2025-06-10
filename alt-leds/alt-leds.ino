const int ledPin1 = 8;
const int ledPin2 = 9;
const int ledPin3 = 10;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin1, HIGH);
  delay(500);
  digitalWrite(ledPin1, LOW);

  digitalWrite(ledPin2, HIGH);
  delay(500);
  digitalWrite(ledPin2, LOW);

  digitalWrite(ledPin3, HIGH);
  delay(500);
  digitalWrite(ledPin3, LOW);
}
