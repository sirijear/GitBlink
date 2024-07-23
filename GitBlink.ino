const int ledPin = 13;
const int delayTime = 500;

unsigned long previousMillis;
uint8_t ledState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (millis() - previousMillis >= delayTime) {
    ledState = 1 - ledState;
    digitalWrite(ledPin, ledState);
  }
}

