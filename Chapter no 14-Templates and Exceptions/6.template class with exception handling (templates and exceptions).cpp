#include <iostream>
using namespace std;

class dividebyzero {};

template <class T>
T divide(T a, T b) {
    if (b == 0)
        throw dividebyzero();
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0);
    }
    catch (dividebyzero) {
        cout << "cannot divide by zero";
    }
    return 0;
}

