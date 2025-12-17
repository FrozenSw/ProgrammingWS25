#include <iostream>
#include <iomanip>



using std::cout;
using std::endl;
using std::hex;
using std::dec;
using std::oct;

int main() {
    // start from 1
    int number = 1;
    // use tabs to display table headers
    cout << "Decimal\tOctal\tHexadecimal" << endl;

    // loop up to 256
    while(number != 257) {
        // output using stream manipulators
        cout << dec << number << "\t"; // output decimal number
        cout << oct << number << "\t"; // output octal number
        cout << hex << number << endl; // output hexadecimal number
        number++;  // increase counter
    }
        
    return 0;
} // end main
