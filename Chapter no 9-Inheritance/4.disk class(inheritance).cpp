#include <iostream>
using namespace std;

enum diskType { CD, DVD };

class Publication {
protected:
    string title;
};

class Disk : public Publication {
    diskType type;
public:
    void getdata() {
        cin >> title;
        int t; cin >> t;
        type = (diskType)t;
    }
};

int main() {
    Disk d;
    d.getdata();
}

