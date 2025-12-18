#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() {
        cout << "drawing shape" << endl;
    }
};

class circle : public shape {
public:
    void draw() {
        cout << "drawing circle" << endl;
    }
};

class square : public shape {
public:
    void draw() {
        cout << "drawing square" << endl;
    }
};

int main() {
    shape* s;
    circle c;
    square sq;

    s = &c;
    s->draw();

    s = &sq;
    s->draw();

    return 0;
}

