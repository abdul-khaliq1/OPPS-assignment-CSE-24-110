#include <iostream>
using namespace std;

class Date {
    int d,m,y;
public:
    void get() { cin >> d >> m >> y; }
    void show() const { cout << d << "/" << m << "/" << y << endl; }
};

int main() {
    Date d;
    d.get();
    d.show();
}

