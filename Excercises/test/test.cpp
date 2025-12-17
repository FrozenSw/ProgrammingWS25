
#include <iostream>
using namespace std;

int main() {
    
    double num1;
    double num2;
    double r;
    int operation;
    cout << "Enter first number: ";
    cin >> num1;
    
     
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "+: Addition";
    cout << "-: Substraction";
    cout << "*: Multiplication";
    cout << "/: Division";
    cout << "%: Modulo";
    cout << "Choose an operation: ";
    switch(operation)
    
    case (+)
    r = num1 + num2;
    cout << "Result: " << r;
    break;
     
    case (-)
    r = num1 - num2;
    cout << "Result: " << r;
    break;
   
    case (*)
    r = num1 * num2;
    cout << "Result: " << r;
    break;
   
    case (/)
    r = num1 / num2;
    cout << "Result: " << r;
     break;
    
    case (%)
    r = num1 % num2;
    cout << "Result: " << r;
    break;
    
    
    return 0;
}