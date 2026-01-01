#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter a number (n): ";
    cin >> n;

    while (i <= n) {
        cout << i << " ";
        i++;   // increase i by 1
    }

    return 0;
}
