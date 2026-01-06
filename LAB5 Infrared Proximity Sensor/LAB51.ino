/*LAB5.1*/
//https://app.cirkitdesigner.com/project/db9a64b4-4ce6-4f0e-9342-db2bb3c6bfef



const int sensorPin = 8;  // Pin connected to the sensor's OUT pin
const int ledPin = 13;    // Pin connected to the onboard LED

void setup() {
  pinMode(sensorPin, INPUT);  // Set the sensor pin as input
  pinMode(ledPin, OUTPUT);    // Set the LED pin as output
  Serial.begin(9600);         // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read the sensor's output

  if (sensorValue == HIGH) {
    // Object detected
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Object detected!");
  } else {
    // No object detected
    digitalWrite(ledPin, LOW);   // Turn off the LED
    Serial.println("No object detected.");
  }

  delay(100);  // Small delay for stability
}
