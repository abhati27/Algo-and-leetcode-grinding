#include <iostream>
#include <stdbool.h>
#include <string>
using namespace std;

bool isUnique(string input) {
  // ask what is the type of charater set  ascii or unicode?
  // lets take ascii
  if(input.size()>128){ // check if string is greater than 128
      return false;
  }
  bool arr[128] = {false}; // make a array of all false
  for (int i = 0; i < input.size(); i++) {
    if (arr[input[i]] == false) {
      arr[input[i]] = true;
    } else {
      return false;
    }
  }
  return true;
}

int main() {
  cout << "Check if letters are unique" << endl;
  cout << "Enter the string: ";
  string input;
  cin >> input;
  int res = isUnique(input);
  cout << ((res == 1) ? "All characters are unique"
                      : "Not all characters are unique")
       << endl;
  cout << "end of qtn 1.1" << endl << "Teehee...";
}
