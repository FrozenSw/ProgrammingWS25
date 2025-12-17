#include "BubbleSort.h"

void Read(int a[], int& n_ref, int max_size) {
	std::cout << "\nEnter integers. Terminate with EOF.\n";
	n_ref = 0;
	do {
		std::cout << "a[" << n_ref << "]: ";
	} while (std::cin >> a[n_ref++] && n_ref <= max_size);
	--n_ref; // do not count the EOF
	std::cin.clear();
	std::cin.ignore(256,'\n');

	return;
}


void Print(const int a[], int size) {
	// printing out the array elements
	for (int i = 0; i < size; i++) {
		std::cout << a[i] << " ";
	}

	return;
}


void BubbleSort(int a[], int size) {
   int temp;
   int size1 = size;

   for(int i = 1; i < size1; i++) {
      for(int j = 0; j < size1 - i; j++) {
         if(a[j] > a[j + 1]) // swap a[j] and a[j+1]
         {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }

   return;
}

