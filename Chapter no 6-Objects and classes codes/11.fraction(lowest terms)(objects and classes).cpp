#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    Fraction(int a=0,int b=1){ n=a; d=b; }

    void show() const { cout<<n<<"/"<<d<<endl; }
};

int main() {
    Fraction f(2,4);
    f.show();
}

