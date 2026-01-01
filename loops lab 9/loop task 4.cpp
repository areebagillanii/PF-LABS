#include <iostream>
using namespace std;

int main() {
    int sum = 0;    // Variable to store the sum
    int number = 1; // Start counting from 1

    while (number <= 5) {  // Loop until number is 5
        sum += number;     // Add the current number to sum
        number++;          // Increment number by 1
    }

    cout << "The sum of the first five natural numbers is: " << sum << endl;

    return 0;
}
