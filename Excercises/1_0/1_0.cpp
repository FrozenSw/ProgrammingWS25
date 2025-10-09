#include <iostream> // enables program to output data to screen

// function main begins program execution
int main() {
  int a = 0;  // initializing variable
  int b = 0;  // initializing variable

  std::cout << "Please enter two integer numbers:\n"; // prompt for input
  std::cin >> a >> b; // read numbers

  // perform and display arithmetic operations
  std::cout << a << " + " << b << " = " << a + b << std::endl;
  std::cout << a << " - " << b << " = " << a - b << std::endl;
  std::cout << a << " * " << b << " = " << a * b << std::endl;

  // check for division by zero
  if (b != 0) {
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    std::cout << a << " % " << b << " = " << a % b << std::endl;
  } else {
    std::cout << "Division by zero is not allowed." << std::endl;
  }

  return 0; // indicate that program ended successfully
} // end function main