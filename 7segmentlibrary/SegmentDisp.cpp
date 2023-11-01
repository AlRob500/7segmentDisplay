#include "SegmentDisp.h"

extern int pins[8];


//Sets the pins used by the dispaly
void Digit::pinSet(int tempPins[8]){
  for (int i = 0; i < 8; i++) {
    pins[i] = tempPins[i];
  }
}

void Digit::setNum(int x){
  number = x;
}

void Digit::setPlace(int x) {
  place = x;
}

void Digit::toggleDec(){                      
  if (digitalRead(pins[4]) == 1) {
    Serial.println(digitalRead(pins[4]));
    digitalWrite(pins[4], LOW);
  }
  else {
    Serial.println(digitalRead(pins[4]));
    digitalWrite(pins[4], HIGH);
  }
}


//Turns all segments off
void Digit::off() {
  digitalWrite(pins[0], LOW);
  digitalWrite(pins[1], LOW);
  digitalWrite(pins[2], LOW);
  digitalWrite(pins[3], LOW);
  digitalWrite(pins[4], LOW);
  digitalWrite(pins[5], LOW);
  digitalWrite(pins[6], LOW);
  digitalWrite(pins[7], LOW);
}


//Displays num x on display
void Digit::displayNum(){

  switch (number) {

  //Displays zero
  case 0:
    digitalWrite(pins[7], HIGH);
    digitalWrite(pins[6], HIGH);
    digitalWrite(pins[5], HIGH);
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[0], LOW);
    break;

  //Display 1
  case 1:
    digitalWrite(pins[7], LOW);
    digitalWrite(pins[6], LOW);
    digitalWrite(pins[5], HIGH);
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], LOW);
    digitalWrite(pins[1], LOW);
    digitalWrite(pins[0], LOW);
    break; 

  //Display 2
  case 2:
    digitalWrite(pins[7], HIGH);
    digitalWrite(pins[6], HIGH);
    digitalWrite(pins[5], LOW);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], LOW);
    digitalWrite(pins[0], HIGH);
    break; 

  //Display 3
  case 3:
    digitalWrite(pins[7], LOW);
    digitalWrite(pins[6], HIGH);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], LOW);
    digitalWrite(pins[0], HIGH);
    break;

  //Display 4
  case 4:
    //Serial.println(pins[2]);
    digitalWrite(pins[7], LOW);
    digitalWrite(pins[6], LOW);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], LOW);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[0], HIGH);
    break; 

  //Display 5
  case 5:
    //Serial.println(pins[2]);
    digitalWrite(pins[7], LOW);
    digitalWrite(pins[6], HIGH);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], LOW);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[0], HIGH);
    break;
  
  //Display 6
  case 6:
    //Serial.println(pins[2]);
    digitalWrite(pins[7], HIGH);
    digitalWrite(pins[6], HIGH);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], LOW);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[0], HIGH);
    break;
  
  //Display 7
  case 7:
    //Serial.println(pins[2]);
    digitalWrite(pins[7], LOW);
    digitalWrite(pins[6], LOW);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], LOW);
    digitalWrite(pins[0], LOW);
    break;
  
  //Display 8
  case 8:
    //Serial.println(pins[2]);
    digitalWrite(pins[7], HIGH);
    digitalWrite(pins[6], HIGH);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[0], HIGH);
    break;

  //Display 9
  case 9:
    //Serial.println(pins[2]);
    digitalWrite(pins[7], LOW);
    digitalWrite(pins[6], LOW);
    digitalWrite(pins[5], HIGH);
    if (dec) {
      digitalWrite(pins[4], HIGH);
    }
    else {
      digitalWrite(pins[4], LOW);
    }
    digitalWrite(pins[3], HIGH);
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[0], HIGH);
    break;
  }
  
}


