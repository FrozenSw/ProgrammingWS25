#include <iostream> // iostream header for performing input and output
using namespace std; // program uses function names from the std namespace

int main()
{
   int number; // integer read from user

   cout << "Enter an integer: "; // prompt
   cin >> number; // read integer from user

   if ( number % 2 == 0 )
      cout << "The integer " << number << " is even." << endl;
   else
      cout << "The integer " << number << " is odd." << endl;

   return 0;
      
} // end main

