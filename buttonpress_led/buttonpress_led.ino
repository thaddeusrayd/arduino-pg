  const int buttonPin = 2; // number of the pushbutton pin
  const int ledPin = 13; // number of the LED pin

  int buttonState = 0;
  
  void setup() {
    pinMode(ledPin, OUTPUT); // initialize LED pin as an output
    pinMode(buttonPin, INPUT); // initialize button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin); // read button state

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
