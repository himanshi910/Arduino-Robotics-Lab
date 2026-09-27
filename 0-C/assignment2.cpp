#include <iostream>
using namespace std;

void readSensors(int s[]) {
    cout << "enter 8 sensor values: ";
    for(int i = 0; i < 8; i++) {
        cin >> s[i];
    }
}

float calculatePosition(int s[]) {
    int sum = 0, count = 0;

    for(int i = 0; i < 8; i++) {
        if(s[i] == 1) {
            sum += i;
            count++;
        }
    }

    if(count == 0)
        return -1;
    float position;
    position = (float)sum / count;

    return position;
}

void decideMovement(float pos) {
    if(pos == -1) {
        cout << "line position: lost" << endl;
        cout << "action: line lost";
    }
    else if(pos < 3) {
        cout << "line position: left" << endl;
        cout << "action: turn left";
    }
    else if(pos > 4) {
        cout << "line position: right" << endl;
        cout << "action: turn right";
    }
    else {
        cout << "line position: center" << endl;
        cout << "action: move forward";
    }
}

int main() {
    int s[8];
    float pos;

    readSensors(s);

    pos = calculatePosition(s);

    decideMovement(pos);

    return 0;
}