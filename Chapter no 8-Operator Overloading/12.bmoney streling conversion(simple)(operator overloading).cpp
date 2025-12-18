#include <iostream>
using namespace std;

class bMoney {
    double dollars;
public:
    bMoney(double d=0){ dollars=d; }
    operator double() { return dollars; }
};

class Sterling {
    double pounds;
public:
    Sterling(double p=0){ pounds=p; }
    Sterling(bMoney b){ pounds = b*0.2; }

    void show() const {
        cout << pounds << endl;
    }
};

int main() {
    bMoney b(500);
    Sterling s = b;
    s.show();
}

