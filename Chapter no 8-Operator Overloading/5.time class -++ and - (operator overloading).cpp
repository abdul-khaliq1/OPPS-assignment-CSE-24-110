#include <iostream>
using namespace std;

class Time {
    int h;
public:
    Time(int x=0){ h=x; }

    Time operator ++ () {
        h++;
        return *this;
    }

    void show() const {
        cout << h << endl;
    }
};

int main() {
    Time t(5);
    ++t;
    t.show();
}

