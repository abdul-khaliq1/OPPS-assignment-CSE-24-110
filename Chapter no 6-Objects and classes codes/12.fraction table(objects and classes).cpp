#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    Fraction(int a,int b){ n=a; d=b; }
    void show() const { cout<<n<<"/"<<d<<" "; }
};

int main() {
    int d; cin>>d;
    for(int i=1;i<d;i++){
        for(int j=1;j<d;j++){
            Fraction f(i*j, d*d);
            f.show();
        }
        cout<<endl;
    }
}

