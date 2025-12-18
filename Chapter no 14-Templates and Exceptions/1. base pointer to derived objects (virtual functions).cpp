#include <iostream>
using namespace std;

class base {
public:
    virtual void show() {
        cout << "base class" << endl;
    }
};

class derived1 : public base {
public:
    void show() {
        cout << "derived1 class" << endl;
    }
};

class derived2 : public base {
public:
    void show() {
        cout << "derived2 class" << endl;
    }
};

int main() {
    base* b;
    derived1 d1;
    derived2 d2;

    b = &d1;
    b->show();

    b = &d2;
    b->show();

    return 0;
}

