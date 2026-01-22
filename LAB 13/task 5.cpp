#include <iostream>
using namespace std;

int main() {
    // Declare a pointer and initialize it to null
    int* ptr = NULL;

    // Check whether the pointer is null
    if (ptr == NULL) {
        cout << "The pointer is null and does not point to any valid memory." << endl;
    } else {
        cout << "The pointer holds the memory address: " << ptr << endl;
    }

    return 0;
}

