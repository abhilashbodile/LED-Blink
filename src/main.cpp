#include <Arduino.h>
#define LED 2

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.print("LED is ON.");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.print("LED is OFF.");
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}