#include <iostream>
using namespace std;

class Date {
public:
    int d,m,y;
};

class Publication {
protected:
    string title;
};

class Publication2 : public Publication {
    Date dt;
public:
    void getdata() {
        cin >> title >> dt.d >> dt.m >> dt.y;
    }
};

int main() {
    Publication2 p;
    p.getdata();
}

