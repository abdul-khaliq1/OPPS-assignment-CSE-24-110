#include <iostream>
using namespace std;

class SafeInt {
    long x;
public:
    SafeInt(long a=0){ x=a; }

    SafeInt operator + (SafeInt s) {
        return SafeInt(x + s.x);
    }

    void show() const {
        cout << x << endl;
    }
};

int main() {
    SafeInt a(100), b(200), c;
    c = a + b;
    c.show();
}

