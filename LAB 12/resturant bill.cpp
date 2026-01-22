#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Menu:\n1. Pizza - Rs. 500\n2. Burger - Rs. 200\n3. Pasta - Rs. 300\n4. Salad - Rs. 150\n5. Exit\n";
}

int calculateItemTotal(int price, int quantity) {
    return price * quantity;
}

float calculateFinalBill(int total, float tax = 0.10) {
    return total + (total * tax);
}

int main() {
    int choice, quantity, total = 0;
    do {
        displayMenu();
        cout << "Enter item number: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter quantity: ";
            cin >> quantity;
        }

        switch (choice) {
            case 1: total += calculateItemTotal(500, quantity); break;
            case 2: total += calculateItemTotal(200, quantity); break;
            case 3: total += calculateItemTotal(300, quantity); break;
            case 4: total += calculateItemTotal(150, quantity); break;
            case 5: break;
            default: cout << "Invalid choice!";
        }
    } while (choice != 5);

    cout << "Total Bill (with 10% tax): Rs. " << calculateFinalBill(total) << endl;
    return 0;
}
