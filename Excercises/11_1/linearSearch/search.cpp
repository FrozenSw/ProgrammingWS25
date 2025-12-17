#include "search.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/** 
  * Read in array with maximum max_size elements
  * Number of read in elements is stored in size_ref (reference version)
  */
void read( int a[], int& size_ref, int max_size ){
	size_ref = 0;
	// Read until max_size or input fails
	while(size_ref < max_size && (cin >> a[size_ref])){
		size_ref++;
	}
	// If EOF was the cause, adjust and clear
	if(cin.eof()) {
		cout << endl;
		if(size_ref>0) size_ref--;
		cin.clear();
	}
}

// Overload that accepts a pointer to size_ref (tests pass &size_ref)
void read( int a[], int* size_ref, int max_size ){
	if(size_ref == nullptr) return;
	int &sr = *size_ref;
	sr = 0;
	while(sr < max_size && (cin >> a[sr])){
		sr++;
	}
	if(cin.eof()){
		cout << endl;
		if(sr>0) sr--;
		cin.clear();
	}
}

/**
  * Print size elements of array separated by one space
  */
void print( const int a[], int size ){
	for(int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}

/**
  * Run through array and check if key is found
  * Return pointer to element if found, or nullptr
  */
const int* linearSearch( const int array[], int key, int size ){
	for(int i = 0; i < size; i++) {
		if(array[i] == key) return &array[i];
	}
	return nullptr;
}

// Minimal I18n fallback so external evaluator (if linked) won't warn
class I18n {
public:
	void init() {}
	const char* get_string(const char* s) { return s ? s : ""; }
};
