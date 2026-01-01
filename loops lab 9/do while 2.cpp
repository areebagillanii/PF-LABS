#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;
    char moreOrder;
    float quantity;
    float totalBill = 0;

    do {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice) {

        // -------- BREAKFAST --------
        case 1:
            cout << "\n--- Breakfast Menu ---\n";
            cout << "1. Anda Paratha (Rs.40)\n";
            cout << "2. Nan Channy (Rs.60)\n";
            cout << "3. Siri Paye (Rs.150)\n";
            cout << "4. Tea (Rs.15)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) totalBill += 40 * quantity;
            else if (subChoice == 2) totalBill += 60 * quantity;
            else if (subChoice == 3) totalBill += 150 * quantity;
            else if (subChoice == 4) totalBill += 15 * quantity;
            else cout << "Invalid item!\n";
            break;

        // -------- LUNCH --------
        case 2:
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/kg)\n";
            cout << "2. Mutton Karahi (Rs.1800/kg)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) totalBill += 1050 * quantity;
            else if (subChoice == 2) totalBill += 1800 * quantity;
            else if (subChoice == 3) totalBill += 450 * quantity;
            else if (subChoice == 4) totalBill += 1050 * quantity;
            else cout << "Invalid item!\n";
            break;

        // -------- DINNER --------
        case 3:
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/kg)\n";
            cout << "2. Mutton Karahi (Rs.1800/kg)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "5. Saji (Rs.800/kg)\n";
            cout << "Enter item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) totalBill += 1050 * quantity;
            else if (subChoice == 2) totalBill += 1800 * quantity;
            else if (subChoice == 3) totalBill += 450 * quantity;
            else if (subChoice == 4) totalBill += 1050 * quantity;
            else if (subChoice == 5) totalBill += 800 * quantity;
            else cout << "Invalid item!\n";
            break;

        default:
            cout << "Invalid main menu choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> moreOrder;

    } while (moreOrder == 'y' || moreOrder == 'Y');

    cout << "\n===== TOTAL BILL =====\n";
    cout << "Total Amount to Pay: Rs. " << totalBill << endl;
    cout << "Thank you for visiting!\n";

    return 0;
}

