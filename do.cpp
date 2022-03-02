#include <iostream>
#include "do.h"
#include "clear.h"

float domath(float sum, float y, char op){ //does math
  if (op == '+'){
    sum = sum+y;
  }
  else if (op == '-'){
    sum = sum-y;
  }
  else if (op == '/'){
    sum = sum/y;
  }
  else if (op == '*'){
    sum = sum*y;
  }
  else if (op == '%'){
    sum = sum * .01;
  }

  return sum;
}

float docl(){ //clears screen and resets sum
  system(CLEAR);

  return 0;
}
