#include <iostream>
using namespace std;

void moveforward() {
    cout << "Robot is moving forward" << endl;}
void movebackward() {
cout << "Robot is moving backward" << endl;}
void moveleft() {
cout << "Robot is moving left" << endl;}
void moveright() {
cout << "Robot is moving right" << endl;}

int main() {
    char choice;

    for (int i = 0; i < 100; i++) {
    cout << "Enter your choice:" << endl;
    cout << "Move Forward: F" << endl;
    cout << "Move Backward: B" << endl;
    cout << "Move Left: L" << endl;
    cout << "Move Right: R" << endl;
    cin >> choice;
    if (choice != 'F' && choice != 'B' &&
        choice != 'L' && choice != 'R') {

        cout << "Invalid choice" << endl;
        break;
        }

    switch (choice) {

        case 'F':
            moveforward();
            break;

        case 'B':
            movebackward();
            break;

        case 'L':
            moveleft();
            break;

        case 'R':
            moveright();
            break;
        }
    }

    return 0;
}
