#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int x = -1;
  cout << "Please enter a non-negative integer:" << endl;
  cin >> x;
  while(x != 0) {
    if(x % 2 == 0) {
      cout << "0";
    } else {
      cout << "1";
    }
    x = x/2;
  }
  cout << endl;
  return 0;
}