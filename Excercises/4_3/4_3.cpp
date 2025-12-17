#include <iostream> // console input and output
using namespace std;

int main()
{
   int number1{0};
   int number2{0};
   int number3{0};
   int smallest{0};
   int largest{0};

   cout << "Enter three different integer values: "; // prompt
   cin >> number1 >> number2 >> number3; // read in three integer values

   largest = number1; // set first integer value to largest

   if (number2 > largest) { // is the second integer larger ?
      largest = number2; // if yes, set second integer to largest
   }

   if (number3 > largest) { // is the third integer larger ?
      largest = number3; // if yes, set third integer to largest
   }

   smallest = number1; // set first integer value to smallest

   if (number2 < smallest) { // is the second integer smaller ?
      smallest = number2; // if yes, set second integer to smallest
   }

   if (number3 < smallest) { // is the third integer smaller ?
      smallest = number3; // if yes, set third integer to smallest
   }

   cout << "sum is " << number1 + number2 + number3 
      << "\naverage is " << (number1 + number2 + number3) / 3.0 
      << "\nproduct is " << number1 * number2 * number3 
      << "\nsmallest number is " << smallest 
      << "\nbiggest number is " << largest << endl;
} 