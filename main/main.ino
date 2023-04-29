#include "Ultrassom.h"

#define TRIGGER PIN2
#define ECHO PIN3

Ultrassom sensor = {TRIGGER, ECHO};
long distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  setupSensor(&sensor);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = getDistance(&sensor);

  if (Serial) Serial.println(distance);

  delay(100);
}
