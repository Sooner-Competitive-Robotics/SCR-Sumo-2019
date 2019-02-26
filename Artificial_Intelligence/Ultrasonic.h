#ifndef ULTRASONIC_H
#define ULTRASONIC_H

class Ultrasonic {
  private:
    int dataPin;

  public:
    Ultrasonic();
    Ultrasonic(int dataPin);
    double getRawDistance();
};

#endif
