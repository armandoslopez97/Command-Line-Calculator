#include "sanity.h"

bool charisdig(char a){
  int b = a;

  if (b == 46 || (b >= 48 && b <= 57)){ //48-57 correspong to the digits in ascii
    return true;
  }
  else {
    return false;
  }
}

bool charisop(char a){
  int b = a;

  if (b == 37 || b == 42 || b == 43 || b == 45 || b == 47){ //these numbers correspong to the operands used by this program
    return true;
  }
  else {
    return false;
  }
}

bool chariscom(char a){
  int b = a;

  if (b == 99 || b == 113){ //these numbers correspong to the commands used by this program
    return true;
  }
  else {
    return false;
  }
}
