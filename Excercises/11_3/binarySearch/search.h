#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <iostream>

void read( int a[], int& size_ref, int max_size );
void print( const int a[], int size ); 
bool isSorted( const int a[], int size );
int binarySearch( const int array[], int key, int start, int end );   
int binarySearchIt( const int array[], int key, int start, int end );

#endif
