const int readPin = A0;
const float voltageThreshold = 50; // Start logging if voltage drops below 
const int triggerDelay = 10;         // ms between checks
const int sampleDelay = 10;          // ms between logged readings
const unsigned long logDuration = 5000; // ms to log after discharge begins

void setup() {
  Serial.begin(9600);
  Serial.println("Time(ms),Voltage(V)");
  Serial.println("Waiting for discharge to begin...");
}

void loop() {
  // Wait until voltage drops below threshold (discharge starts)
  while (true) {
    int raw = analogRead(readPin);
    float voltage = raw * 5.0 / 1023.0;
    if (voltage < voltageThreshold) {
      break;
    }
    delay(triggerDelay);
  }

  // Start logging
  unsigned long startTime = millis();
  while (millis() - startTime < logDuration) {
    unsigned long t = millis() - startTime;
    int raw = analogRead(readPin);
    float voltage = raw * 5.0 / 1023.0; //rule for calculating voltage from analog

    Serial.print(t);
    Serial.print(",");
    Serial.println(voltage);

    delay(sampleDelay);
  }

  Serial.println("Logging complete. Reset Arduino to record again.");
  while (true); // Stop further looping
}