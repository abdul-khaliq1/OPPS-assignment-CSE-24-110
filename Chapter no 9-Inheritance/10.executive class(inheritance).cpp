#include <iostream>
using namespace std;

class Manager {
protected:
    float bonus;
};

class Executive : public Manager {
    int shares;
public:
    void getdata() {
        cin >> bonus >> shares;
    }
};

int main() {
    Executive e;
    e.getdata();
}

