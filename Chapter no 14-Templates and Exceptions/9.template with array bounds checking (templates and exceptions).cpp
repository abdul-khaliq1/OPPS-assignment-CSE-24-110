#include <iostream>
using namespace std;

class bounderror {};

template <class T>
class SafeArray {
    T arr[5];
public:
    T& operator[](int i) {
        if (i < 0 || i >= 5)
            throw bounderror();
        return arr[i];
    }
};

int main() {
    SafeArray<int> a;
    try {
        a[2] = 10;
        cout << a[2] << endl;
        cout << a[6];
    }
    catch (bounderror) {
        cout << "array index error";
    }
    return 0;
}

