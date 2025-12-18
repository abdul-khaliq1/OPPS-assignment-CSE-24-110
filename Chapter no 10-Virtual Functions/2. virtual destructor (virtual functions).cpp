#include <iostream>
using namespace std;

class base {
public:
    virtual ~base() {
        cout << "base destructor" << endl;
    }
};

class derived : public base {
public:
    ~derived() {
        cout << "derived destructor" << endl;
    }
};

int main() {
    base* b = new derived;
    delete b;
    return 0;
}

