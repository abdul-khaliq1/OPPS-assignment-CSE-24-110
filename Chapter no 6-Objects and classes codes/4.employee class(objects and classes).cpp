#include <iostream>
using namespace std;

class Employee {
    int id;
    float salary;

public:
    void get() {
        cin >> id >> salary;
    }
    void show() const {
        cout << id << " " << salary << endl;
    }
};

int main() {
    Employee e[3];
    for(int i=0;i<3;i++) e[i].get();
    for(int i=0;i<3;i++) e[i].show();
}

