#include "search.h"

using std::cout;
using std::cin;
using std::endl;

/** 
  * Read in array with maximum max_size elements
  * Number of read in elements is stored in size_ref
  */
void read( int a[], int& size_ref, int max_size ){
    size_ref = 0;
    do {
        cout << "a[" << size_ref << "]: ";
        cin >> a[size_ref++];
    // Quit when max_size is reached or EOF has been entered (CTRL+d, CTRL+z)    
    } while(size_ref < max_size && !cin.eof());
    // Clear cin and decrement size_ref after EOF has been entered
    if(cin.eof()) {
        cout << endl;
        size_ref--;
        cin.clear();
    }
}

/**
  * Print size elements of array separated by one space
  */
void print( const int a[], int size ){
    for(int i = 0; i < size; i++) {    // loop through array
        cout << a[i] << " ";           // print element separated by one space
    }
}

bool isSorted( const int a[], int size ) {
    for(int i = 1; i < size; i++) {
      if(a[i-1] > a[i]) return false;
    }
    return true;
}

/**
  * Split sorted array in half recursively and check if key is found in the middle
  * Return index if found, or -1
  */
int binarySearch( const int array[], int key, int start, int end ){
    cout << "Binary search from " << start << " to " << end << endl;
    if(start > end) {
      return -1;
    } 
    int index = (start + end)/2;
    int value = array[index];
    if(value == key) return index;
    if(value < key) return binarySearch( array, key, index + 1, end);
    return binarySearch( array, key, start, index - 1);
}

/**
  * Split sorted array in half iteratively and check if key is found in the middle
  * Return index if found, or -1
  */
int binarySearchIt( const int array[], int key, int start, int end ) {
  while(start < end) {
    cout << "Binary search from " << start << " to " << end << endl;
    int index = (start + end)/2;
    int value = array[index];
    if(value == key) return index;
    if(value < key) {
      start = index + 1;
    } else {
      end = index - 1;
    }
  }
  if(start == end && array[start] == key) return start;
  else return -1;
  
}
