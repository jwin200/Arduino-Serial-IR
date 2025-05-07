#include "pwm.h"

#define PWM_D5_PIN D5

PwmOut objPWMD5(PWM_D5_PIN);  // Set pin 5 as PWM
String serialMessage = "";

void setup() {
  Serial.begin(2400);
  Serial1.begin(2400);
  pinMode(PWM_D5_PIN, OUTPUT);  
  pinMode(LED_BUILTIN, OUTPUT);
  objPWMD5.begin(38000.0f, 0.5f); // Create 38kHz pulse, 50% duty cycle
}

// Print simple message twice per second
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial1.println("Hi there! This is my final project.");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

