#ifndef Ultrassom_h
#define Ultrassom_h

typedef struct {
  int trigger;
  int echo;
} Ultrassom;

void setupSensor(Ultrassom *s);

long getDistance(Ultrassom *s);

#endif
