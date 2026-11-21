#include <iostream>
#include <string>
using namespace std;

class Fan {
    int speed;
    string color;

public:
    Fan() {
        speed = 1;
        color = "White";
    }

    void showFan() {
        cout << "Fan Speed: " << speed << endl;
        cout << "Fan Color: " << color << endl;
    }
};

int main() {
    Fan f;
    f.showFan();

    return 0;
}
