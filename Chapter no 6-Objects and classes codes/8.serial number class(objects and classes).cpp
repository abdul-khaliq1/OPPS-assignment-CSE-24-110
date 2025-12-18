#include <iostream>
using namespace std;

class Serial {
    static int count;
    int no;

public:
    Serial() {
        count++;
        no = count;
    }

    void show() const {
        cout << "Object " << no << endl;
    }
};

int Serial::count = 0;

int main() {
    Serial a,b,c;
    a.show(); b.show(); c.show();
}

