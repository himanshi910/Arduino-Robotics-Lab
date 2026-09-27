#include <iostream>
using namespace std;

int main() {
    int readings[10];
    int sum = 0;
    int max, min;
    double average;

    cout << "Enter 10 distance readings:\n";

    for (int i = 0; i < 10; i++) {
        cin >> readings[i];
    }

    max = readings[0];
    min = readings[0];

    for (int i = 0; i < 10; i++) {
        sum += readings[i];

        if (readings[i] > max) {
            max = readings[i];
        }

        if (readings[i] < min) {
            min = readings[i];
        }
    }
    average = (double)sum / 10;

    cout << "\nMaximum reading: " << max << endl;
    cout << "Minimum reading: " << min << endl;
    cout << "Average reading: " << average << endl;

    return 0;
}