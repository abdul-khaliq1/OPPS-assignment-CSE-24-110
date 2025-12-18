#include <iostream>
using namespace std;

class indexerror {};

int main() {
    int arr[5] = {1,2,3,4,5};
    int index;

    cin >> index;

    try {
        if (index < 0 || index >= 5)
            throw indexerror();
        cout << arr[index];
    }
    catch (indexerror) {
        cout << "index out of bounds";
    }
    return 0;
}

