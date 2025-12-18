#include <iostream>
using namespace std;

// Base class
class Sterling {
protected:
    int pounds;
    int shillings;
    int pence;

public:
    Sterling(int po=0, int sh=0, int pe=0) {
        pounds = po;
        shillings = sh;
        pence = pe;
    }

    void show() const {
        cout << "£" << pounds << "." << shillings << "." << pence;
    }
};

// Derived class
class SterFrac : public Sterling {
    int eighths;   // fractional penny (1/8)

public:
    SterFrac(int po, int sh, int pe, int e)
        : Sterling(po, sh, pe) {
        eighths = e;
    }

    void show() const {
        Sterling::show();
        if (eighths != 0)
            cout << "-" << eighths << "/8";
        cout << endl;
    }
};

int main() {
    // Example: £9.19.11-7/8
    SterFrac s(9, 19, 11, 7);
    s.show();
    return 0;
}

