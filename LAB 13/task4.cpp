#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 15, y = 25;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapNumbers(&x, &y);  // call swap function with pointers

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
