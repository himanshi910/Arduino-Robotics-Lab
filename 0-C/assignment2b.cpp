#include <iostream>
using namespace std;

class Robot {
private:
    int speed;
    int battery;

public:
    void setSpeed(int s) {
        if(s >= 0 && s <= 100)
            speed = s;
        else
            cout << "invalid speed" << endl;
    }

    void setBattery(int b) {
        if(b >= 0 && b <= 100)
            battery = b;
        else
            cout << "invalid battery" << endl;
    }

    void moveForward() {
        if(battery > 0) {
            cout << "moving forward" << endl;
            battery -= 5;
        }
        else
            cout << "battery empty" << endl;
    }

    void moveBackward() {
        if(battery > 0) {
            cout << "moving backward" << endl;
            battery -= 5;
        }
        else
            cout << "battery empty" << endl;
    }

    void turnLeft() {
        if(battery > 0) {
            cout << "turning left" << endl;
            battery -= 5;
        }
        else
            cout << "battery empty" << endl;
    }

    void turnRight() {
        if(battery > 0) {
            cout << "turning right" << endl;
            battery -= 5;
        }
        else
            cout << "battery empty" << endl;
    }

    void displayStatus() {
        cout << "robot speed: " << speed << endl;
        cout << "battery: " << battery << "%";
    }
};

int main() {
    Robot r;
    int s, b, n;
    string command;

    cout << "enter speed: ";
    cin >> s;

    cout << "enter battery: ";
    cin >> b;

    r.setSpeed(s);
    r.setBattery(b);
    cout << "Enter number of commands: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter command: ";
        cin >> command;

        if(command == "Forward")
            r.moveForward();
        else if(command == "Backward")
            r.moveBackward();
        else if(command == "Left")
            r.turnLeft();
        else if(command == "Right")
            r.turnRight();
        else
            cout << "Invalid command" << endl;
    }

    r.displayStatus();

    return 0;
}