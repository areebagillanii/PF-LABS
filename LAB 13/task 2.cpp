#include <iostream>
using namespace std;

int main() {
    int num = 5;           // declare integer
    int *ptr = &num;       // pointer to num

    *ptr = 20;             // change value using pointer
    cout << "Modified value of num: " << num << endl;  // display modified value
    return 0;
}
