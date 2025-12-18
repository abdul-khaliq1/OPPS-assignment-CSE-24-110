#include <iostream>
using namespace std;

class Time {
    int h,m;
public:
    Time(int a=0,int b=0){ h=a; m=b; }

    Time operator + (Time t) {
        return Time(h+t.h, m+t.m);
    }

    void show() const {
        cout << h << ":" << m << endl;
    }
};

int main() {
    Time t1(2,30), t2(1,20);
    Time t3 = t1 + t2;
    t3.show();
}

