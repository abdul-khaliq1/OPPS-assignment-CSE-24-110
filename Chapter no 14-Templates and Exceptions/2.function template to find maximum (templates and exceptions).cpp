#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maximum(5, 9) << endl;
    cout << maximum(3.4, 1.2) << endl;
    return 0;
}

