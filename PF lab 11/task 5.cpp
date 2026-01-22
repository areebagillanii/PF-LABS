

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    int arr[N];
    cout << "Enter elements:\n";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < N; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest number = " << largest;
    return 0;
}

