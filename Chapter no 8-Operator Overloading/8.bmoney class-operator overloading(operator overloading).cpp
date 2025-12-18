#include <iostream>
using namespace std;

class bMoney {
    long double money;
public:
    bMoney(long double m=0){ money=m; }

    bMoney operator + (bMoney b) {
        return bMoney(money + b.money);
    }

    void show() const {
        cout << money << endl;
    }
};

int main() {
    bMoney b1(100.50), b2(200.25);
    bMoney b3 = b1 + b2;
    b3.show();
}

