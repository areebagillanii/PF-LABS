#include <iostream>
using namespace std;

int main() {
    float balance, withdraw;

    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    if (withdraw <= balance) {
        balance -= withdraw;
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: $" << balance << endl;
    } else {
   cout << "Insufficient balance." << endl;
    }

    return 0;
}

