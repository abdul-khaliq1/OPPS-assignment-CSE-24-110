#include <iostream>
using namespace std;

class Counter {
protected:
    int c;
public:
    Counter() { c=0; }
    void show() const { cout<<c<<endl; }
};

class Counter2 : public Counter {
public:
    Counter2 operator++(int) {
        Counter2 temp=*this;
        c++;
        return temp;
    }
};

int main() {
    Counter2 c;
    c++;
    c.show();
}

