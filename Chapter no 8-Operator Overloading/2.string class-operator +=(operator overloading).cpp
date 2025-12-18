#include <iostream>
#include <string>
using namespace std;

class Str {
    string s;
public:
    Str(string x="") { s=x; }

    Str operator += (Str t) {
        s = s + t.s;
        return *this;
    }

    void show() const {
        cout << s << endl;
    }
};

int main() {
    Str s1("Hello "), s2("World");
    s1 += s2;
    s1.show();
}

