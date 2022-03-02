#include <iostream>
#include <string>
#include "sanity.h"
#include "do.h"
#include "clear.h"

int main(){
  system(CLEAR); //clears screen

  float sum = 0, x = 0,y = 0; //values to be acted upon
  bool xisneg = false;
  bool yisneg = false;
  bool xcomplete = false, opcomplete = false;

  while(true){
    std::string tmp = "",tmpx = "",tmpy = ""; //tmp will store the cin, and the other two will act as placeholders for the numbers

    bool printsum = true;

    char op = '\0'; //stores the operand

    std::cin>>tmp;

    for (int i = 0; i < tmp.size(); i++){
      if (chariscom(tmp[i])){
        op = tmp[i];
        break;
      }
      else if (!xcomplete && tmp[i] == '-'){
        xisneg = true;
      }
      else if (!xcomplete && charisdig(tmp[i])){
        tmpx.push_back(tmp[i]);
      }
      else if (!opcomplete && charisop(tmp[i])){
        op = tmp[i];
        xcomplete = true;
        opcomplete = true;
        if (tmpx != ""){
          x = std::stof(tmpx);
          if (xisneg){
            x = x * -1.0;
          }
        }
      }
      else if (opcomplete && xcomplete && tmp[i] == '-'){
        yisneg = true;
      }
      else if (opcomplete && xcomplete && charisdig(tmp[i])){
        tmpy.push_back(tmp[i]);
      }
      else {
        std::cout<<"Error: Invalid Input"<<std::endl;
        break;
      }

      if (tmpy != ""){
        y = std::stof(tmpy);
        if (yisneg){
          y = y * -1.0;
        }
      }
    }

    if (op != '\0'){
      if (op == 'c'){
        sum = docl();
        x = 0;
        xisneg = false;
        printsum = false;
        xcomplete = false;
        opcomplete = false;
      }
      else if (op == 'q'){
        sum = docl();
        return 0;
      }
      else {
        sum = domath(x,y,op);
        x = sum;
        y = 0;
        yisneg = false;
        opcomplete = false;
      }
    }

    if (printsum){
      std::cout << sum;
    }
  }
}
