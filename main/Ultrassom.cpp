#include <Arduino.h>
#include "Ultrassom.h"

void setupSensor(Ultrassom *s) {
  pinMode(s->trigger, OUTPUT);
  pinMode(s->echo, INPUT);

  digitalWrite(s->trigger, LOW);
}

void trigger(Ultrassom *s) {
    digitalWrite(s->trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(s->trigger, LOW);
}

long getDistance(Ultrassom *s) {
    trigger(s);
    return 340 * pulseIn(s->echo, HIGH) / 1000 / 2;
}
