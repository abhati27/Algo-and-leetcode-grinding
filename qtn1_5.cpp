#include <iostream>
using namespace std;

// this is a solution for one chenge string checker

//helper
// this function checks if only one letterhas been changed 
bool letterDif(string inp1, string inp2) {
  int dif = 0;
  for (int i = 0; i < inp1.size(); i++) {
    if (inp1[i] != inp2[i]) {
      dif++;
      if (dif > 1) {
        return false;
      }
    }
  }
  return true;
}

//helper
// this function checks if only one letter has been added without any other changes
bool extraDif(string min_str, string max_str) {
  int min_count = 0, max_count = 0;
  while (min_count < min_str.size() && max_count < max_str.size()) {
    if (min_str[min_count] != max_str[max_count]) {
      if (min_count != max_count) {
        return false;
      }
      max_count++;
    } else {
      min_count++;
      max_count++;
    }
  }
  return true;
}


// the work distributor for the other two functions 
bool checker(string inp1, string inp2) {
  int diff = inp1.size() - inp2.size();
  if (inp1.size() == inp2.size()) {
    return letterDif(inp1, inp2);
  } else if (abs(diff) <= 1) {
    if (inp1.size() > inp2.size()) {
      return extraDif(inp2, inp1);
    } else {
      return extraDif(inp1, inp2);
    }
  }
  return false;
}

// main display and runner
int main() {
  cout << "Only one change maker" << endl;
  cout << "Enter original string: ";
  string inp1;
  cin >> inp1;
  cout << "Enter edited string: ";
  string inp2;
  cin >> inp2;
  bool res = checker(inp1, inp2);
    cout << res;
}