#include <iostream>
using namespace std;

class base {
public:
    virtual void print() {
        cout << "base" << endl;
    }
};

class derived : public base {
public:
    void print() {
        cout << "derived" << endl;
    }
};

int main() {
    base* b = new derived;
    b->print();
    delete b;
    return 0;
}

