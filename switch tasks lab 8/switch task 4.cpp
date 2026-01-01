#include <iostream>
using namespace std;

int main() {
    double usdAmount;
    int choice;
    double convertedAmount;

    // Exchange rates (example values, can be updated)
    double toPKR = 280.50;
    double toINR = 83.20;
    double toEUR = 0.92;

    cout << "Enter amount in USD: ";
    cin >> usdAmount;

    cout << "\nChoose the currency to convert to:\n";
    cout << "1. PKR (Pakistani Rupee)\n";
    cout << "2. INR (Indian Rupee)\n";
    cout << "3. EUR (Euro)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            convertedAmount = usdAmount * toPKR;
            cout << "Converted Amount in PKR: " << convertedAmount << endl;
            break;
        case 2:
            convertedAmount = usdAmount * toINR;
            cout << "Converted Amount in INR: " << convertedAmount << endl;
            break;
        case 3:
            convertedAmount = usdAmount * toEUR;
            cout << "Converted Amount in EUR: " << convertedAmount << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
