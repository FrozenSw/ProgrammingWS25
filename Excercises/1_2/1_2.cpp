#include <iostream>
using namespace std;

/**
What Do Shift Operators Do?

    << (Left Shift): Moves bits to the left, effectively multiplying the number by powers of 2.

        Example: 5 << 1 → 101 becomes 1010 → equals 10

    >> (Right Shift): Moves bits to the right, effectively dividing the number by powers of 2.

        Example: 8 >> 1 → 1000 becomes 0100 → equals 4

    The >> operator shifts the bits of a number to the right:

    This is the same as dividing by 2 for each shift.

    x >> 1 → equals x / 2

    x >> 2 → equals x / 4
 */

#include <iostream> // enables program to output data to screen

// function main begins program execution
int main() {
    int a = 0;  // initializing variable
    int b = 0;  // initializing variable
    std::cout << "Please enter two integer numbers\n"; // display message
    std::cin >> a >> b;                                // read numbers

    // display original values
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // shift operators
    std::cout << "a << 1 = " << (a << 1) << " (left shift by 1)" << std::endl;
    std::cout << "a >> 1 = " << (a >> 1) << " (right shift by 1)" << std::endl;
    std::cout << "b << 2 = " << (b << 2) << " (left shift by 2)" << std::endl;
    std::cout << "b >> 2 = " << (b >> 2) << " (right shift by 2)" << std::endl;

    return 0; // indicate that program ended successfully
} // end function main