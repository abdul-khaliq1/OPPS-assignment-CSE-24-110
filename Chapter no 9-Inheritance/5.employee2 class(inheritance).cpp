#include <iostream>
using namespace std;

enum period { hourly, weekly, monthly };

class Employee {
protected:
    float salary;
};

class Employee2 : public Employee {
    period pay;
public:
    void getdata() {
        cin >> salary;
        int p; cin >> p;
        pay = (period)p;
    }
};

int main() {
    Employee2 e;
    e.getdata();
}

