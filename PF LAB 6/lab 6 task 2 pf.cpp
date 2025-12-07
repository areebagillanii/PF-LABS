#include <iostream>
using namespace std;

int main() {
    float temp;
    cout << "Enter the temperature in °C: ";
    cin >> temp;

    if (temp >= 40) {
        cout << "Stay indoors. It's extremely hot and dangerous." << endl;
    }
    else if (temp >= 30) {
        cout << "Drink plenty of water to stay hydrated." << endl;
    }
    else if (temp >= 20) {
        cout << "The weather is pleasant. Suitable for outdoor activities." << endl;
    }
    else {
        cout << "Wear warm clothes. It's cold outside." << endl;
    }

    return 0;
}

