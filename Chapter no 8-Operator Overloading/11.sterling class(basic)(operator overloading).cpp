#include <iostream>
using namespace std;

class Sterling {
    int p,s,d;
public:
    Sterling(int a=0,int b=0,int c=0){ p=a;s=b;d=c; }

    void show() const {
        cout << "£" << p << "." << s << "." << d << endl;
    }
};

int main() {
    Sterling s(5,10,6);
    s.show();
}

