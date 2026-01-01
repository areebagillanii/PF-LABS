#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

int main() {
    int category, item, quantity;
    double total = 0.0;
    char choice;

    do {
        cout << "Welcome to the Shopping System!\n";
        cout << "Choose a category:\n";
        cout << "1. Electronics\n2. Clothing\n3. Groceries\n";
        cin >> category;

        switch(category) {
            case 1: // Electronics
                cout << "Electronics Items:\n";
                cout << "1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
                cout << "Select item: ";
                cin >> item;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch(item) {
                    case 1: total += 1000 * quantity; break;
                    case 2: total += 700 * quantity; break;
                    case 3: total += 150 * quantity; break;
                    default: cout << "Invalid item!\n"; break;
                }
                break;

            case 2: // Clothing
                cout << "Clothing Items:\n";
                cout << "1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
                cout << "Select item: ";
                cin >> item;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch(item) {
                    case 1: total += 120 * quantity; break;
                    case 2: total += 40 * quantity; break;
                    case 3: total += 60 * quantity; break;
                    default: cout << "Invalid item!\n"; break;
                }
                break;

            case 3: // Groceries
                cout << "Groceries Items:\n";
                cout << "1. Milk (1 Liter - $2)\n2. Bread (1 Loaf - $3)\n3. Eggs (1 Dozen - $5)\n";
                cout << "Select item: ";
                cin >> item;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch(item) {
                    case 1: total += 2 * quantity; break;
                    case 2: total += 3 * quantity; break;
                    case 3: total += 5 * quantity; break;
                    default: cout << "Invalid item!\n"; break;
                }
                break;

            default:
                cout << "Invalid category!\n";
        }

        cout << "Do you want to buy more items? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    // Apply Discount
    double discount = 0.0;
    if(total >= 100 && total <= 500) discount = 0.10 * total;
    else if(total > 500) discount = 0.20 * total;

    double finalTotal = total - discount;

    // Print Invoice
    cout << "\n------ Invoice ------\n";
    cout << fixed << setprecision(2);
    cout << "Total Price: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Amount to Pay: $" << finalTotal << endl;
    cout << "Thank you for shopping with us!\n";

    return 0;
}
