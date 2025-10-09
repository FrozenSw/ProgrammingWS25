#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Please enter two number: ";
    cin >> num1 >> num2;

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
