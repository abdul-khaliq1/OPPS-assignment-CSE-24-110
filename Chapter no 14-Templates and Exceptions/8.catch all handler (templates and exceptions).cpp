#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch (...) {
        cout << "unknown exception";
    }
    return 0;
}

