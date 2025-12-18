#include <iostream>
using namespace std;

class a {
public:
    virtual void display() {
        cout << "class a" << endl;
    }
};

class b : public a {
public:
    void display() override {
        cout << "class b" << endl;
    }
};

int main() {
    a* obj;
    b obj2;
    obj = &obj2;
    obj->display();
    return 0;
}

