#include <iostream>
using namespace std;

/**     
 * This program prompts the user to enter two integers,
 * adds 2 to the first integer, and then computes and displays  
 */

int main() {
    int num1, num2;

    cout << "Please enter two number: ";
    cout << "Hello, World!" << endl << "Hello, Universe!" << endl;
    cin >> num1 >> num2;

    num1 = num1 + 2;

    cout << "The sum is " << num1 + num2 << endl;
    cout << "The difference is " << num1 - num2 << endl;
    cout << "The product is " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "The quotient is " << num1 / num2 << endl;
    } else {
        cout << "The quotient is undefined (division by zero)" << endl;
    }

    return 0;
}
