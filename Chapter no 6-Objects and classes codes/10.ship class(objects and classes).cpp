#include <iostream>
using namespace std;

class Angle {
public:
    int d; float m; char dir;
    void get(){ cin>>d>>m>>dir; }
    void show() const { cout<<d<<"°"<<m<<"' "<<dir; }
};

class Ship {
    static int count;
    int no;
    Angle lat, lon;

public:
    Ship(){ no=++count; }

    void get() {
        lat.get();
        lon.get();
    }

    void show() const {
        cout<<"Ship "<<no<<": ";
        lat.show(); cout<<" , ";
        lon.show(); cout<<endl;
    }
};

int Ship::count=0;

int main() {
    Ship s;
    s.get();
    s.show();
}

