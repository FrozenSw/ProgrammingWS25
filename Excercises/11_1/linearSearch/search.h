#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <iostream>

void read( int a[], int& size_ref, int max_size );
// Overload accepting pointer to size (used by tests)
void read( int a[], int* size_ref, int max_size );
void print( const int a[], int size ); 
// linearSearch returning pointer to element (nullptr if not found)
const int* linearSearch( const int array[], int key, int size ); 

#endif
