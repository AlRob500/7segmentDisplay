#include "SegmentDisp.h"
#include <IRremote.h>

IRrecv IR(3);
Digit digit;
int pins[8];

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 8; i++){
    pins[i] = i + 6;
    pinMode(pins[i], OUTPUT);
  }
  IR.enableIRIn();
  digit.pinSet(pins);
}

void loop() {
    if (IR.decode()) {
      delay(250);
      //Serial.println(IR.decodedIRData.decodedRawData);
      switch(IR.decodedIRData.decodedRawData) {

        //off
        case 3125149440:
          digit.off();
          break;

        //0
        case 3910598400:
          digit.setNum(0);
          digit.displayNum();
          break;

        //1
        case 4077715200:
          digit.setNum(1);
          digit.displayNum();
          break;

        //2
        case 3877175040:
          digit.setNum(2);
          digit.displayNum();
          break;

        //3
        case 2707357440:
          digit.setNum(3);
          digit.displayNum();
          break;

        //4
        case 4144561920:
          digit.setNum(4);
          digit.displayNum();
          break;

        //5
        case 3810328320:
          digit.setNum(5);
          digit.displayNum();
          break;
        
        //6
        case 2774204160:
          digit.setNum(6);
          digit.displayNum();
          break;

        //7
        case 3175284480:
          digit.setNum(7);
          digit.displayNum();
          break;

        //8
        case 2907897600:
          digit.setNum(8);
          digit.displayNum();
          break;

        //9
        case 3041591040:
          digit.setNum(9);
          digit.displayNum();
          break;

        //Toggle Decimal
        case 3208707840:
          digit.toggleDec();
          break;
      }

      IR.resume();
    }

    
}
