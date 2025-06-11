const int ledPin1 = 9;
const int buttonPin1 = 3;
const int ledPin2 = 8;
const int buttonPin2 = 2;
  
int buttonState1 = 0;
int previousButtonState1 = 0;
int ledState1 = LOW;

int buttonState2 = 0;
int previousButtonState2 = 0;
int ledState2 = LOW;

void setup() {
 pinMode(ledPin1, OUTPUT);  
 pinMode(buttonPin1, INPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(buttonPin2, INPUT);

 Serial.begin(9600);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 != previousButtonState1) {
    if (buttonState1 == HIGH) {
      ledState1 = !ledState1;
      digitalWrite(ledPin1, ledState1);
      }
    delay(50);
    }
  
  previousButtonState1 = buttonState1;

  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 != previousButtonState2 && buttonState2 == HIGH) {
      ledState2 = !ledState2;
      digitalWrite(ledPin2, ledState2);
      
    delay(50);
    }
  
  previousButtonState2 = buttonState2;
}