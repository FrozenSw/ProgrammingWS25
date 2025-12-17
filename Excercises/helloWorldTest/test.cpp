#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello, " << name << endl;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;
    cout << "The sum is: " << sum << endl;

    return 0;
}