#include <iostream>
using namespace std;

int main() {
    int num = 100;
    void *ptr = &num;  // void pointer assigned integer address

    // cast void pointer to int* before dereferencing
    cout << "Value of num via void pointer: " << *(int*)ptr << endl;
    return 0;
}
