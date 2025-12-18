#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    void get() { cin>>n>>d; }
    void show() const { cout<<n<<"/"<<d<<endl; }

    Fraction add(Fraction f) {
        Fraction t;
        t.n = n*f.d + f.n*d;
        t.d = d*f.d;
        return t;
    }
};

int main() {
    Fraction f1,f2,f3;
    f1.get(); f2.get();
    f3 = f1.add(f2);
    f3.show();
}

