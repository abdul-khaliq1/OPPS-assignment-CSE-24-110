#include <iostream>
#include <cstring>
using namespace std;

class Pstring {
protected:
    char str[80];
public:
    Pstring(const char s[]="") {
        strncpy(str,s,79);
        str[79]='\0';
    }
    void display() const {
        cout<<str<<endl;
    }
};

class Pstring2 : public Pstring {
public:
    Pstring2(const char s[]=""):Pstring(s){}

    Pstring2 left(int n) {
        char t[80];
        strncpy(t,str,n);
        t[n]='\0';
        return Pstring2(t);
    }
};

int main() {
    Pstring2 s("HELLO WORLD");
    s.left(5).display();
}

