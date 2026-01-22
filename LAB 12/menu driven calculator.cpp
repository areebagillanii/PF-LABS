#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice, a, b;
    do {
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result: " << add(a, b) << endl; break;
            case 2: cout << "Result: " << subtract(a, b) << endl; break;
            case 3: cout << "Result: " << multiply(a, b) << endl; break;
            case 4: cout << "Result: " << divide(a, b) << endl; break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
