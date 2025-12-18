#include <iostream>
using namespace std;

class Int {
    int x;
public:
    Int() { x = 0; }
    Int(int a) { x = a; }

    void add(Int a, Int b) {
        x = a.x + b.x;
    }

    void show() const {
        cout << x << endl;
    }
};

int main() {
    Int a(5), b(10), c;
    c.add(a, b);
    c.show();
    return 0;
}

