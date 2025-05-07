String receivedMessage;

void setup() {
  Serial.begin(2400);
  Serial1.begin(2400);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  while (Serial1.available() > 0) {
    digitalWrite(LED_BUILTIN, HIGH);  // Visual confirmation of data receipt
    char receivedChar = Serial1.read();
    if (receivedChar == '\n') {
      receivedMessage += receivedChar;  // End message and print at line breaks
      Serial.println(receivedMessage);
      receivedMessage = "";
    } else {
      receivedMessage += receivedChar;
    }
    digitalWrite(LED_BUILTIN, LOW);
  }
}