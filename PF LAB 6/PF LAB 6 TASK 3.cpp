#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    // Predefined credentials
    string correctUsername = "admin";
    string correctPassword = "12345";

    // Input from user
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Check conditions
    if (username == correctUsername && password == correctPassword) {
        cout << "Access Granted." << endl;
    }
    else if (username == correctUsername && password != correctPassword) {
        cout << "Wrong Password." << endl;
    }
    else {
        cout << "User Not Found." << endl;
    }

    return 0;
}
