#include "search.h"

using std::cout;
using std::cin;
using std::endl;

// Main function to test linear search

int main(){
    // Data 
    const int max_size = 100;
    int a[max_size];
    int size = 0;
    int& ref_size=size;
    // Test read function
    cout << "Enter integers. Terminate with EOF." << endl;
    read(a, ref_size, max_size);
    cout << "The array has " << ref_size << " elements: ";
    // Test print function
    print(a, ref_size);
    cout << endl;
    // Test linearSearch function
    cout << "Please enter search key: ";
    int key;
    cin >> key;
    int index = binarySearch(a, key, 0, size - 1);
    if(index != -1) {
        cout << "Search key was found at index: " << index << endl;
    } else {
        cout << "Search key not found among array elements." << endl;
    }
    
}
