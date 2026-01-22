#include <iostream>
using namespace std;

int main()
{
    int mainChoice, subChoice;
    char choice;
    float quantity;
    float totalBill = 0;

    do
    {
        cout << "\n===== RESTAURANT MENU =====\n";
        cout << "1. Chicken Items\n";
        cout << "2. Fast Food\n";
        cout << "3. Drinks\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1:
            cout << "\n--- Chicken Menu ---\n";
            cout << "1. Chicken Karahi (Rs 1800 per KG)\n";
            cout << "2. Chicken Biryani (Rs 250 per plate)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            if (subChoice == 1)
            {
                cout << "Enter quantity (KG): ";
                cin >> quantity;
                totalBill += quantity * 1800;
            }
            else if (subChoice == 2)
            {
                cout << "Enter plates: ";
                cin >> quantity;
                totalBill += quantity * 250;
            }
            break;

        case 2:
            cout << "\n--- Fast Food Menu ---\n";
            cout << "1. Zinger Burger (Rs 350)\n";
            cout << "2. Pizza (Rs 1200)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            if (subChoice == 1)
            {
                cout << "Enter quantity: ";
                cin >> quantity;
                totalBill += quantity * 350;
            }
            else if (subChoice == 2)
            {
                cout << "Enter quantity: ";
                cin >> quantity;
                totalBill += quantity * 1200;
            }
            break;

        case 3:
            cout << "\n--- Drinks Menu ---\n";
            cout << "1. Soft Drink (Rs 100)\n";
            cout << "2. Mineral Water (Rs 80)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1)
                totalBill += quantity * 100;
            else if (subChoice == 2)
                totalBill += quantity * 80;
            break;

        default:
            cout << "Invalid Choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n============================\n";
    cout << "Total Bill = Rs " << totalBill << endl;
    cout << "Thank You for Visiting!\n";

    return 0;
}

