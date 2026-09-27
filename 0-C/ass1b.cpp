#include <iostream>
using namespace std;

int main() {
    long long n;
    int count[10] = {0};

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        count[0] = 1;
    }
    else {
        if (n < 0)
            n = -n;

        while (n > 0) {
            int digit = n % 10;
            count[digit]++;
            n = n / 10;
        }
    }

    cout << "Digit frequency:" << endl;

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << i << " appears " << count[i] << " time " << endl;
        }
    }

    return 0;
}