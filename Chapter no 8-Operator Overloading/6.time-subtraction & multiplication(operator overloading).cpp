#include <iostream>
using namespace std;

class Time {
    int h;
public:
    Time(int x=0){ h=x; }

    Time operator - (Time t) {
        return Time(h - t.h);
    }

    Time operator * (int x) {
        return Time(h * x);
    }

    void show() const {
        cout << h << endl;
    }
};

int main() {
    Time t1(5), t2(2);
    Time t3 = t1 - t2;
    Time t4 = t1 * 3;
    t3.show();
    t4.show();
}

