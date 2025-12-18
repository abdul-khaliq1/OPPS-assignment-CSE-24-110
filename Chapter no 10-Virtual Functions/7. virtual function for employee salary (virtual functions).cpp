#include <iostream>
using namespace std;

class employee {
public:
    virtual float salary() {
        return 0;
    }
};

class manager : public employee {
public:
    float salary() {
        return 50000;
    }
};

class clerk : public employee {
public:
    float salary() {
        return 20000;
    }
};

int main() {
    employee* e;
    manager m;
    clerk c;

    e = &m;
    cout << e->salary() << endl;

    e = &c;
    cout << e->salary() << endl;

    return 0;
}

