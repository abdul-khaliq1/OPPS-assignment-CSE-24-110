#include <iostream>
using namespace std;

class Angle {
    int deg;
    float min;
    char dir;

public:
    Angle(int d=0,float m=0,char di='N') {
        deg=d; min=m; dir=di;
    }

    void show() const {
        cout << deg << "°" << min << "' " << dir << endl;
    }
};

int main() {
    Angle a(179,59.9,'E');
    a.show();
}

