#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    double average = (double)sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
