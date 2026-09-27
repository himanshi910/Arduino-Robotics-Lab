#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    double a, b;
    
    cout << "Select an operation:" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cin >> choice;
    
    cout << "You selected option: " << choice << endl;  
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;
    
    switch (choice) {
        case 1:
            cout << "The sum is: " << a + b << endl;
            break;
        case 2:
            cout << "The difference is: " << a - b << endl;
            break;
        case 3:
            cout << "The product is: " << a * b << endl;
            break;
        case 4:
            if (b != 0) {
                cout << "The quotient is: " << a / b << endl;
            } else {
                cout << "division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid option selected." << endl;
    }
    
    return 0;
}
              


