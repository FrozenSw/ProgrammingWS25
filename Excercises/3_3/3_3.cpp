#include <iostream> // enables program to output data to screen
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

/**
  * C++ program to study logic expressions.
  */
int main() {  bool p, q;
  
    cout << "Enter 1 for true, 0 for false!" << endl;
    cout << "P: ";
    cin >> p;
    cout << "Q: ";
    cin >> q;

    // Display the values of p and q
    cout << "P: \t\t"     << boolalpha << p << endl;
    cout << "Q: \t\t"     << boolalpha << q << endl;

    return 0; // indicate that program ended successfully
} // end function main