#include <iostream>
using namespace std;

int main() {
    int salary, experience;

    cout << "Enter your monthly salary: ";
    cin >> salary;

    cout << "Enter your years of experience: ";
    cin >> experience;

    if (salary >= 25000) {
   cout << "You are eligible for the loan." << endl;
    } else if (salary >= 20000 && experience > 5) {
   cout << "You are eligible for the loan based on experience." << endl;
    } else {
   cout << "You are not eligible for the loan." << endl;
    }

    return 0;
}

