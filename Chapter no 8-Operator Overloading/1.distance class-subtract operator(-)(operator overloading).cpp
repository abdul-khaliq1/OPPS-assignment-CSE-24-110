#include <iostream>
using namespace std;

class Distance {
    int feet;
public:
    Distance(int f=0) { feet=f; }

    Distance operator - (Distance d) {
        return Distance(feet - d.feet);
    }

    void show() const {
        cout << feet << endl;
    }
};

int main() {
    Distance d1(10), d2(4), d3;
    d3 = d1 - d2;
    d3.show();
}

