#include <iostream>
using namespace std;

class myexception {
public:
    void show() {
        cout << "user defined exception";
    }
};

int main() {
    try {
        throw myexception();
    }
    catch (myexception e) {
        e.show();
    }
    return 0;
}

