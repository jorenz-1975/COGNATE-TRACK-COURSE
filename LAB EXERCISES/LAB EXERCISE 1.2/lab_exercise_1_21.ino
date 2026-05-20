void setup() {
  // Initialize pins 2 through 12 as outputs
  for (int pin = 2; pin <= 12; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Outward to inward sequence (2→12 → 3→11 → ... →7)
  for (int i = 0; i <= 5; i++) {
    int leftPin = 2 + i;
    int rightPin = 12 - i;
    
    digitalWrite(leftPin, HIGH);
    digitalWrite(rightPin, HIGH);
    delay(500);
    digitalWrite(leftPin, LOW);
    digitalWrite(rightPin, LOW);
  }

  // Inward to outward sequence (7 → 6&8 → ... → 2&12)
  for (int i = 5; i >= 0; i--) {
    int leftPin = 2 + i;
    int rightPin = 12 - i;
    
    digitalWrite(leftPin, HIGH);
    digitalWrite(rightPin, HIGH);
    delay(500);
    digitalWrite(leftPin, LOW);
    digitalWrite(rightPin, LOW);
  }
}