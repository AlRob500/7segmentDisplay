#ifndef SegmentDisp_H
#define SegmentDisp_H

#include <Arduino.h>

//Baisic functions with integer intputs and true for displaying the decimal
void pinSet(int pins[8]);
void off();
void displayNum(int x, bool dec);

class Digit {
  private:
    int pins[8];
    int number;
    bool dec;
    //int place;

  public:
    void pinSet(int tempPins[8]);
    void setNum(int x);
    void displayNum();
    void off();
    void toggleDec();
    void setPlace(int x);
};

#endif