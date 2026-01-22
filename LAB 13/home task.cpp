#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;  // dynamically allocate memory for an integer
    *ptr = 42;           // assign value to allocated memory

    cout << "Dynamically allocated value: " << *ptr << endl;

    delete ptr;          // free the allocated memory
    return 0;
}
