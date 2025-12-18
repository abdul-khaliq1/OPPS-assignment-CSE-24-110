#include <iostream>
using namespace std;

class indexerror {
    int index;
public:
    indexerror(int i) {
        index = i;
    }
    void show() const {
        cout << "array index error at index " << index << endl;
    }
};

template <class T>
class SafeArray {
    T arr[5];
public:
    T& operator[](int i) {
        if (i < 0 || i >= 5)
            throw indexerror(i);
        return arr[i];
    }
};

int main() {
    SafeArray<int> a;

    try {
        a[2] = 10;
        cout << a[2] << endl;
        a[7] = 5;          // error
    }
    catch (indexerror e) {
        e.show();
    }

    return 0;
}

