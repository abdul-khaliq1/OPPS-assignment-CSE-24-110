#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    Fraction(int a=0,int b=1){ n=a; d=b; }

    Fraction operator + (Fraction f) {
        return Fraction(n*f.d + f.n*d, d*f.d);
    }

    void show() const {
        cout << n << "/" << d << endl;
    }
};

int main() {
    Fraction f1(1,2), f2(1,4);
    Fraction f3 = f1 + f2;
    f3.show();
}

