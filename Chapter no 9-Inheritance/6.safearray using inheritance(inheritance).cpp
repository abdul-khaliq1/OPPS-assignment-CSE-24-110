#include <iostream>
using namespace std;

class Array {
protected:
    int arr[10];
};

class SafeArray : public Array {
    int low, high;
public:
    SafeArray(int l, int h) {
        low = l; high = h;
    }

    int& operator[](int i) {
        if(i<low || i>high) {
            cout << "Index error";
            exit(1);
        }
        return arr[i-low];
    }
};

int main() {
    SafeArray a(5,9);
    a[5] = 10;
    cout << a[5];
}

