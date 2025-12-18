#include <iostream>
#include <cstring>
using namespace std;

class String {
protected:
    char str[80];
public:
    String(const char s[] = "") {
        strcpy(str, s);
    }
};

class Pstring : public String {
public:
    Pstring(const char s[]) {
        strncpy(str, s, 79);
        str[79] = '\0';
    }

    void show() const {         
        cout << str << endl;
    }
};

int main() {
    Pstring p("This is a very long string that will be cut");
    p.show();                    
    return 0;
}

