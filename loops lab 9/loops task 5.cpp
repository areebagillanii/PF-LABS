#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Default balance
    int choice;
    double amount;

    while (true) {
        // Display the menu
        cout << "\n=== Simple Banking System ===\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Deposit
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 2: // Withdraw
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Amount withdrawn successfully.\n";
                    } else {
                        cout << "Insufficient balance!\n";
                    }
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3: // Check balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4: // Exit
                cout << "Exiting program. Thank you!\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}

