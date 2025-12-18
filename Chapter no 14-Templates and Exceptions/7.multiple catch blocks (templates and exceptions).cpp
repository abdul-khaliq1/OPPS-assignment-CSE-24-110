#include <iostream>
using namespace std;

class error1 {};
class error2 {};

int main() {
    int x;
    cin >> x;

    try {
        if (x == 1) throw error1();
        if (x == 2) throw error2();
        cout << "no error";
    }
    catch (error1) {
        cout << "error 1 occurred";
    }
    catch (error2) {
        cout << "error 2 occurred";
    }
    return 0;
}

