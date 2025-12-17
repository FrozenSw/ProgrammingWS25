#include <iostream> // console input and output
using namespace std;

int main()
{
   int Number1{0}; // first integer number
   int Number2{0}; // second integer number

   cout << "Enter two integer values: "; 
   cin >> Number1 >> Number2; // read in number

   if (Number1 == Number2) {
      cout << "These numbers are equal." << endl;
   }

   if (Number1 > Number2) {
      cout << Number1 << " is larger." << endl;
   }

   if (Number2 > Number1) {
      cout << Number2 << " is larger." << endl;
   }
} 