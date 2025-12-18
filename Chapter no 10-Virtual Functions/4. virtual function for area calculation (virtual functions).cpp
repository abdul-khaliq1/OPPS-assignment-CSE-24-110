#include <iostream>
using namespace std;

class figure {
public:
    virtual float area() {
        return 0;
    }
};

class rectangle : public figure {
    float l, b;
public:
    rectangle(float x, float y) {
        l = x;
        b = y;
    }
    float area() {
        return l * b;
    }
};

class triangle : public figure {
    float b, h;
public:
    triangle(float x, float y) {
        b = x;
        h = y;
    }
    float area() {
        return 0.5 * b * h;
    }
};

int main() {
    figure* f;
    rectangle r(5, 4);
    triangle t(6, 3);

    f = &r;
    cout << f->area() << endl;

    f = &t;
    cout << f->area() << endl;

    return 0;
}

