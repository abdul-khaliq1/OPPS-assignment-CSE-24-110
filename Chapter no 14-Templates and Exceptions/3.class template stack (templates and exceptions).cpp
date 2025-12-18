#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top;
public:
    Stack() { top = -1; }

    void push(T x) {
        arr[++top] = x;
    }

    T pop() {
        return arr[top--];
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    return 0;
}

