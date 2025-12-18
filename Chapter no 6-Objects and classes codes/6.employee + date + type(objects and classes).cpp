#include <iostream>
using namespace std;

class Date {
    int d,m,y;
public:
    void get(){ cin>>d>>m>>y; }
    void show() const { cout<<d<<"/"<<m<<"/"<<y; }
};

class Employee {
    int id;
    float sal;
    char type;
    Date doj;

public:
    void get() {
        cin >> id >> sal >> type;
        doj.get();
    }

    void show() const {
        cout << id << " " << sal << " " << type << " ";
        doj.show();
        cout << endl;
    }
};

int main() {
    Employee e;
    e.get();
    e.show();
}

