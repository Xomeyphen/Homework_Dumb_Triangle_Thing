/*
Program name : N/A

Programmer : N/A

Date : 10 / 1-2 / 2023

Version : 9999

Des: Honistly i have now clue what this is for,
     but it makes triangles and took about 6 hours to make.
     im sorry its late.
*/
#include <iostream>

using namespace std;

int main() {
  int oddOrEven = 0;
  string leftPlus = "+", rightPlus = "++++++++++", spaceShrink = "                  ";


  cout << "-----------------------------------------\n";
  cout << "Pattern A          Pattern B\n";
  cout << "-----------------------------------------\n";


  // what was the reason for this pain?
  while (oddOrEven < 20) {
    if (oddOrEven % 2 == 0) {
      cout << leftPlus;
      cout << spaceShrink;
      spaceShrink.pop_back();
      leftPlus += "+";
      oddOrEven++;
    } else {
      cout << rightPlus << endl;
      rightPlus.pop_back();
      oddOrEven++;
    }
  }


    cout << "-----------------------------------------\n";
    cout << "This took a mental breakdown to make.\n";


  return 0;
}