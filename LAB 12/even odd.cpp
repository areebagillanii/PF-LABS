#include <iostream>
using namespace std;

// Function to check even or odd
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is Even" << endl;
    } else {
        cout << number << " is Odd" << endl;
    }
}

int main() {
    // Calling the function with different values
    checkEvenOdd(10);
    checkEvenOdd(7);
    checkEvenOdd(0);
    checkEvenOdd(23);
    
    return 0;
}

