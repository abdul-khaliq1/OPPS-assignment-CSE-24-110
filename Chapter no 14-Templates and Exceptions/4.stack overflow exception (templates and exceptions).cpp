#include <iostream>
using namespace std;

class overflow {};
class underflow {};

class Stack {
    int arr[3];
    int top;
public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == 2)
            throw overflow();
        arr[++top] = x;
    }

    int pop() {
        if (top == -1)
            throw underflow();
        return arr[top--];
    }
};

int main() {
    Stack s;
    try {
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
    }
    catch (overflow) {
        cout << "stack overflow" << endl;
    }
    return 0;
}

