#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    float r,a;
public:
    Polar(float x=0,float y=0){ r=x; a=y; }

    Polar operator + (Polar p) {
        return Polar(r+p.r, a+p.a);
    }

    void show() const {
        cout << r << "," << a << endl;
    }
};

int main() {
    Polar p1(3,30), p2(2,20);
    Polar p3 = p1 + p2;
    p3.show();
}

