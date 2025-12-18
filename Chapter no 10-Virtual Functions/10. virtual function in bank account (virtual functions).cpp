#include <iostream>
using namespace std;

class account {
public:
    virtual void interest() {
        cout << "no interest" << endl;
    }
};

class savings : public account {
public:
    void interest() {
        cout << "savings interest" << endl;
    }
};

class current : public account {
public:
    void interest() {
        cout << "no interest" << endl;
    }
};

int main() {
    account* a;
    savings s;
    current c;

    a = &s;
    a->interest();

    a = &c;
    a->interest();

    return 0;
}

