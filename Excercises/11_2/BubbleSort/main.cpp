#include "BubbleSort.h"
#include <iostream>

using namespace std;

int main() {
	const int kMaxSize = 100;
	int a[kMaxSize] = { 0 }, size;

	Read(a, size, kMaxSize);
	cout << "The array has " << size << " elements: ";
	Print(a, size);
	cout << endl;

    BubbleSort(a, size);
    cout << "After performing bubble sort, we get:	";
 	Print(a, size);

	return 0;
}
