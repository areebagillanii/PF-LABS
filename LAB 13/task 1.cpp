#include <iostream>
using namespace std;

int main() {
    int num = 10;          // declare and initialize integer
    int *ptr = &num;       // pointer to store address of num

    cout << "Value of num: " << *ptr << endl;  // display value using dereferencing
    return 0;
}
