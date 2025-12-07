#include <iostream>
using namespace std;

int main() {
    char grade;
    int yearsOfService;
    float basicSalary = 0, bonus = 0, grossSalary = 0, tax = 0, netSalary = 0;

    // Input
    cout << "Enter employee grade (A, B, C): ";
    cin >> grade;

    cout << "Enter years of service: ";
    cin >> yearsOfService;

    // Step 1: Assign basic salary
    if (grade == 'A' || grade == 'a') {
        basicSalary = 50000;
    }
    if (grade == 'B' || grade == 'b') {
        basicSalary = 30000;
    }
    if (grade == 'C' || grade == 'c') {
        basicSalary = 20000;
    }

    // Step 2: Calculate bonus
    if (yearsOfService >= 10) {
        bonus = basicSalary * 0.10;
    }
    if (yearsOfService >= 5 && yearsOfService <= 9) {
        bonus = basicSalary * 0.05;
    }
    if (yearsOfService < 5) {
        bonus = 0;
    }

    // Step 3: Calculate gross salary
    grossSalary = basicSalary + bonus;

    // Step 4: Calculate tax
    if (grossSalary > 40000) {
        tax = grossSalary * 0.20;
    }
    if (grossSalary >= 30000 && grossSalary <= 40000) {
        tax = grossSalary * 0.10;
    }
    if (grossSalary < 30000) {
        tax = 0;
    }
// Step 5: Calculate net salary
    netSalary = grossSalary - tax;

    // Step 6: Output
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Bonus:" << bonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax:" << tax << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
