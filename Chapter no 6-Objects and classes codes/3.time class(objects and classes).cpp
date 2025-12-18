#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    Time() { h = m = s = 0; }
    Time(int a,int b,int c) { h=a; m=b; s=c; }

    void add(Time t1, Time t2) {
        s = t1.s + t2.s;
        m = t1.m + t2.m + s/60;
        h = t1.h + t2.h + m/60;
        s%=60; m%=60;
    }

    void show() const {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time t1(1,20,30), t2(2,10,40), t3;
    t3.add(t1,t2);
    t3.show();
}

