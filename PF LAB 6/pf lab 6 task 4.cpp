#include <iostream>
using namespace std;

char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int sub1, sub2, sub3;

    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    cout << "Enter marks for Subject 3: ";
    cin >> sub3;

    // Calculate total and percentage
    int total = sub1 + sub2 + sub3;
    float percentage = total / 3.0;

    // Get grades
    char grade1 = getGrade(sub1);
    char grade2 = getGrade(sub2);
    char grade3 = getGrade(sub3);

    // Check if failed
    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
        cout << "Grade 1: " << grade1 << endl;
        cout << "Grade 2: " << grade2 << endl;
        cout << "Grade 3: " << grade3 << endl;
        cout << "Result: Failed" << endl;
        return 0;
    }

    // Display total and percentage
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Grade 1: " << grade1 << endl;
cout << "Grade 2: " << grade2 << endl;
    cout << "Grade 3: " << grade3 << endl;

    // Scholarship eligibility
    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270) {
        cout << "Scholarship: Eligible for Merit Scholarship" << endl;
    }
    else if ((grade1 == 'A' || grade1 == 'B') &&
             (grade2 == 'A' || grade2 == 'B') &&
             (grade3 == 'A' || grade3 == 'B') &&
             total >= 240) {
        cout << "Scholarship: Eligible for Regular Scholarship" << endl;
    }
    else {
        cout << "Scholarship: Not Eligible" << endl;
    }

    return 0;
}
