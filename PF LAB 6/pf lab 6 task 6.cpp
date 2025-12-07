#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, role;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Authentication
    if (username == "admin" && password == "password123") {
        cout << "Authentication Successful!" << endl;

        // Get role after authentication
        cout << "Enter your role (Admin / Guest / Other): ";
        cin >> role;

        // Role-Based Access
        if (role == "Admin" || role == "admin") {
            cout << "Full Access" << endl;
        }
        else if (role == "Guest" || role == "guest") {
            cout << "Limited Access" << endl;
        }
        else {
            cout << "No Access" << endl;
        }
    }
    else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
