#include <iostream> // iostream header for performing input and output

/* using daclarations for input and output */
using std::cin;
using std::cout;
using std::endl;


int main() {
    
    char symbol = ' '; // char read from user initialized to space
    int i = 0;         // int for ASCII representation
     
    while(symbol != 'a') { // terminating condition: 'a' has been entered
        cout<<"Enter a character: ";  // prompt user for data
        cin >> symbol;                // rad in data
        i = static_cast<int>(symbol); // cast, alternative: (int)a 
        cout<<"The integer equivalent of " << symbol << " is " << i<< endl << endl;
    }
    
    return 0;
} // end main
