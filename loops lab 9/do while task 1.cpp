#include <iostream>
using namespace std;

int main() {
    string password;
    string correctPassword = "cpp123";

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password! Try again.\n";
        }

    } while (password != correctPassword);

    cout << "Access Granted! Password is correct.\n";

    return 0;
}

