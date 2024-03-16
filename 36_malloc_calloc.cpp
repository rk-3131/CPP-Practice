#include <iostream>
#include <cstdlib> // Needed for malloc and calloc
using namespace std;


int main() {
    // Using malloc to allocate memory for a single integer
    int *ptr_malloc = (int*) malloc(sizeof(int));

    if (ptr_malloc == nullptr) {
        cout << "Memory allocation failed!" <<endl;
        return 1;
    }
    
    *ptr_malloc = 42;
    cout << "Value allocated with malloc: " << *ptr_malloc <<endl;
    free(ptr_malloc); // Freeing memory allocated with malloc

    // Using calloc to allocate memory for an array of integers
    int* ptr_calloc = (int*)calloc(5, sizeof(int)); // Allocating memory for 5 integers
    if (ptr_calloc == nullptr) {
        cout << "Memory allocation failed!" <<endl;
        return 1;
    }
    cout << "Values allocated with calloc: ";
    for (int i = 0; i < 5; ++i) {
        ptr_calloc[i] = i + 1;
        cout << ptr_calloc[i] << " "; // Outputting the values (initialized to 0)
    }
    cout <<endl;
    free(ptr_calloc); //freeing memory allocated with calloc

    return 0;
}
