#include "search.h"
#include <iostream>

// Alternative implementations using array indexing.
// To use these instead of the ones in search.cpp, compile with -DUSE_ARRAY_IMPL
// and only compile this file (or ensure the other implementations are not linked).

#ifdef USE_ARRAY_IMPL

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

#endif // USE_ARRAY_IMPL
