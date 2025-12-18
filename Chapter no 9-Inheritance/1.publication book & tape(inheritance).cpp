#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    void getdata() {
        cin >> title >> price;
    }
    void putdata() const {
        cout << title << " " << price << endl;
    }
};

class Book : public Publication {
    int pages;
public:
    void getdata() {
        Publication::getdata();
        cin >> pages;
    }
    void putdata() const {
        Publication::putdata();
        cout << pages << endl;
    }
};

class Tape : public Publication {
    float time;
public:
    void getdata() {
        Publication::getdata();
        cin >> time;
    }
    void putdata() const {
        Publication::putdata();
        cout << time << endl;
    }
};

int main() {
    Book b;
    Tape t;
    b.getdata(); b.putdata();
    t.getdata(); t.putdata();
}

