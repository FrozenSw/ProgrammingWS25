#include "search.h"
#include <iostream>

using namespace std;

int main() {
	const int kMaxSize = 100;
	int a[kMaxSize] = { 0 };
	int size=0; //container for the amount of read elements

	read(a, &size, kMaxSize);
	cout << "The array has " << size << " elements: ";
	print(a, size);
	cout << endl;

    int search_key=0;
    cout << "Please enter search key: ";
    cin >> search_key;
    const int* position = linearSearch( a, search_key, size);
    if ( position == nullptr ) {
    	cout << "\nSearch key not found among array elements!\n";
	} else {
		cout << "\nSearch key found at address " << position  << endl;
	}

	return 0;
}
