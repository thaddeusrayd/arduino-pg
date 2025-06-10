const int ledPin = 13;
const int photoresistorPin = A0;

int lightLevel = 0;
int threshold = 800;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // serial communication for debugging -- 
}                     // 9600 refers to bits per second (kind of a standard value I think?)
                      // ardunios have at least one serial port. If this one had several, I could write
                        // several lines with different begin() functions

void loop() {
  lightLevel = analogRead(photoresistorPin); // analogRead() -- native function; reads value from input pin
  Serial.println(lightLevel); // println() prints data to serial port. Second optional argument is format
                              // println() differs from print() in that it adds a newline character after output
  if (lightLevel < threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100); // recommended for stabilizing readings
}
