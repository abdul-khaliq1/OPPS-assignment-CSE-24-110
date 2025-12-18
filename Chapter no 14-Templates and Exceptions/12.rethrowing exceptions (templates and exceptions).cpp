#include <iostream>
using namespace std;

class myerror {};

void test() {
    try {
        throw myerror();
    }
    catch (myerror) {
        cout << "exception caught in test()" << endl;
        throw;   // rethrow exception
    }
}

int main() {
    try {
        test();
    }
    catch (myerror) {
        cout << "exception caught in main()" << endl;
    }
    return 0;
}

