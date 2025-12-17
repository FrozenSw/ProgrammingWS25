#include "search.h"
#include <iostream>
#include <limits>

/*
 * Implement all the functions without defining int arrays,
 * Try instead just using pointers and offsets
 * Use the given prototypes from the .h files
 */

void read(int* a, int* size, int max_size) {
	#include "search.h"
	#include <iostream>

	/*
	 * Alternative implementation using array indexing (a[i])
	 */

	void read(int* a, int* size, int max_size) {
		if (a == nullptr) {
			std::cout << "No valid address\n";
			return;
		}
		if (size == nullptr) return;

		*size = 0;
		while (*size < max_size) {
			std::cout << "*(a + " << *size << "): ";
			int value;
			if (!(std::cin >> value)) {
				if (std::cin.eof()) std::cin.clear();
				break;
			}
			a[*size] = value;
			(*size)++;
		}
	}

	void print(const int* a, int size) {
		if (a == nullptr) return;
		for (int i = 0; i < size; ++i) {
			std::cout << a[i] << " ";
		}
	}

	const int* linearSearch(const int* array, int key, int size) {
		if (array == nullptr) return nullptr;
		for (int i = 0; i < size; ++i) {
			if (array[i] == key) {
				return &array[i];
			}
		}
		return nullptr;
	}
